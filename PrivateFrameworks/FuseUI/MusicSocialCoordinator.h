//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MusicSocialCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _followingLoaded;
    NSOperationQueue *_queue;
}

+ (id)activeDsid;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_processFollowingOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_processFollowEntityOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateFollowItem:(id)arg1 withState:(_Bool)arg2;
- (void)_processFollowing:(id)arg1;
- (void)_loadFollowingWithEntityID:(id)arg1 entityType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_entityTypeForContentType:(unsigned long long)arg1;
- (void)updateFollowingState:(_Bool)arg1 forEntityWithStoreID:(long long)arg2 contentType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestFollowingStateForEntityWithStoreID:(long long)arg1 contentType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)requestFollowingStateForEntityWithStoreID:(long long)arg1;
- (void)loadFollowingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

