//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaLibraryPlaybackItemMetadata.h>

@class MPStoreItemMetadata, MusicStoreItemMetadataContext, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MusicStoreStreamingPlaybackItemMetadata : MPMediaLibraryPlaybackItemMetadata
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _hasLoadedMediaItem;
    _Bool _isLoadingMediaItem;
    NSMutableArray *_mediaItemLoadCompletionHandlers;
    MusicStoreItemMetadataContext *_storeItemMetadataContext;
    MPStoreItemMetadata *_storeItemMetadata;
}

+ (_Bool)_shouldRespectStoreCellularDataSetting;
+ (_Bool)_shouldRespectMusicCellularDataSetting;
- (void).cxx_destruct;
- (void)_unregisterForNotificationsForStoreItemMetadataContext:(id)arg1;
- (void)_registerForNotificationsForStoreItemMetadataContext:(id)arg1;
- (void)_storeItemMetadataContextRepresentativeMediaEntityDidChangeNotification:(id)arg1;
- (id)_storeItemMetadata;
@property(retain, nonatomic) MusicStoreItemMetadataContext *storeItemMetadataContext;
- (long long)storeSubscriptionAdamID;
- (long long)storeAdamID;
- (_Bool)showComposer;
- (_Bool)shouldReportPlayEventsToStore;
- (void)loadMediaItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)expectedDuration;
- (long long)endpointType;
- (id)composerName;
- (id)copyrightText;
- (unsigned long long)contentType;
- (id)contentTitle;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (long long)artistStoreAdamID;
- (id)artistName;
- (_Bool)allowsAssetCaching;
- (id)albumTitle;
- (long long)albumStoreAdamID;
- (id)albumArtistName;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithStoreItemMetadataContext:(id)arg1;
- (id)init;

@end

