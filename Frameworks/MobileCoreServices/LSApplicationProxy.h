//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/LSBundleProxy.h>

#import <MobileCoreServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSProgress, NSString, NSUUID;

@interface LSApplicationProxy : LSBundleProxy <NSSecureCoding>
{
    unsigned long long _flags;
    NSArray *_privateDocumentIconNames;
    LSApplicationProxy *_privateDocumentTypeOwner;
    NSString *_vendorName;
    NSString *_itemName;
    NSString *_shortVersionString;
    unsigned long long _installType;
    unsigned long long _originalInstallType;
    NSDictionary *_groupContainers;
    NSArray *_externalAccessoryProtocols;
    NSArray *_deviceFamily;
    NSArray *_requiredDeviceCapabilities;
    NSString *_minimumSystemVersion;
    NSString *_sdkVersion;
    NSArray *_directionsModes;
    NSArray *_UIBackgroundModes;
    NSArray *_audioComponents;
    NSArray *_VPNPlugins;
    NSArray *_pluginUUIDs;
    NSArray *_plugInKitPlugins;
    NSArray *_appTags;
    NSString *_applicationDSID;
    NSString *_storeCohortMetadata;
    NSNumber *_storeFront;
    NSNumber *_versionID;
    NSString *_sourceAppIdentifier;
    NSString *_applicationVariant;
    NSString *_companionAppIdentifier;
    NSNumber *_purchaserDSID;
    NSNumber *_downloaderDSID;
    NSNumber *_familyID;
    int _modTime;
    int _regTime;
    NSUUID *_deviceIdentifierForVendor;
    NSNumber *_staticDiskUsage;
    NSNumber *_dynamicDiskUsage;
    NSNumber *_ODRDiskUsage;
    NSDate *_registeredDate;
    NSNumber *_itemID;
    NSArray *_groupIdentifiers;
    NSString *_teamID;
}

