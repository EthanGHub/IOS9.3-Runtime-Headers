//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBGestureDefaults : SBAbstractSpringBoardDefaultDomain
{
}

- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(readonly, nonatomic, getter=isMotionGestureLoggingEnabled) _Bool motionGestureLoggingEnabled; // @dynamic motionGestureLoggingEnabled;
@property(retain, nonatomic) NSArray *systemGestureLoggingOptions; // @dynamic systemGestureLoggingOptions;
@property(readonly, nonatomic, getter=isSystemGesturesAllowed) _Bool systemGesturesAllowed; // @dynamic systemGesturesAllowed;

@end

