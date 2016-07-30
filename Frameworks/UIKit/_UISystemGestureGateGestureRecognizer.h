//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer
{
    unsigned int _systemGesturesRecognitionPossible:1;
    unsigned int _waitingForSystemGestureStateNotification:1;
    double _lastTouchTime;
    NSTimer *_delayTimeoutTimer;
}

- (id)_gateGestureTypeString;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)_shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_timeOut;
- (int)_gateGestureType;
- (void)_systemGestureStateChanged:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
