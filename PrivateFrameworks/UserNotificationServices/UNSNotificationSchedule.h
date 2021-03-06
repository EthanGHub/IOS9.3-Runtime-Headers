//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UserNotificationServices/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface UNSNotificationSchedule : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_fireDatesToNotifications;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)addLocalNotification:(id)arg1 forFireDate:(id)arg2;
- (id)localNotificationsForFireDate:(id)arg1;
- (id)fireDates;
- (void)dealloc;
- (id)_initWithDictionary:(id)arg1;
- (id)init;

@end

