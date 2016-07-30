//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCCloudDocsAppsObserver-Protocol.h>

@class BRCAccountWaitOperation, BRCApplyScheduler, BRCContainerScheduler, BRCDeadlineScheduler, BRCDiskSpaceReclaimer, BRCFSDownloader, BRCFSEventsMonitor, BRCFSReader, BRCFSUploader, BRCFSWriter, BRCGlobalProgress, BRCNotificationManager, BRCRelativePath, BRCServerPersistedState, BRCStageRegistry, BRCThrottle, BRCUserNotification, CDSession, NSHashTable, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSURL, PQLConnection;
@protocol BRCFileCoordinationReading, BRCFileCoordinationWriting, OS_dispatch_queue, OS_dispatch_source;

@interface BRCAccountSession : NSObject <BRCCloudDocsAppsObserver>
{
    NSMutableDictionary *_syncContexts;
    BRCDeadlineScheduler *_defaultScheduler;
    NSURL *_dbURL;
    NSObject<OS_dispatch_source> *_dbWatcher;
    NSObject<OS_dispatch_queue> *_dbWatcherQueue;
    int _cloudDocsFD;
    CDUnknownBlockType _dbProfilingHook;
    NSString *_databaseID;
    NSHashTable *_miscOperations;
    PQLConnection *_clientDB;
    PQLConnection *_serverDB;
    NSMutableDictionary *_clientState;
    BRCServerPersistedState *_serverState;
    NSString *_accountID;
    NSMutableSet *_xpcClients;
    _Bool _resumed;
    struct _opaque_pthread_mutex_t _containersCreationLock;
    struct _opaque_pthread_rwlock_t _containersLock;
    NSMutableDictionary *_serverZoneByZoneRowID;
    NSMutableDictionary *_privateLocalContainersByID;
    NSMutableDictionary *_privateServerZonesByID;
    NSMutableDictionary *_sharedLocalContainersByMangledID;
    NSMutableDictionary *_sharedServerZonesByMangledID;
    BRCGlobalProgress *_globalProgress;
    unsigned long long _lastDiskSpaceCheckTime;
    unsigned long long _availableDiskSpace;
    _Bool _isGreedy;
    struct br_pacer_t *_reschedulePendingDiskItemsPacer;
    struct br_pacer_t *_updateDiskSpacePacer;
    NSNumber *_accountSize;
    _Bool _accountIsReady;
    BRCAccountWaitOperation *_accountWaitOperation;
    _Bool _isCancelled;
    NSString *_appSupportDirPath;
    NSString *_cacheDirPath;
    NSString *_rootDirPath;
    NSString *_ubiquityTokenSalt;
    BRCContainerScheduler *_containerScheduler;
    BRCApplyScheduler *_applyScheduler;
    BRCFSEventsMonitor *_fsEventsMonitor;
    BRCFSReader<BRCFileCoordinationReading> *_fsReader;
    BRCFSUploader *_fsUploader;
    BRCFSDownloader *_fsDownloader;
    BRCFSWriter<BRCFileCoordinationWriting> *_fsWriter;
    BRCUserNotification *_userNotification;
    BRCNotificationManager *_notificationManager;
    BRCStageRegistry *_stageRegistry;
    BRCDiskSpaceReclaimer *_diskReclaimer;
    CDSession *_coreDuetSession;
    BRCThrottle *_containerScanThrottle;
    BRCThrottle *_containerResetThrottle;
    BRCThrottle *_aliasRemovalThrottle;
    BRCThrottle *_lostItemThrottle;
    BRCThrottle *_operationFailureThrottle;
    BRCThrottle *_syncAppContainerThrottle;
}

