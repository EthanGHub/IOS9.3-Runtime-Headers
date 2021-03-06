//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDClient, HDDaemon, NSMutableArray, NSUUID;
@protocol OS_dispatch_queue;

@interface HDAuthorizationServer : NSObject
{
    int _invalidated;
    HDClient *_client;
    HDDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_authorizationRequestIdentifiers;
    NSUUID *_transactionSessionIdentifier;
}

@property(nonatomic) int invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSUUID *transactionSessionIdentifier; // @synthesize transactionSessionIdentifier=_transactionSessionIdentifier;
@property(retain, nonatomic) NSMutableArray *authorizationRequestIdentifiers; // @synthesize authorizationRequestIdentifiers=_authorizationRequestIdentifiers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
@property(readonly) HDClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)_queue_enqueueAuthorizationRequestForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 authorizationNeededHandler:(CDUnknownBlockType)arg4 requestCompletionHandler:(CDUnknownBlockType)arg5;
- (id)_authorizationStatusForTypes:(id)arg1 error:(id *)arg2;
- (void)_performIfAuthorizedForTypes:(id)arg1 sharing:(_Bool)arg2 onQueue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (_Bool)_shouldBypassAuthorization;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(CDUnknownBlockType)arg2 requestCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleAuthorizationRequestsWithPromptHandler:(CDUnknownBlockType)arg1 requestCompletionHandler:(CDUnknownBlockType)arg2;
- (void)enqueueAuthorizationRequestToWriteTypes:(id)arg1 readTypes:(id)arg2 authorizationNeededHandler:(CDUnknownBlockType)arg3 requestCompletionHandler:(CDUnknownBlockType)arg4;
- (id)authorizationStatusForType:(id)arg1 error:(id *)arg2;
- (id)filterSamplesForReadAuthorization:(id)arg1;
- (id)clientSourceIdentifierWithError:(id *)arg1;
- (id)readAuthorizationWithTypes:(id)arg1 error:(id *)arg2;
- (_Bool)isAuthorizedToReadType:(id)arg1 withRestrictedSourceIdentifier:(id *)arg2 authorizationAnchor:(id *)arg3;
- (_Bool)isAuthorizationStatusDeterminedForTypes:(id)arg1 error:(id *)arg2;
- (void)performIfAuthorizedToDeleteObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)performIfAuthorizedToSaveObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)performIfAuthorizedToReadTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)invalidate;
- (id)initWithClient:(id)arg1 daemon:(id)arg2 queue:(id)arg3;
- (_Bool)resetAuthorizationStatusForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (void)endAuthorizationRequestDelegateTransactionWithError:(id)arg1;
- (void)_queue_beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginAuthorizationRequestDelegateTransactionWithRequestRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)allAuthorizationRecordsForType:(id)arg1 error:(id *)arg2;
- (id)allAuthorizationRecordsForBundleIdentifier:(id)arg1 error:(id *)arg2;

@end

