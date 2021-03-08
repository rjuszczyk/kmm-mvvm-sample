package com.example

import com.example.shared.newInstance
import com.example.shared.schema
import com.squareup.sqldelight.Transacter
import com.squareup.sqldelight.db.SqlDriver

public interface Database : Transacter {
  public val playerQueries: PlayerQueries

  public companion object {
    public val Schema: SqlDriver.Schema
      get() = Database::class.schema

    public operator fun invoke(driver: SqlDriver): Database = Database::class.newInstance(driver)
  }
}
