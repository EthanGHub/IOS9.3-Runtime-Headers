//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssertionServices/BKSProcessAssertionClientHandler-Protocol.h>

@class BKSProcessAssertionClient, BSSignal, NSString;
@protocol OS_dispatch_queue;

@interface BKSProcessAssertion : NSObject <BKSProcessAssertionClientHandler>
{
    BSSignal *_invalidationSignal;
    _Bool _acquiring;
    _Bool _acquired;
    int _pid;
    NSString *_identifier;
    NSString *_bundleIdentifier;
    NSString *_name;
    unsigned int _flags;
    unsigned int _reason;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _acquisitionHandler;
    BKSProcessAssertionClient *_client;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

+ (id)NameForReason:(unsigned int)arg1;
- (void)_clientQueue_notifyAssertionAcquired:(_Bool)arg1;
- (void)_clientQueue_updateAssertion;
- (void)_clientQueue_acquireAssertion;
- (void)_clientQueue_invalidate:(_Bool)arg1;
- (void)assertionDidInvalidate;
- (void)invalidate;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) unsigned int flags;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler;
- (void)setReason:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int reason;
@property(readonly, nonatomic) _Bool valid;
- (void)dealloc;
- (id)initWithPID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (id)initWithBundleIdentifier:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

