//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMCaptureConfiguration : NSObject
{
    long long _mode;
    long long _device;
    long long _flashMode;
    long long _torchMode;
    long long _HDRMode;
    long long _timerDuration;
    long long _irisMode;
    long long _photoModeEffectFilterType;
    long long _squareModeEffectFilterType;
}

+ (long long)audioConfigurationForMode:(long long)arg1 device:(long long)arg2;
@property(readonly, nonatomic) long long squareModeEffectFilterType; // @synthesize squareModeEffectFilterType=_squareModeEffectFilterType;
@property(readonly, nonatomic) long long photoModeEffectFilterType; // @synthesize photoModeEffectFilterType=_photoModeEffectFilterType;
@property(readonly, nonatomic) long long irisMode; // @synthesize irisMode=_irisMode;
@property(readonly, nonatomic) long long timerDuration; // @synthesize timerDuration=_timerDuration;
@property(readonly, nonatomic) long long HDRMode; // @synthesize HDRMode=_HDRMode;
@property(readonly, nonatomic) long long torchMode; // @synthesize torchMode=_torchMode;
@property(readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(readonly, nonatomic) long long device; // @synthesize device=_device;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (struct CAMCaptureModeWithOptions)currentModeWithOptions;
- (id)initWithCaptureMode:(long long)arg1 captureDevice:(long long)arg2 flashMode:(long long)arg3 torchMode:(long long)arg4 HDRMode:(long long)arg5 irisMode:(long long)arg6 timerDuration:(long long)arg7 photoModeEffectFilterType:(long long)arg8 squareModeEffectFilterType:(long long)arg9;

@end

