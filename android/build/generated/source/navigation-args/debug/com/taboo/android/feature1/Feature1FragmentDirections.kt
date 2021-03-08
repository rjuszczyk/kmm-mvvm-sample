package com.taboo.android.feature1

import android.os.Bundle
import android.os.Parcelable
import androidx.navigation.NavDirections
import com.taboo.android.R
import com.taboo.shared.domain.SomeItemId
import java.io.Serializable
import java.lang.UnsupportedOperationException
import kotlin.Int
import kotlin.Suppress

public class Feature1FragmentDirections private constructor() {
  private data class ActionFeature1ToFeature2(
    public val someItemId: SomeItemId
  ) : NavDirections {
    public override fun getActionId(): Int = R.id.action_feature1_to_feature2

    @Suppress("CAST_NEVER_SUCCEEDS")
    public override fun getArguments(): Bundle {
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
  }

  public companion object {
    public fun actionFeature1ToFeature2(someItemId: SomeItemId): NavDirections =
        ActionFeature1ToFeature2(someItemId)
  }
}
