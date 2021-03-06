//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCForegroundClient-Protocol.h>
#import <CloudDocsDaemon/BRCProcessMonitorDelegate-Protocol.h>

@class BRCAccountSession, BRCClientPrivilegesDescriptor, NSCountedSet, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSXPCConnection, brc_task_tracker;

__attribute__((visibility("hidden")))
@interface BRCXPCClient : NSObject <BRCProcessMonitorDelegate, BRCForegroundClient>
{
    BRCClientPrivilegesDescriptor *_clientPriviledgesDescriptor;
    BRCAccountSession *_session;
    _Bool _dieOnInvalidate;
    unsigned int _isForeground:1;
    unsigned int _invalidated:1;
    int _clientPid;
    CDStruct_4c969caf auditToken;
    NSCountedSet *_containers;
    NSOperationQueue *_acceptOperationQueue;
    NSMutableDictionary *_runningAcceptOperations;
    brc_task_tracker *_tracker;
    _Bool _isUsingUbiquity;
    NSXPCConnection *_connection;
}

@property(nonatomic) _Bool isUsingUbiquity; // @synthesize isUsingUbiquity=_isUsingUbiquity;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) _Bool dieOnInvalidate; // @synthesize dieOnInvalidate=_dieOnInvalidate;
@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)setupNonSandboxedAccessForUbiquityContainers:(id)arg1 forBundleID:(id)arg2;
- (id)_disabledBundleIDs;
- (void)_setupContainerID:(id)arg1 andSendReply:(CDUnknownBlockType)arg2;
- (void)_startDownloadItemsAtURLs:(id)arg1 pos:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)_addExternalDocumentReferenceTo:(id)arg1 underParent:(id)arg2 forceReparent:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (id)setupPrivateContainer:(id)arg1 root:(id)arg2 error:(id *)arg3;
- (id)issueContainerExtensionForURL:(id)arg1 error:(id *)arg2;
- (_Bool)canAccessPhysicalURL:(id)arg1;
- (void)accessLogicalOrPhysicalURL:(id)arg1 needsWrite:(_Bool)arg2 asynchronously:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)canAccessPath:(const char *)arg1 needsWrite:(_Bool)arg2;
- (_Bool)isSandboxed;
@property(readonly, nonatomic) NSString *bundleID;
@property(readonly, nonatomic) _Bool hasPrivateSharingInterfaceEntitlement;
- (_Bool)_isAutomationEntitled;
- (_Bool)_isContainerProxyEntitled;
@property(readonly, nonatomic) NSSet *entitledContainerIDs;
@property(readonly, nonatomic) NSString *defaultContainerID;
- (_Bool)_entitlementBooleanValueForKey:(id)arg1;
- (id)_entitlementValueForKey:(id)arg1 ofClass:(Class)arg2;
- (_Bool)_hasPrivateIPCEntitlementForSelector:(SEL)arg1 error:(id *)arg2;
- (_Bool)_isContainerProxyWithError:(id *)arg1;
- (_Bool)_canCreateContainerWithID:(id)arg1 error:(id *)arg2;
- (_Bool)_hasAccessToContainerID:(id)arg1 error:(id *)arg2;
- (BOOL)cloudEnabledStatus;
- (void)_stopMonitoringProcess;
- (void)removeContainer:(id)arg1;
- (void)addContainer:(id)arg1;
- (void)_startMonitoringProcessIfNeeded;
- (void)process:(int)arg1 didBecomeForeground:(_Bool)arg2;
@property(readonly, nonatomic) NSString *identifier;
- (void)dumpToContext:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)wait;
- (void)invalidate;
- (void)setPrivilegesDescriptor:(id)arg1;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

