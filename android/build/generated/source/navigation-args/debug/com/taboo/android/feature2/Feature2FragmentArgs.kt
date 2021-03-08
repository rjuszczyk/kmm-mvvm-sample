package com.taboo.android.feature2

import android.os.Bundle
import android.os.Parcelable
import androidx.navigation.NavArgs
import com.taboo.shared.domain.SomeItemId
import java.io.Serializable
import java.lang.IllegalArgumentException
import java.lang.UnsupportedOperationException
import kotlin.Suppress
import kotlin.jvm.JvmStatic

public data class Feature2FragmentArgs(
  public val someItemId: SomeItemId
) : NavArgs {
  @Suppress("CAST_NEVER_SUCCEEDS")
  public fun toBundle(): Bundle {
    val result = Bundle()
    if (Parcelable::class.java.isAssignableFrom(SomeItemId::class.java)) {
      result.putParcelable("someItemId", this.someItemId as Parcelable)
    } else if (Serializable::class.java.isAssignableFrom(SomeItemId::class.java)) {
      result.putSerializable("someItemId", this.someItemId as Serializable)
    } else {
      throw UnsupportedOperationException(SomeItemId::class.java.name +
          " must implement Parcelable or Serializable or must be an Enum.")
    }
    return result
  }

  public companion object {
    @JvmStatic
    public fun fromBundle(bundle: Bundle): Feature2FragmentArgs {
      bundle.setClassLoader(Feature2FragmentArgs::class.java.classLoader)
      val __someItemId : SomeItemId?
      if (bundle.containsKey("someItemId")) {
        if (Parcelable::class.java.isAssignableFrom(SomeItemId::class.java) ||
            Serializable::class.java.isAssignableFrom(SomeItemId::class.java)) {
          __someItemId = bundle.get("someItemId") as SomeItemId?
        } else {
          throw UnsupportedOperationException(SomeItemId::class.java.name +
              " must implement Parcelable or Serializable or must be an Enum.")
        }
        if (__someItemId == null) {
          throw IllegalArgumentException("Argument \"someItemId\" is marked as non-null but was passed a null value.")
        }
      } else {
        throw IllegalArgumentException("Required argument \"someItemId\" is missing and does not have an android:defaultValue")
      }
      return Feature2FragmentArgs(__someItemId)
    }
  }
}
