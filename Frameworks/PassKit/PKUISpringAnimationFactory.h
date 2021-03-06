//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKit/_UIBasicAnimationFactory-Protocol.h>

@class CAMediaTimingFunction, NSString;

@interface PKUISpringAnimationFactory : NSObject <_UIBasicAnimationFactory>
{
    double _duration;
    _Bool _needsDurationUpdate;
    CDUnknownBlockType _animationDelayHandler;
    double _mass;
    double _stiffness;
    double _damping;
    double _velocity;
    CAMediaTimingFunction *_timing;
    double _maximumVendedDelay;
}

+ (id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2;
+ (id)springAnimationWithKeyPath:(id)arg1;
+ (id)defaultTimingFunction;
@property(readonly, nonatomic) double maximumVendedDelay; // @synthesize maximumVendedDelay=_maximumVendedDelay;
@property(retain, nonatomic) CAMediaTimingFunction *timing; // @synthesize timing=_timing;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
- (void)setAnimationDelayHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)animationDelayHandler;
@property(readonly, nonatomic) double duration;
- (void)_updateDurationIfNecessary;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_springAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_springAnimationWithKeyPath:(id)arg1;
- (id)springAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)springAnimationWithKeyPath:(id)arg1;
- (void)dealloc;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4;
- (id)initWithVelocity:(double)arg1 timing:(id)arg2;
- (id)initWithVelocity:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

