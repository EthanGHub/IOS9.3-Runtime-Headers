//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ACDKeychainCleanupActivity : NSObject
{
    ACAccountStore *_accountStore;
    NSObject<OS_xpc_object> *_xpcActivity;
    NSObject<OS_dispatch_queue> *_activityQueue;
}

+ (id)sharedActivity;
- (void).cxx_destruct;
- (void)_unregisterActivity;
- (_Bool)_canRemoveCredentialItem:(id)arg1;
- (void)_removeCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_removeExpiredCredentials;
- (void)_configureXPCActivityWithCriteria:(id)arg1;
- (void)_queueCredentialItemWithAccount:(id)arg1 serviceName:(id)arg2;
- (void)queueNonPersistentCredentialRemoval:(id)arg1;
- (void)checkIn;
- (id)init;

@end
