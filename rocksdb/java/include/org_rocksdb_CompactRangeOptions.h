/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_CompactRangeOptions */

#ifndef _Included_org_rocksdb_CompactRangeOptions
#define _Included_org_rocksdb_CompactRangeOptions
#ifdef __cplusplus
extern "C" {
#endif
#undef org_rocksdb_CompactRangeOptions_VALUE_kSkip
#define org_rocksdb_CompactRangeOptions_VALUE_kSkip 0L
#undef org_rocksdb_CompactRangeOptions_VALUE_kIfHaveCompactionFilter
#define org_rocksdb_CompactRangeOptions_VALUE_kIfHaveCompactionFilter 1L
#undef org_rocksdb_CompactRangeOptions_VALUE_kForce
#define org_rocksdb_CompactRangeOptions_VALUE_kForce 2L
#undef org_rocksdb_CompactRangeOptions_VALUE_kForceOptimized
#define org_rocksdb_CompactRangeOptions_VALUE_kForceOptimized 3L
/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    newCompactRangeOptions
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_CompactRangeOptions_newCompactRangeOptions
  (JNIEnv *, jclass);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompactRangeOptions_disposeInternal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    exclusiveManualCompaction
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_CompactRangeOptions_exclusiveManualCompaction
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    setExclusiveManualCompaction
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompactRangeOptions_setExclusiveManualCompaction
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    changeLevel
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_CompactRangeOptions_changeLevel
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    setChangeLevel
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompactRangeOptions_setChangeLevel
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    targetLevel
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_CompactRangeOptions_targetLevel
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    setTargetLevel
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompactRangeOptions_setTargetLevel
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    targetPathId
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_CompactRangeOptions_targetPathId
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    setTargetPathId
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompactRangeOptions_setTargetPathId
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    bottommostLevelCompaction
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_CompactRangeOptions_bottommostLevelCompaction
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    setBottommostLevelCompaction
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompactRangeOptions_setBottommostLevelCompaction
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    allowWriteStall
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_CompactRangeOptions_allowWriteStall
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    setAllowWriteStall
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompactRangeOptions_setAllowWriteStall
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    setMaxSubcompactions
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompactRangeOptions_setMaxSubcompactions
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    maxSubcompactions
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_CompactRangeOptions_maxSubcompactions
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    setFullHistoryTSLow
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompactRangeOptions_setFullHistoryTSLow
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    fullHistoryTSLow
 * Signature: (J)Lorg/rocksdb/CompactRangeOptions/Timestamp;
 */
JNIEXPORT jobject JNICALL Java_org_rocksdb_CompactRangeOptions_fullHistoryTSLow
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    setCanceled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_CompactRangeOptions_setCanceled
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_CompactRangeOptions
 * Method:    canceled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_CompactRangeOptions_canceled
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif