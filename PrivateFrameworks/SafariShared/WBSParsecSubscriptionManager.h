//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, PSSSSubscriptionManagerInternal;

@interface WBSParsecSubscriptionManager : NSObject
{
    PSSSSubscriptionManagerInternal *_thirdPartySubscriptionManager;
    NSMutableDictionary *_subscriptionsByProvider;
    _Bool _needsUpdate;
}

+ (id)sharedManager;
@property(readonly, nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
- (void).cxx_destruct;
- (void)_updateThirdPartySubscriptionsWithBundleIdentifierWhitelist:(id)arg1 domainWhitelist:(id)arg2 maximumExpirationLimit:(double)arg3;
- (void)_updateFuseSubscription;
- (id)_init;
- (void)removeSubscriptionsAddedAfterDate:(id)arg1;
- (void)registerSubscriptionServiceForURL:(id)arg1 withSubscriptionInfo:(id)arg2;
- (void)updateSubscriptionsWithBundleIdentifierWhitelist:(id)arg1 domainWhitelist:(id)arg2 maximumExpirationLimit:(double)arg3;
@property(readonly, nonatomic) NSArray *subscriptionDictionaries;
- (id)init;

@end

