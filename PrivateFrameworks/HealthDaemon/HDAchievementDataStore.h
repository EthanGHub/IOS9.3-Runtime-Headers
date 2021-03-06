//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSMutableArray, NSMutableDictionary, NSString;
@protocol HDHealthDaemon;

@interface HDAchievementDataStore : NSObject
{
    id <HDHealthDaemon> _healthDaemon;
    NSMutableDictionary *_cachedValues;
    NSMutableDictionary *_updatedValues;
    NSMutableArray *_achievements;
    NSError *_currentRunError;
    NSString *_currentRunErroredPropertyKey;
}

+ (id)_keyForBestSessionCaloriesWithActivityType:(unsigned long long)arg1;
+ (id)_keyForSessionCountOverFirstSessionMinimumDurationWithActivityType:(unsigned long long)arg1;
+ (id)_keyForSessionCountWithActivityType:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *currentRunErroredPropertyKey; // @synthesize currentRunErroredPropertyKey=_currentRunErroredPropertyKey;
@property(retain, nonatomic) NSError *currentRunError; // @synthesize currentRunError=_currentRunError;
@property(retain, nonatomic) NSMutableArray *achievements; // @synthesize achievements=_achievements;
@property(retain, nonatomic) NSMutableDictionary *updatedValues; // @synthesize updatedValues=_updatedValues;
@property(retain, nonatomic) NSMutableDictionary *cachedValues; // @synthesize cachedValues=_cachedValues;
@property(retain, nonatomic) id <HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
- (void).cxx_destruct;
- (void)markAchievementAlerted:(id)arg1;
- (id)unalertedAchievements;
- (unsigned long long)countOfUnalertedAchievements;
- (id)uncommittedAchievements;
- (void)addAchievements:(id)arg1;
- (void)addAchievement:(id)arg1;
@property(readonly, nonatomic) unsigned long long achievementDoctorRunCountFromDatabase;
@property(nonatomic) unsigned long long achievementDoctorRunCount;
@property(retain, nonatomic) NSDate *lastPerfectWeekAllDate;
@property(nonatomic) long long lastResetSummaryIndexForStandGoal;
@property(nonatomic) long long lastResetSummaryIndexForExerciseGoal;
@property(nonatomic) long long lastResetSummaryIndexForMoveGoal;
@property(retain, nonatomic) NSDate *lastPerfectWeekCaloriesBurnedDate;
@property(nonatomic) unsigned long long lifetimeCompleteDays;
@property(nonatomic) unsigned long long bestConsecutiveCompleteDays;
@property(nonatomic) unsigned long long consecutiveCompleteDays;
@property(nonatomic) unsigned long long currentGoalConsecutiveCompleteDays;
@property(nonatomic) double bestCalorieBurnGoalMetCalories;
@property(nonatomic) double latestCalorieBurnGoalMetCalories;
@property(nonatomic) double bestDailyCalorieBurn;
@property(nonatomic) double caloriesBurnedYesterday;
@property(nonatomic) double caloriesBurnedToday;
@property(nonatomic) long long caloriesBurnedLastCheckedActivitySummaryIndex;
@property(nonatomic) long long caloriesBurnedFirstCheckedActivitySummaryIndex;
@property(nonatomic) double bestDistance;
@property(nonatomic) double distanceToday;
@property(retain, nonatomic) NSDate *lastDistanceDate;
@property(retain, nonatomic) NSDate *lastPerfectWeekStandDate;
@property(nonatomic) unsigned long long consecutiveStandingHoursGoalsMet;
@property(nonatomic) unsigned long long standingHoursToday;
@property(nonatomic) unsigned long long standingHoursYesterday;
@property(nonatomic) long long standingHoursLastCheckedActivitySummaryIndex;
@property(retain, nonatomic) NSDate *lastPerfectWeekBriskMinutesDate;
@property(nonatomic) unsigned long long consecutiveBriskMinutesGoalsMet;
@property(nonatomic) double bestBriskMinutes;
@property(nonatomic) double briskMinutesToday;
@property(nonatomic) double briskMinutesYesterday;
@property(nonatomic) long long briskMinutesLastCheckedActivitySummaryIndex;
@property(nonatomic) long long briskMinutesFirstCheckedActivitySummaryIndex;
@property(nonatomic) long long stepCountLastCheckedActivitySummaryIndex;
@property(nonatomic) unsigned long long stepCountToday;
@property(nonatomic) unsigned long long stepCountYesterday;
@property(nonatomic) unsigned long long bestOneTimeStepCount;
- (void)setBestSessionCalories:(double)arg1 forActivityType:(unsigned long long)arg2;
- (double)bestSessionCaloriesForActivityType:(unsigned long long)arg1;
- (void)setSessionCountOverFirstSessionMinimumDuration:(unsigned long long)arg1 activityType:(unsigned long long)arg2;
- (unsigned long long)sessionCountOverFirstSessionMininumDurationForActivityType:(unsigned long long)arg1;
- (void)setSessionCount:(unsigned long long)arg1 activityType:(unsigned long long)arg2;
- (unsigned long long)sessionCountForActivityType:(unsigned long long)arg1;
@property(retain, nonatomic) NSDate *lastAwardedSevenWorkoutWeekStartDate;
@property(nonatomic) unsigned long long bestSessionCountAnyWeek;
@property(nonatomic) unsigned long long totalSessionCount;
@property(nonatomic) long long lastSessionAnchor;
@property(retain, nonatomic) NSDate *lastSessionEndDate;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInt64:(long long)arg1 forKey:(id)arg2;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
- (id)_valueForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (long long)int64ForKey:(id)arg1;
- (unsigned long long)unsignedIntegerForKey:(id)arg1;
- (_Bool)_transaction_removeDuplicateAddedAchievementsWithError:(id *)arg1;
- (_Bool)_transaction_mergeInboxKeyValuesIntoLocalWithError:(id *)arg1 numberOfMergedValues:(unsigned long long *)arg2;
- (_Bool)commit:(id *)arg1;
- (id)initWithHealthDaemon:(id)arg1;
- (id)init;

@end

