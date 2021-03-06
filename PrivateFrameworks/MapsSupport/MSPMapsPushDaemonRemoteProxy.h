//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPMapsPushDaemonProxy-Protocol.h>
#import <MapsSupport/MSPMapsPushDaemonProxyObserver-Protocol.h>

@class NSMutableArray, NSXPCConnection;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxyObserver, MSPMapsPushDaemonProxy>
{
    NSXPCConnection *_connection;
    NSMutableArray *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;
- (void)clearTrafficConditionsBulletin;
- (void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
- (void)fetchCurrentAnnouncement:(CDUnknownBlockType)arg1;
- (void)clearBulletinWithRecordID:(id)arg1;
- (void)resetShownAnnouncements;
- (void)clearCurrentAnnouncement;
- (void)simulateAnnouncement:(id)arg1;
- (void)checkin;
- (void)fetchDevicePushToken:(CDUnknownBlockType)arg1;
- (void)fetchProblemStatus;
- (void)simulateProblemResolution;
- (void)registerForTopic;
- (void)_connectToDaemonIfNeeded;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)closeConnection;
- (void)openConnection;
- (id)init;

@end

