//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSArray, SKUIFlexibleSegmentedControl;

@protocol SKUIFlexibleSegmentedControlDelegate <NSObject>

@optional
- (void)segmentedControl:(SKUIFlexibleSegmentedControl *)arg1 showMoreListWithTitles:(NSArray *)arg2;
- (void)segmentedControl:(SKUIFlexibleSegmentedControl *)arg1 didSelectSegmentIndex:(long long)arg2;
@end

