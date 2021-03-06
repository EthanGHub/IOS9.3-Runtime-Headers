//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType, NSArray;

@interface HKHorizontalTimePeriodDataSource : HKHealthQueryChartCacheDataSource
{
    HKSampleType *_sampleType;
    CDUnknownBlockType _userInfoCreationBlock;
    NSArray *_valueOrder;
}

@property(retain, nonatomic) NSArray *valueOrder; // @synthesize valueOrder=_valueOrder;
@property(copy, nonatomic) CDUnknownBlockType userInfoCreationBlock; // @synthesize userInfoCreationBlock=_userInfoCreationBlock;
@property(retain, nonatomic) HKSampleType *sampleType; // @synthesize sampleType=_sampleType;
- (void).cxx_destruct;
- (id)_organizeSamplesByValueAndTimePeriod:(id)arg1;
- (void)_handleSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

