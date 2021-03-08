package com.example.shared

import com.example.Database
import com.example.HockeyPlayer
import com.example.PlayerQueries
import com.squareup.sqldelight.Query
import com.squareup.sqldelight.TransacterImpl
import com.squareup.sqldelight.`internal`.copyOnWriteList
import com.squareup.sqldelight.db.SqlDriver
import kotlin.Any
import kotlin.Int
import kotlin.Long
import kotlin.String
import kotlin.Unit
import kotlin.collections.MutableList
import kotlin.reflect.KClass

internal val KClass<Database>.schema: SqlDriver.Schema
  get() = DatabaseImpl.Schema

internal fun KClass<Database>.newInstance(driver: SqlDriver): Database = DatabaseImpl(driver)

private class DatabaseImpl(
  driver: SqlDriver
) : TransacterImpl(driver), Database {
  public override val playerQueries: PlayerQueriesImpl = PlayerQueriesImpl(this, driver)

  public object Schema : SqlDriver.Schema {
    public override val version: Int
      get() = 1

    public override fun create(driver: SqlDriver): Unit {
      driver.execute(null, """
          |CREATE TABLE hockeyPlayer (
          |  player_number INTEGER NOT NULL,
          |  full_name TEXT NOT NULL
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |INSERT INTO hockeyPlayer (player_number, full_name)
          |VALUES (15, 'Ryan Getzlaf')
          """.trimMargin(), 0)
      driver.execute(null, "CREATE INDEX hockeyPlayer_full_name ON hockeyPlayer(full_name)", 0)
    }

    public override fun migrate(
      driver: SqlDriver,
      oldVersion: Int,
      newVersion: Int
    ): Unit {
    }
  }
}

private class PlayerQueriesImpl(
  private val database: DatabaseImpl,
  private val driver: SqlDriver
) : TransacterImpl(driver), PlayerQueries {
  internal val selectAll: MutableList<Query<*>> = copyOnWriteList()

  public override fun <T : Any> selectAll(mapper: (player_number: Long, full_name: String) -> T):
      Query<T> = Query(696171961, selectAll, driver, "Player.sq", "selectAll", """
  |SELECT *
  |FROM hockeyPlayer
  """.trimMargin()) { cursor ->
    mapper(
      cursor.getLong(0)!!,
      cursor.getString(1)!!
    )
  }

  public override fun selectAll(): Query<HockeyPlayer> = selectAll { player_number, full_name ->
    HockeyPlayer(
      player_number,
      full_name
    )
  }

  public override fun insert(player_number: Long, full_name: String): Unit {
    driver.execute(462421125, """
    |INSERT INTO hockeyPlayer(player_number, full_name)
    |VALUES (?, ?)
    """.trimMargin(), 2) {
      bindLong(1, player_number)
      bindString(2, full_name)
    }
    notifyQueries(462421125, {database.playerQueries.selectAll})
  }

  public override fun insertFullPlayerObject(hockeyPlayer: HockeyPlayer): Unit {
    driver.execute(-683119532, """
    |INSERT INTO hockeyPlayer(player_number, full_name)
    |VALUES (?, ?)
    """.trimMargin(), 2) {
      bindLong(1, hockeyPlayer.player_number)
      bindString(2, hockeyPlayer.full_name)
    }
    notifyQueries(-683119532, {database.playerQueries.selectAll})
  }
}
