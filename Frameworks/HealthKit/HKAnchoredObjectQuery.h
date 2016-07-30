//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@class HKQueryAnchor;

@interface HKAnchoredObjectQuery : HKQuery
{
    _Bool _initialHandlerCalled;
    _Bool _includeDeletedObjects;
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _completionHandler;
    HKQueryAnchor *_anchor;
    unsigned long long _limit;
}

+ (Class)_queryServerDataObjectClass;
@property(nonatomic) _Bool includeDeletedObjects; // @synthesize includeDeletedObjects=_includeDeletedObjects;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) HKQueryAnchor *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (_Bool)_queue_shouldStayAliveAfterInitialResults;
- (CDUnknownBlockType)_queue_errorHandler;
- (void)_queue_validate;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (void)deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 withAnchor:(id)arg3 forQuery:(id)arg4;
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(id)arg3 limit:(unsigned long long)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned long long)arg3 limit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
