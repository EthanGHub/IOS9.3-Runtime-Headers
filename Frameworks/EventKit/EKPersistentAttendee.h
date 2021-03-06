//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKPersistentParticipant.h>

@class NSDate;

@interface EKPersistentAttendee : EKPersistentParticipant
{
}

+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
@property(nonatomic) _Bool statusChanged;
@property(nonatomic) _Bool commentChanged;
- (_Bool)_valueForFlag:(unsigned int)arg1;
- (void)_setFlag:(unsigned int)arg1 value:(_Bool)arg2;
@property(copy, nonatomic) NSDate *lastModified;
- (id)owner;
- (void)setOwner:(id)arg1;
@property(nonatomic) long long pendingStatus;
@property(nonatomic) long long participantType;
@property(nonatomic) long long participantRole;
@property(nonatomic) long long participantStatus;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)entityType;
- (id)initWithAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;

@end

