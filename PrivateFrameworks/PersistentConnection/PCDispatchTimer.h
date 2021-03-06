//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUTWeakReference, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface PCDispatchTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _fireTime;
    NSDate *_fireDate;
    CUTWeakReference *_target;
    SEL _selector;
    _Bool _isValid;
}

- (void)invalidate;
@property(retain, nonatomic) NSDate *fireDate;
- (void)start;
- (void)_cleanupTimer;
@property(readonly, nonatomic) _Bool isValid;
- (void)_callTarget;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 target:(id)arg2 selector:(SEL)arg3 fireTime:(unsigned long long)arg4;

@end

