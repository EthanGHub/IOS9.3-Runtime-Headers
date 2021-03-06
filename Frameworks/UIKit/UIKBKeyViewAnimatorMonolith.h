//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKBKeyViewAnimator.h>

#import <UIKit/_UIFloatingContentViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIKBKeyViewAnimatorMonolith : UIKBKeyViewAnimator <_UIFloatingContentViewDelegate>
{
    NSMutableDictionary *_selectedKeyTimestamps;
    NSMutableDictionary *_transitionCompletions;
}

- (void)reset;
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;
- (_Bool)shouldAssertCurrentKeyState:(id)arg1;
- (void)animateFloatingKeyView:(id)arg1 toControlState:(unsigned long long)arg2;
- (void)transitionFloatingKeyView:(id)arg1 toState:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addTransitionCompletion:(CDUnknownBlockType)arg1 forKeyName:(id)arg2;
- (long long)_transitionFromState:(int)arg1 toState:(int)arg2;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (unsigned long long)controlStateForKeyState:(int)arg1;
- (Class)keyViewClassForKey:(id)arg1 traits:(id)arg2;
- (_Bool)shouldPurgeKeyViews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

