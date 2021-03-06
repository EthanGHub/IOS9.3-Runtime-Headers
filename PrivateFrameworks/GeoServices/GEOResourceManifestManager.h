//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOResourceManifestServerProxyDelegate-Protocol.h>

@class GEOActiveTileGroup, GEOLocalizationRegionsInfo, GEOResourceManifestConfiguration, NSDictionary, NSHashTable, NSLock, NSMutableArray, NSSet, NSString;
@protocol GEOResourceManifestServerProxy;

@interface GEOResourceManifestManager : NSObject <GEOResourceManifestServerProxyDelegate>
{
    id <GEOResourceManifestServerProxy> _serverProxy;
    NSHashTable *_serverProxyObservers;
    GEOActiveTileGroup *_activeTileGroup;
    NSLock *_activeTileGroupLock;
    NSDictionary *_resourceNamesToPaths;
    NSSet *_allResourceNames;
    NSSet *_allRegionalResourceNames;
    _Bool _needsToLoadTileGroupFromDisk;
    NSMutableArray *_tileGroupObservers;
    NSLock *_tileGroupObserversLock;
    NSLock *_closedCountLock;
    long long _closedCount;
    GEOLocalizationRegionsInfo *_localizationRegionsInfo;
    NSMutableArray *_networkActivityHandlers;
    _Bool _isUpdatingManifest;
    _Bool _isLoadingResources;
    NSLock *_resourceNamesToPathsLock;
    GEOResourceManifestConfiguration *_configuration;
}

+ (id)modernManagerForConfiguration:(id)arg1;
+ (id)modernManagerForTileGroupIdentifier:(unsigned int)arg1;
+ (id)modernManager;
+ (id)sharedManager;
+ (void)setHiDPI:(_Bool)arg1;
+ (void)useLocalProxy;
+ (void)useRemoteProxy;
+ (void)setServerProxyClass:(Class)arg1;
+ (void)disableServerConnection;
@property(readonly, nonatomic) id <GEOResourceManifestServerProxy> serverProxy; // @synthesize serverProxy=_serverProxy;
- (void)devResourcesFolderDidChange;
- (void)_notifyObserversOfResourcesChange;
- (void)stopObservingDevResources;
- (void)startObservingDevResources;
- (void)forceUpdate;
- (void)resetActiveTileGroup;
- (void)setActiveTileGroupIdentifier:(unsigned int)arg1;
- (unsigned int)activeTileGroupIdentifier;
- (void)getResourceManifestWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasResourceManifest;
- (id)detailedDescription;
- (void)updateManifest:(CDUnknownBlockType)arg1;
- (void)updateManifestIfNecessary:(CDUnknownBlockType)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(CDUnknownBlockType)arg3;
- (oneway void)serverProxyDidStopLoadingResources:(id)arg1;
- (oneway void)serverProxyWillStartLoadingResources:(id)arg1;
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;
- (void)addNetworkActivityHandler:(CDUnknownBlockType)arg1;
- (id)pathForResourceWithName:(id)arg1;
- (void)_buildResourceNamesToPaths;
- (id)allResourcePaths;
- (id)allRegionalResourceNames;
- (id)allResourceNames;
- (_Bool)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)disputedBordersQueryStringForTileKey:(const struct _GEOTileKey *)arg1 country:(id)arg2 region:(id)arg3;
- (_Bool)isDisputedBordersWhitelistedForTileKey:(const struct _GEOTileKey *)arg1 country:(id)arg2 region:(id)arg3;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1 overrideLocale:(id)arg2;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey *)arg1;
- (id)localizationURLStringIfNecessaryForTileKey:(const struct _GEOTileKey *)arg1 overrideLocale:(id)arg2;
- (id)baseURLStringForTileKey:(const struct _GEOTileKey *)arg1;
- (id)_activeTileSetForKey:(const struct _GEOTileKey *)arg1;
@property(readonly, nonatomic) _Bool hasActiveTileGroup;
- (unsigned int)mapMatchingZoomLevel;
- (int)mapMatchingTileSetStyle;
- (void)removeTileGroupObserver:(id)arg1;
- (void)addTileGroupObserver:(id)arg1 queue:(id)arg2;
- (void)removeServerProxyObserver:(id)arg1;
- (void)addServerProxyObserver:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)closeServerConnection;
- (void)openServerConnection;
- (id)authToken;
@property(readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
- (id)_loadActiveTileGroupIfNecessary:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