+ (id)sessionForDumpingDatabasesAtURL:(id)arg1;
@property(readonly, nonatomic) BRCGlobalProgress *globalProgress; // @synthesize globalProgress=_globalProgress;
@property(readonly, nonatomic) BRCThrottle *syncAppContainerThrottle; // @synthesize syncAppContainerThrottle=_syncAppContainerThrottle;
@property(readonly, nonatomic) BRCThrottle *operationFailureThrottle; // @synthesize operationFailureThrottle=_operationFailureThrottle;
@property(readonly, nonatomic) BRCThrottle *lostItemThrottle; // @synthesize lostItemThrottle=_lostItemThrottle;
@property(readonly, nonatomic) BRCThrottle *aliasRemovalThrottle; // @synthesize aliasRemovalThrottle=_aliasRemovalThrottle;
@property(readonly, nonatomic) BRCThrottle *containerResetThrottle; // @synthesize containerResetThrottle=_containerResetThrottle;
@property(readonly, nonatomic) BRCThrottle *containerScanThrottle; // @synthesize containerScanThrottle=_containerScanThrottle;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) CDSession *coreDuetSession; // @synthesize coreDuetSession=_coreDuetSession;
@property(readonly, nonatomic) BRCDiskSpaceReclaimer *diskReclaimer; // @synthesize diskReclaimer=_diskReclaimer;
@property(readonly, nonatomic) BRCUserNotification *userNotification; // @synthesize userNotification=_userNotification;
@property(readonly, nonatomic) BRCFSDownloader *fsDownloader; // @synthesize fsDownloader=_fsDownloader;
@property(readonly, nonatomic) BRCFSUploader *fsUploader; // @synthesize fsUploader=_fsUploader;
@property(readonly, nonatomic) BRCDeadlineScheduler *defaultScheduler; // @synthesize defaultScheduler=_defaultScheduler;
@property(readonly, nonatomic) NSString *ubiquityTokenSalt; // @synthesize ubiquityTokenSalt=_ubiquityTokenSalt;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) NSString *rootDirPath; // @synthesize rootDirPath=_rootDirPath;
@property(retain, nonatomic) NSString *cacheDirPath; // @synthesize cacheDirPath=_cacheDirPath;
@property(retain, nonatomic) NSString *appSupportDirPath; // @synthesize appSupportDirPath=_appSupportDirPath;
- (void).cxx_destruct;
@property(readonly, nonatomic) BRCStageRegistry *stageRegistry; // @synthesize stageRegistry=_stageRegistry;
@property(readonly, nonatomic) BRCNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) BRCFSWriter<BRCFileCoordinationWriting> *fsWriter; // @synthesize fsWriter=_fsWriter;
@property(readonly, nonatomic) BRCFSReader<BRCFileCoordinationReading> *fsReader; // @synthesize fsReader=_fsReader;
@property(readonly, nonatomic) BRCFSEventsMonitor *fsEventsMonitor; // @synthesize fsEventsMonitor=_fsEventsMonitor;
@property(readonly, nonatomic) BRCContainerScheduler *containerScheduler; // @synthesize containerScheduler=_containerScheduler;
@property(readonly, nonatomic) BRCApplyScheduler *applyScheduler; // @synthesize applyScheduler=_applyScheduler;
@property(readonly, nonatomic) BRCRelativePath *root;
- (void)dumpMiscOperationsToContext:(id)arg1;
- (void)dumpXPCClientsToContext:(id)arg1;
@property(readonly, nonatomic) _Bool isGreedy;
- (void)accountSizeDidChange;
- (unsigned long long)accountSize;
- (void)availableDiskSpaceDidChange;
- (unsigned long long)availableDiskSpaceUsingCache:(_Bool)arg1 schedulingPendingDiskItemsIfNeeded:(_Bool)arg2;
- (unsigned long long)availableDiskSpaceUsingCache:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long availableDiskSpace;
- (void)_showiCloudDriveAppUpSellDialogIfNeeded;
- (void)cloudDocsAppsListDidChange:(id)arg1;
- (void)enumerateServerZones:(CDUnknownBlockType)arg1;
- (void)enumerateSharedContainers:(CDUnknownBlockType)arg1;
- (void)enumeratePrivateContainers:(CDUnknownBlockType)arg1;
- (id)containerByMangledID:(id)arg1;
- (id)sharedContainerByMangledID:(id)arg1;
- (id)privateContainerByMangledID:(id)arg1;
- (id)privateContainerByID:(id)arg1;
- (id)serverZoneByRowID:(id)arg1;
- (void)destroySharedContainer:(id)arg1;
- (id)createSharedContainerIfNeeded:(id)arg1 ownerName:(id)arg2;
- (id)createPrivateContainerIfNeeded:(id)arg1;
- (_Bool)createSharedContainerOnDiskWithMangledID:(id)arg1 createdRoot:(_Bool *)arg2;
- (_Bool)createPrivateContainerOnDisk:(id)arg1 createdRoot:(_Bool *)arg2 createdDocuments:(_Bool *)arg3;
- (id)_unloadContainers;
- (id)_loadedContainers;
- (void)_loadContainersFromDisk;
- (void)destroyLocalData;
- (void)destroyLocalDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)closeAndResetLocalState;
- (void)close;
@property(readonly, nonatomic) BRCAccountWaitOperation *accountWaitOperation;
- (void)resume;
- (_Bool)openWithError:(id *)arg1;
- (void)_setupThrottles;
- (void)markAccountMigrationComplete;
- (void)_createAccountSupportPathIfNeeded:(id)arg1 protectParent:(_Bool)arg2;
- (void)_setupSharedPackageExtensionsPlist;
- (void)userDefaultsChanged;
- (void)dealloc;
- (void)closeXPCClientsSync;
- (void)addMiscOperation:(id)arg1;
- (void)unregisterClient:(id)arg1;
- (void)registerClient:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithAccountID:(id)arg1 salt:(id)arg2;
- (id)init;
- (_Bool)backupDatabaseToURL:(id)arg1 error:(id *)arg2;
- (_Bool)dumpDatabaseToFileHandle:(id)arg1 containerID:(id)arg2 error:(id *)arg3;
- (_Bool)dumpStatusToFileHandle:(id)arg1 containerID:(id)arg2 error:(id *)arg3;
- (_Bool)_dumpContainer:(id)arg1 toContext:(id)arg2 error:(id *)arg3;
- (_Bool)_dumpContainerStatus:(id)arg1 toContext:(id)arg2 error:(id *)arg3;
- (void)_dumpContainerBlockedState:(id)arg1 toContext:(id)arg2;
- (_Bool)closeDBWithError:(id *)arg1;
- (_Bool)openDBWithError:(id *)arg1;
- (_Bool)validateDatabase:(id)arg1 serverTruth:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_openServerTruthConnectionWithError:(id *)arg1;
- (_Bool)_openClientTruthConnectionWithError:(id *)arg1;
- (_Bool)_checkIntegrity:(id)arg1 serverTruth:(_Bool)arg2 error:(id *)arg3;
- (void)_registerLastBootIfNeeded:(id)arg1 table:(struct NSObject *)arg2;
- (id)createOwnerKeyForName:(id)arg1;
- (id)ownerNameForKey:(id)arg1 db:(id)arg2;
- (id)ownerKeyForName:(id)arg1 db:(id)arg2;
- (void)setOwnerIdentity:(id)arg1 forName:(id)arg2;
- (id)ownerIdentityForName:(id)arg1 db:(id)arg2;
- (id)ownerIdentityForKey:(id)arg1;
- (id)createDeviceKeyForNameInServerDB:(id)arg1;
- (id)deviceKeyForName:(id)arg1 db:(id)arg2;
- (id)pendingDownloadItemWithDocumentID:(unsigned int)arg1;
- (struct PQLResultSet *)itemsNeedingIndexingEnumeratorWithMinNotifRank:(unsigned long long)arg1 maxNotifRank:(unsigned long long)arg2;
- (struct PQLResultSet *)bouncedItemsEnumerator;
- (struct PQLResultSet *)stagedItemsEnumerator;
- (struct PQLResultSet *)privateServerZonesEnumerator:(id)arg1;
- (id)privateServerZoneByID:(id)arg1 db:(id)arg2;
- (id)newPrivateServerZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)privateLocalContainerByID:(id)arg1 db:(id)arg2;
- (struct PQLResultSet *)privateLocalContainersEnumerator:(id)arg1;
- (id)newPrivateLocalContainerFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (id)sharedServerZoneByName:(id)arg1 ownerName:(id)arg2 db:(id)arg3;
- (struct PQLResultSet *)sharedServerZonesEnumerator:(id)arg1;
- (id)newSharedServerZoneFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (struct PQLResultSet *)sharedLocalContainersEnumerator:(id)arg1;
- (id)newSharedLocalContainerFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (_Bool)_createSharedLocalContainer:(id)arg1 ownerName:(id)arg2;
- (_Bool)_createPrivateLocalContainer:(id)arg1;
- (_Bool)_deleteLocalContainer:(id)arg1;
- (_Bool)_createLocalContainer:(id)arg1 ownerName:(id)arg2;
- (_Bool)deleteServerZone:(id)arg1;
- (_Bool)createServerZone:(id)arg1;
- (_Bool)saveLocalContainerToDB:(id)arg1;
- (_Bool)saveServerZoneToDB:(id)arg1;
- (void)preventDatabaseFromBeingReused;
- (_Bool)_stepBackupDetector:(struct backup_detector)arg1 newState:(struct backup_detector *)arg2 error:(id *)arg3;
- (_Bool)_setupBackupDetector:(struct backup_detector *)arg1 error:(id *)arg2;
- (id)newConnectionWithLabel:(id)arg1 error:(id *)arg2;
- (_Bool)_setupConnection:(id)arg1 databaseName:(id)arg2 error:(id *)arg3;
- (_Bool)_attachDatabase:(id)arg1 toConnection:(id)arg2 error:(id *)arg3;
- (void)stopDBWatcher;
- (void)_startWatcher;
- (void)disableDatabaseProfilingForDB:(id)arg1;
- (void)enableDatabaseProfilingForDB:(id)arg1;
- (void)setupDatabase;
- (id)newConnection:(id)arg1;
@property(readonly, nonatomic) PQLConnection *serverDB;
@property(readonly, nonatomic) PQLConnection *clientDB;
@property(readonly, nonatomic) BRCServerPersistedState *serverState;
@property(readonly, nonatomic) NSMutableDictionary *clientState;
@property(readonly, nonatomic) NSString *databaseID;
- (id)singleLocalContainerMatchingSearchString:(id)arg1 db:(id)arg2 error:(id *)arg3;
- (id)localContainersMatchingSearchString:(id)arg1 db:(id)arg2 error:(id *)arg3;
- (id)_localContainersMatchingSearchString:(id)arg1 db:(id)arg2;
- (id)syncContextForZone:(id)arg1;
- (id)syncContextForZone:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)sharedSyncContext;
- (id)defaultSyncContext;
- (id)syncContextForContextIdentifier:(id)arg1 isShared:(_Bool)arg2;
- (id)_containerMetadataRecordsToSaveWithBatchSize:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