+ (_Bool)supportsSecureCoding;
+ (id)applicationProxyForItemID:(id)arg1;
+ (id)applicationProxyForBundleURL:(id)arg1;
+ (id)applicationProxyForCompanionIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1 roleIdentifier:(id)arg2;
+ (id)applicationProxyForIdentifier:(id)arg1 placeholder:(_Bool)arg2;
+ (id)applicationProxyForIdentifier:(id)arg1;
+ (id)applicationProxyWithBundleUnitID:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, nonatomic) unsigned long long originalInstallType; // @synthesize originalInstallType=_originalInstallType;
@property(readonly, nonatomic) unsigned long long installType; // @synthesize installType=_installType;
@property(readonly, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
- (void)populateNotificationData;
- (id)userActivityStringForAdvertisementData:(id)arg1;
- (id)iconStyleDomain;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isRemovedSystemApp) _Bool removedSystemApp;
@property(readonly, nonatomic, getter=isRemoveableSystemApp) _Bool removeableSystemApp;
- (_Bool)isSystemOrInternalApp;
@property(readonly, nonatomic) _Bool supportsPurgeableLocalStorage;
@property(readonly, nonatomic) _Bool missingRequiredSINF;
@property(readonly, nonatomic) _Bool hasMIDBasedSINF;
@property(readonly, nonatomic) _Bool isWatchKitApp;
@property(readonly, nonatomic) _Bool isPurchasedReDownload;
@property(readonly, nonatomic) _Bool isBetaApp;
@property(readonly, nonatomic, getter=isWhitelisted) _Bool whitelisted;
@property(readonly, nonatomic) _Bool isInstalled;
@property(readonly, nonatomic) _Bool hasSettingsBundle;
@property(readonly, nonatomic) _Bool supportsOpenInPlace;
@property(readonly, nonatomic) _Bool supportsExternallyPlayableContent;
@property(readonly, nonatomic) _Bool supportsAudiobooks;
@property(readonly, nonatomic) _Bool isRestricted;
@property(readonly, nonatomic) _Bool isNewsstandApp;
@property(readonly, nonatomic) _Bool isAppUpdate;
@property(readonly, nonatomic) _Bool isPlaceholder;
@property(readonly, nonatomic) _Bool isAdHocCodeSigned;
@property(readonly, nonatomic) _Bool profileValidated;
@property(readonly, nonatomic) _Bool fileSharingEnabled;
@property(readonly, nonatomic) _Bool iconIsPrerendered;
- (id)localizedNameForContext:(id)arg1;
- (id)localizedShortName;
- (id)localizedName;
- (void)setPrivateDocumentTypeOwner:(id)arg1;
- (id)privateDocumentTypeOwner;
- (id)iconDataForVariant:(int)arg1;
- (void)setPrivateDocumentIconAllowOverride:(_Bool)arg1;
- (_Bool)privateDocumentIconAllowOverride;
- (id)privateIconsDictionary;
- (void)setPrivateDocumentIconNames:(id)arg1;
- (id)privateDocumentIconNames;
- (id)resourcesDirectoryURL;
- (id)installProgressSync;
@property(readonly, nonatomic) NSProgress *installProgress;
- (id)appStoreReceiptURL;
@property(readonly, nonatomic) NSNumber *betaExternalVersionIdentifier;
@property(readonly, nonatomic) NSNumber *externalVersionIdentifier; // @synthesize externalVersionIdentifier=_versionID;
- (id)versionIdentifier;
@property(readonly, nonatomic) NSNumber *storeFront; // @synthesize storeFront=_storeFront;
@property(readonly, nonatomic) NSNumber *ODRDiskUsage; // @synthesize ODRDiskUsage=_ODRDiskUsage;
@property(readonly, nonatomic) NSNumber *dynamicDiskUsage; // @synthesize dynamicDiskUsage=_dynamicDiskUsage;
@property(readonly, nonatomic) NSNumber *staticDiskUsage; // @synthesize staticDiskUsage=_staticDiskUsage;
@property(readonly, nonatomic) NSUUID *deviceIdentifierForVendor; // @synthesize deviceIdentifierForVendor=_deviceIdentifierForVendor;
@property(readonly, nonatomic) NSArray *requiredDeviceCapabilities; // @synthesize requiredDeviceCapabilities=_requiredDeviceCapabilities;
@property(readonly, nonatomic) NSArray *appTags; // @synthesize appTags=_appTags;
@property(readonly, nonatomic) NSArray *plugInKitPlugins; // @synthesize plugInKitPlugins=_plugInKitPlugins;
@property(readonly, nonatomic) NSArray *VPNPlugins; // @synthesize VPNPlugins=_VPNPlugins;
@property(readonly, nonatomic) NSArray *externalAccessoryProtocols;
@property(readonly, nonatomic) NSArray *audioComponents; // @synthesize audioComponents=_audioComponents;
@property(readonly, nonatomic) NSArray *UIBackgroundModes; // @synthesize UIBackgroundModes=_UIBackgroundModes;
@property(readonly, nonatomic) NSArray *directionsModes; // @synthesize directionsModes=_directionsModes;
@property(readonly, nonatomic) NSDictionary *groupContainers; // @synthesize groupContainers=_groupContainers;
@property(readonly, nonatomic) NSNumber *familyID; // @synthesize familyID=_familyID;
@property(readonly, nonatomic) NSNumber *downloaderDSID; // @synthesize downloaderDSID=_downloaderDSID;
@property(readonly, nonatomic) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(readonly, nonatomic) NSString *applicationDSID; // @synthesize applicationDSID=_applicationDSID;
@property(readonly, nonatomic) NSString *preferredArchitecture; // @dynamic preferredArchitecture;
@property(readonly, nonatomic) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
@property(readonly, nonatomic) NSString *storeCohortMetadata; // @synthesize storeCohortMetadata=_storeCohortMetadata;
@property(readonly, nonatomic) NSString *applicationVariant; // @synthesize applicationVariant=_applicationVariant;
@property(readonly, nonatomic) NSString *companionApplicationIdentifier; // @synthesize companionApplicationIdentifier=_companionAppIdentifier;
@property(readonly, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
@property(readonly, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(readonly, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(readonly, nonatomic) NSString *applicationType;
@property(readonly, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, nonatomic) NSString *minimumSystemVersion; // @synthesize minimumSystemVersion=_minimumSystemVersion;
@property(readonly, nonatomic) NSArray *deviceFamily; // @synthesize deviceFamily=_deviceFamily;
- (id)machOUUIDs;
@property(readonly, nonatomic) NSDate *registeredDate; // @synthesize registeredDate=_registeredDate;
- (int)bundleModTime;
@property(readonly, nonatomic) NSString *roleIdentifier;
@property(readonly, nonatomic) NSString *applicationIdentifier;
- (id)uniqueIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithBundleUnit:(unsigned int)arg1 applicationIdentifier:(id)arg2;

@end
