//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRoutine/NSObject-Protocol.h>

@class CLVisit, NSArray, NSError, RTScenarioTrigger;

@protocol RTFrameworkProtocol <NSObject>
- (void)onNextPredictedLocationsOfInterest:(NSArray *)arg1 withError:(NSError *)arg2;
- (void)onPredictedApplications:(NSArray *)arg1 error:(NSError *)arg2;
- (void)onScenarioTrigger:(RTScenarioTrigger *)arg1 withError:(NSError *)arg2;
- (void)onVisit:(CLVisit *)arg1 withError:(NSError *)arg2;
@end

