//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADCalendarItemInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADCalendarItemOperationGroup : CADOperationGroup <CADCalendarItemInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(id)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADDatabaseGetCalendarItemWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

