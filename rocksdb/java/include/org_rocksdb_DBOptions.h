/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_DBOptions */

#ifndef _Included_org_rocksdb_DBOptions
#define _Included_org_rocksdb_DBOptions
#ifdef __cplusplus
extern "C" {
#endif
#undef org_rocksdb_DBOptions_DEFAULT_NUM_SHARD_BITS
#define org_rocksdb_DBOptions_DEFAULT_NUM_SHARD_BITS -1L
/*
 * Class:     org_rocksdb_DBOptions
 * Method:    getDBOptionsFromProps
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_getDBOptionsFromProps__JLjava_lang_String_2
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    getDBOptionsFromProps
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_getDBOptionsFromProps__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    newDBOptions
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_newDBOptions
  (JNIEnv *, jclass);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    copyDBOptions
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_copyDBOptions
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    newDBOptionsFromOptions
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_newDBOptionsFromOptions
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_disposeInternal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    optimizeForSmallDb
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_optimizeForSmallDb
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setIncreaseParallelism
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setIncreaseParallelism
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setCreateIfMissing
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setCreateIfMissing
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    createIfMissing
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_createIfMissing
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setCreateMissingColumnFamilies
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setCreateMissingColumnFamilies
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    createMissingColumnFamilies
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_createMissingColumnFamilies
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setEnv
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setEnv
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setErrorIfExists
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setErrorIfExists
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    errorIfExists
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_errorIfExists
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setParanoidChecks
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setParanoidChecks
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    paranoidChecks
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_paranoidChecks
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setRateLimiter
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setRateLimiter
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setSstFileManager
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setSstFileManager
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setLogger
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setLogger
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setInfoLogLevel
 * Signature: (JB)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setInfoLogLevel
  (JNIEnv *, jobject, jlong, jbyte);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    infoLogLevel
 * Signature: (J)B
 */
JNIEXPORT jbyte JNICALL Java_org_rocksdb_DBOptions_infoLogLevel
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setMaxOpenFiles
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setMaxOpenFiles
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    maxOpenFiles
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_DBOptions_maxOpenFiles
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setMaxFileOpeningThreads
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setMaxFileOpeningThreads
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    maxFileOpeningThreads
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_DBOptions_maxFileOpeningThreads
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setMaxTotalWalSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setMaxTotalWalSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    maxTotalWalSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_maxTotalWalSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setStatistics
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setStatistics
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    statistics
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_statistics
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    useFsync
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_useFsync
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setUseFsync
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setUseFsync
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setDbPaths
 * Signature: (J[Ljava/lang/String;[J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setDbPaths
  (JNIEnv *, jobject, jlong, jobjectArray, jlongArray);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    dbPathsLen
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_dbPathsLen
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    dbPaths
 * Signature: (J[Ljava/lang/String;[J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_dbPaths
  (JNIEnv *, jobject, jlong, jobjectArray, jlongArray);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setDbLogDir
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setDbLogDir
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    dbLogDir
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_rocksdb_DBOptions_dbLogDir
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setWalDir
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setWalDir
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    walDir
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_rocksdb_DBOptions_walDir
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setDeleteObsoleteFilesPeriodMicros
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setDeleteObsoleteFilesPeriodMicros
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    deleteObsoleteFilesPeriodMicros
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_deleteObsoleteFilesPeriodMicros
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setMaxBackgroundCompactions
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setMaxBackgroundCompactions
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    maxBackgroundCompactions
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_DBOptions_maxBackgroundCompactions
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setMaxSubcompactions
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setMaxSubcompactions
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    maxSubcompactions
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_DBOptions_maxSubcompactions
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setMaxBackgroundFlushes
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setMaxBackgroundFlushes
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    maxBackgroundFlushes
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_DBOptions_maxBackgroundFlushes
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setMaxBackgroundJobs
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setMaxBackgroundJobs
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    maxBackgroundJobs
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_DBOptions_maxBackgroundJobs
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setMaxLogFileSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setMaxLogFileSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    maxLogFileSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_maxLogFileSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setLogFileTimeToRoll
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setLogFileTimeToRoll
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    logFileTimeToRoll
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_logFileTimeToRoll
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setKeepLogFileNum
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setKeepLogFileNum
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    keepLogFileNum
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_keepLogFileNum
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setRecycleLogFileNum
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setRecycleLogFileNum
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    recycleLogFileNum
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_recycleLogFileNum
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setMaxManifestFileSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setMaxManifestFileSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    maxManifestFileSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_maxManifestFileSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setTableCacheNumshardbits
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setTableCacheNumshardbits
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    tableCacheNumshardbits
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_DBOptions_tableCacheNumshardbits
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setWalTtlSeconds
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setWalTtlSeconds
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    walTtlSeconds
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_walTtlSeconds
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setWalSizeLimitMB
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setWalSizeLimitMB
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    walSizeLimitMB
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_walSizeLimitMB
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setMaxWriteBatchGroupSizeBytes
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setMaxWriteBatchGroupSizeBytes
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    maxWriteBatchGroupSizeBytes
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_maxWriteBatchGroupSizeBytes
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setManifestPreallocationSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setManifestPreallocationSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    manifestPreallocationSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_manifestPreallocationSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setUseDirectReads
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setUseDirectReads
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    useDirectReads
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_useDirectReads
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setUseDirectIoForFlushAndCompaction
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setUseDirectIoForFlushAndCompaction
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    useDirectIoForFlushAndCompaction
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_useDirectIoForFlushAndCompaction
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setAllowFAllocate
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setAllowFAllocate
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    allowFAllocate
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_allowFAllocate
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setAllowMmapReads
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setAllowMmapReads
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    allowMmapReads
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_allowMmapReads
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setAllowMmapWrites
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setAllowMmapWrites
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    allowMmapWrites
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_allowMmapWrites
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setIsFdCloseOnExec
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setIsFdCloseOnExec
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    isFdCloseOnExec
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_isFdCloseOnExec
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setStatsDumpPeriodSec
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setStatsDumpPeriodSec
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    statsDumpPeriodSec
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_DBOptions_statsDumpPeriodSec
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setStatsPersistPeriodSec
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setStatsPersistPeriodSec
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    statsPersistPeriodSec
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_DBOptions_statsPersistPeriodSec
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setStatsHistoryBufferSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setStatsHistoryBufferSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    statsHistoryBufferSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_statsHistoryBufferSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setAdviseRandomOnOpen
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setAdviseRandomOnOpen
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    adviseRandomOnOpen
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_adviseRandomOnOpen
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setDbWriteBufferSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setDbWriteBufferSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setWriteBufferManager
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setWriteBufferManager
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    dbWriteBufferSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_dbWriteBufferSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setAccessHintOnCompactionStart
 * Signature: (JB)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setAccessHintOnCompactionStart
  (JNIEnv *, jobject, jlong, jbyte);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    accessHintOnCompactionStart
 * Signature: (J)B
 */
JNIEXPORT jbyte JNICALL Java_org_rocksdb_DBOptions_accessHintOnCompactionStart
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setCompactionReadaheadSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setCompactionReadaheadSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    compactionReadaheadSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_compactionReadaheadSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setRandomAccessMaxBufferSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setRandomAccessMaxBufferSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    randomAccessMaxBufferSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_randomAccessMaxBufferSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setWritableFileMaxBufferSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setWritableFileMaxBufferSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    writableFileMaxBufferSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_writableFileMaxBufferSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setUseAdaptiveMutex
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setUseAdaptiveMutex
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    useAdaptiveMutex
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_useAdaptiveMutex
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setBytesPerSync
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setBytesPerSync
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    bytesPerSync
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_bytesPerSync
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setWalBytesPerSync
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setWalBytesPerSync
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    walBytesPerSync
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_walBytesPerSync
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setStrictBytesPerSync
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setStrictBytesPerSync
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    strictBytesPerSync
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_strictBytesPerSync
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setEventListeners
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setEventListeners
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    eventListeners
 * Signature: (J)[Lorg/rocksdb/AbstractEventListener;
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_DBOptions_eventListeners
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setEnableThreadTracking
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setEnableThreadTracking
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    enableThreadTracking
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_enableThreadTracking
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setDelayedWriteRate
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setDelayedWriteRate
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    delayedWriteRate
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_delayedWriteRate
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setEnablePipelinedWrite
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setEnablePipelinedWrite
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    enablePipelinedWrite
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_enablePipelinedWrite
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setUnorderedWrite
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setUnorderedWrite
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    unorderedWrite
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_unorderedWrite
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setAllowConcurrentMemtableWrite
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setAllowConcurrentMemtableWrite
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    allowConcurrentMemtableWrite
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_allowConcurrentMemtableWrite
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setEnableWriteThreadAdaptiveYield
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setEnableWriteThreadAdaptiveYield
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    enableWriteThreadAdaptiveYield
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_enableWriteThreadAdaptiveYield
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setWriteThreadMaxYieldUsec
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setWriteThreadMaxYieldUsec
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    writeThreadMaxYieldUsec
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_writeThreadMaxYieldUsec
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setWriteThreadSlowYieldUsec
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setWriteThreadSlowYieldUsec
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    writeThreadSlowYieldUsec
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_writeThreadSlowYieldUsec
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setSkipStatsUpdateOnDbOpen
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setSkipStatsUpdateOnDbOpen
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    skipStatsUpdateOnDbOpen
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_skipStatsUpdateOnDbOpen
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setSkipCheckingSstFileSizesOnDbOpen
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setSkipCheckingSstFileSizesOnDbOpen
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    skipCheckingSstFileSizesOnDbOpen
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_skipCheckingSstFileSizesOnDbOpen
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setWalRecoveryMode
 * Signature: (JB)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setWalRecoveryMode
  (JNIEnv *, jobject, jlong, jbyte);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    walRecoveryMode
 * Signature: (J)B
 */
JNIEXPORT jbyte JNICALL Java_org_rocksdb_DBOptions_walRecoveryMode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setAllow2pc
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setAllow2pc
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    allow2pc
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_allow2pc
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setRowCache
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setRowCache
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setWalFilter
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setWalFilter
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setFailIfOptionsFileError
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setFailIfOptionsFileError
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    failIfOptionsFileError
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_failIfOptionsFileError
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setDumpMallocStats
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setDumpMallocStats
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    dumpMallocStats
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_dumpMallocStats
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setAvoidFlushDuringRecovery
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setAvoidFlushDuringRecovery
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    avoidFlushDuringRecovery
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_avoidFlushDuringRecovery
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setAvoidFlushDuringShutdown
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setAvoidFlushDuringShutdown
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    avoidFlushDuringShutdown
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_avoidFlushDuringShutdown
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setAllowIngestBehind
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setAllowIngestBehind
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    allowIngestBehind
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_allowIngestBehind
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setTwoWriteQueues
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setTwoWriteQueues
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    twoWriteQueues
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_twoWriteQueues
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setManualWalFlush
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setManualWalFlush
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    manualWalFlush
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_manualWalFlush
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setAtomicFlush
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setAtomicFlush
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    atomicFlush
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_atomicFlush
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setAvoidUnnecessaryBlockingIO
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setAvoidUnnecessaryBlockingIO
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    avoidUnnecessaryBlockingIO
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_avoidUnnecessaryBlockingIO
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setPersistStatsToDisk
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setPersistStatsToDisk
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    persistStatsToDisk
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_persistStatsToDisk
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setWriteDbidToManifest
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setWriteDbidToManifest
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    writeDbidToManifest
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_writeDbidToManifest
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setLogReadaheadSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setLogReadaheadSize
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    logReadaheadSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_logReadaheadSize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setBestEffortsRecovery
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setBestEffortsRecovery
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    bestEffortsRecovery
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_DBOptions_bestEffortsRecovery
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setMaxBgErrorResumeCount
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setMaxBgErrorResumeCount
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    maxBgerrorResumeCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_DBOptions_maxBgerrorResumeCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    setBgerrorResumeRetryInterval
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_DBOptions_setBgerrorResumeRetryInterval
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_rocksdb_DBOptions
 * Method:    bgerrorResumeRetryInterval
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_DBOptions_bgerrorResumeRetryInterval
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif