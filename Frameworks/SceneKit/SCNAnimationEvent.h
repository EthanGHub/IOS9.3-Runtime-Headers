//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNAnimationEvent : NSObject
{
    double _eventTime;
    CDUnknownBlockType _eventBlock;
}

+ (id)animationEventWithKeyTime:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)setEventBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)eventBlock;
- (void)setTime:(double)arg1;
- (double)time;
- (void)dealloc;
- (id)init;

@end
