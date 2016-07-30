//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EAAccessoryInternal, NSArray, NSString;
@protocol EAAccessoryDelegate;

@interface EAAccessory : NSObject
{
    EAAccessoryInternal *_internal;
}

- (_Bool)supportsPointOfInterest;
- (void)updateItemProperty:(int)arg1 withValue:(id)arg2;
- (void)updateSystemProperty:(int)arg1 withValue:(id)arg2;
- (_Bool)supportsAccessibility;
- (int)captureStillImage:(unsigned int)arg1 forCameraIds:(id)arg2;
- (int)stopLivePreview:(unsigned int)arg1 forCameraIds:(id)arg2;
- (int)startLivePreview:(unsigned int)arg1 forCameraIds:(id)arg2;
- (int)setCameraProperties:(unsigned int)arg1 forCameraId:(unsigned short)arg2 withProperties:(id)arg3;
- (int)stopCameraUpdates:(unsigned int)arg1 forCameraIds:(id)arg2;
- (int)startCameraUpdates:(unsigned int)arg1 forCameraIds:(id)arg2 withProperties:(id)arg3 withCapabilities:(id)arg4;
- (int)stopCameraInfo:(unsigned int)arg1 forCameraIds:(id)arg2;
- (int)startCameraInfo:(unsigned int)arg1 forCameraIds:(id)arg2;
- (void)setCameraComponents:(id)arg1;
- (id)cameraComponents;
- (id)getVehicleInfoData;
- (void)setVehicleInfovehicleInfoInitialData:(id)arg1;
- (id)vehicleInfoInitialData;
- (void)setVehicleInfoSupportedTypes:(id)arg1;
- (id)vehicleInfoSupportedTypes;
- (void)requestIAPAccessoryWiFiCredentials;
- (void)_OOBBTPairingCompletedWithStatus:(unsigned char)arg1 forAccessoryWithMACAddress:(id)arg2;
- (void)beginOOBBTPairingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)sendDestinationInformation:(id)arg1 identifier:(id)arg2;
- (_Bool)sendPointOfInterestInformation:(id)arg1 identifier:(unsigned short)arg2;
- (_Bool)sendGPRMCDataStatusValueA:(_Bool)arg1 ValueV:(_Bool)arg2 ValueX:(_Bool)arg3;
- (_Bool)sendEphemeris:(id)arg1;
- (_Bool)sendEphemerisPointDataGpsWeek:(unsigned long long)arg1 gpsTOW:(double)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(unsigned short)arg5;
- (_Bool)sendGpsWeek:(unsigned long long)arg1 gpsTOW:(double)arg2;
- (_Bool)getEphemerisExpirationInterval:(double *)arg1;
- (_Bool)getEphemerisRecommendRefreshInterval:(double *)arg1;
- (_Bool)getEphemerisURL:(id *)arg1;
- (void)resetIAPTimeSyncKalmanFilter;
- (void)getIAPTimeSyncInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setIAPTimeSyncParams:(id)arg1;
- (_Bool)setNMEASentencesToFilter:(id)arg1;
- (_Bool)getNMEASentence:(id *)arg1;
- (_Bool)accessoryHasNMEASentencesAvailable;
- (_Bool)supportsCamera;
- (_Bool)supportsLocation;
- (void)setLocationSentenceTypesMask:(int)arg1;
- (int)locationSentenceTypesMask;
- (_Bool)pointOfInterestHandoffEnabled;
- (unsigned int)eqIndex;
- (void)setEqIndex:(unsigned int)arg1;
- (id)eqNames;
- (void)setEqNames:(id)arg1;
- (id)allPublicProtocolStrings;
- (id)audioPorts;
- (int)classType;
- (id)preferredApp;
- (_Bool)shouldBeHiddenFromUI;
- (_Bool)supportsPublicIap;
- (id)macAddress;
- (_Bool)_internalNotPresentInIAPAccessoriesArray;
- (unsigned int)_internalConnectionID;
- (id)_createWakeToken;
- (void)_endSession:(unsigned int)arg1;
- (void)_openCompleteForSession:(unsigned int)arg1;
- (void)_removeSession:(id)arg1;
- (void)_addSession:(id)arg1;
- (id)_protocolIDForProtocolString:(id)arg1;
- (void)_setNotPresentInIAPAccessoriesArray:(_Bool)arg1;
- (void)_setConnected:(_Bool)arg1;
- (id)_shortDescription;
- (void)_updateAccessoryInfo:(id)arg1;
- (id)_initWithAccessory:(id)arg1;
- (unsigned int)accessoryCapabilities;
- (_Bool)supportsWirelessCarPlay;
- (_Bool)supportsUSBCarPlay;
- (_Bool)supportsOOBBTPairing;
- (_Bool)supportsCarPlay;
- (_Bool)isAvailableOverBonjour;
- (_Bool)hasIPConnection;
- (id)bonjourName;
@property(nonatomic) id <EAAccessoryDelegate> delegate;
@property(readonly, nonatomic) NSArray *protocolStrings;
- (id)wakeToken;
@property(readonly, nonatomic) NSString *dockType;
@property(readonly, nonatomic) NSString *hardwareRevision;
@property(readonly, nonatomic) NSString *firmwareRevision;
@property(readonly, nonatomic) NSString *serialNumber;
@property(readonly, nonatomic) NSString *modelNumber;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *manufacturer;
@property(readonly, nonatomic) unsigned long long connectionID;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
- (id)description;
- (void)dealloc;
- (id)init;

@end
