//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UserNotification/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSString;
@protocol OS_dispatch_queue, UNLocationMonitorDelegate;

@interface UNLocationMonitor : NSObject <CLLocationManagerDelegate>
{
    NSString *_bundleIdentifier;
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_queue;
    id <UNLocationMonitorDelegate> _delegate;
}

+ (_Bool)isBundleIdentifierAuthorizedForRegionMonitoring:(id)arg1;
@property(nonatomic) id <UNLocationMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_queue_delegate_didExitRegion:(id)arg1;
- (void)_queue_delegate_didEnterRegion:(id)arg1;
- (void)_queue_didExitRegion:(id)arg1;
- (void)_queue_didEnterRegion:(id)arg1;
- (void)_queue_stopMonitoringForRegion:(id)arg1;
- (void)_queue_startMonitoringForRegion:(id)arg1;
- (void)_queue_markAsHavingReceivedLocation;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)stopMonitoringForRegion:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1;
- (void)markAsHavingReceivedLocation;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

