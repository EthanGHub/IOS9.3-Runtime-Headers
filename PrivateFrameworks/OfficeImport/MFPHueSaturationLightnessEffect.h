//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/MFPEffect.h>

__attribute__((visibility("hidden")))
@interface MFPHueSaturationLightnessEffect : MFPEffect
{
    int mHueChange;
    int mSaturationChange;
    int mLightnessChange;
}

+ (id)GUID;
- (id)initWithHueChange:(int)arg1 saturationChange:(int)arg2 lightnessChange:(int)arg3;

@end
