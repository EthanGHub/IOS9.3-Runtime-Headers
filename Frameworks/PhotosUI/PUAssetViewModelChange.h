//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

@class PUBrowsingIrisPlayerChange, PUBrowsingVideoPlayerChange;

@interface PUAssetViewModelChange : PUViewModelChange
{
    _Bool _assetChanged;
    _Bool _modelTileTransformChanged;
    _Bool _isUserTransformingTileDidChange;
    _Bool _isInFocusChanged;
    _Bool _focusValueChanged;
    _Bool _loadingStatusChanged;
    _Bool _forceBadgesVisibleChanged;
    _Bool _badgeInfoChanged;
    _Bool _wantsIrisBadgeVisibleChanged;
    _Bool _isFavoriteChanged;
    _Bool _commentsOffsetChanged;
    _Bool _commentsVisibilityChanged;
    _Bool _isInEditModeChanged;
    PUBrowsingVideoPlayerChange *_videoPlayerChange;
    PUBrowsingIrisPlayerChange *_irisPlayerChange;
}

- (void)_setIsInEditModeChanged:(_Bool)arg1;
@property(nonatomic) _Bool isInEditModeChanged; // @synthesize isInEditModeChanged=_isInEditModeChanged;
- (void)_setCommentsVisibilityChanged:(_Bool)arg1;
@property(nonatomic) _Bool commentsVisibilityChanged; // @synthesize commentsVisibilityChanged=_commentsVisibilityChanged;
- (void)_setCommentsOffsetChanged:(_Bool)arg1;
@property(nonatomic) _Bool commentsOffsetChanged; // @synthesize commentsOffsetChanged=_commentsOffsetChanged;
- (void)_setIsFavoriteChanged:(_Bool)arg1;
@property(nonatomic) _Bool isFavoriteChanged; // @synthesize isFavoriteChanged=_isFavoriteChanged;
- (void)_setWantsIrisBadgeVisibleChanged:(_Bool)arg1;
@property(nonatomic) _Bool wantsIrisBadgeVisibleChanged; // @synthesize wantsIrisBadgeVisibleChanged=_wantsIrisBadgeVisibleChanged;
- (void)_setBadgeInfoChanged:(_Bool)arg1;
@property(nonatomic) _Bool badgeInfoChanged; // @synthesize badgeInfoChanged=_badgeInfoChanged;
- (void)_setIrisPlayerChange:(id)arg1;
@property(retain, nonatomic) PUBrowsingIrisPlayerChange *irisPlayerChange; // @synthesize irisPlayerChange=_irisPlayerChange;
- (void)_setForceBadgesVisibleChanged:(_Bool)arg1;
@property(nonatomic) _Bool forceBadgesVisibleChanged; // @synthesize forceBadgesVisibleChanged=_forceBadgesVisibleChanged;
- (void)_setVideoPlayerChange:(id)arg1;
@property(retain, nonatomic) PUBrowsingVideoPlayerChange *videoPlayerChange; // @synthesize videoPlayerChange=_videoPlayerChange;
- (void)_setLoadingStatusChanged:(_Bool)arg1;
@property(nonatomic) _Bool loadingStatusChanged; // @synthesize loadingStatusChanged=_loadingStatusChanged;
- (void)_setFocusValueChanged:(_Bool)arg1;
@property(nonatomic) _Bool focusValueChanged; // @synthesize focusValueChanged=_focusValueChanged;
- (void)_setInFocusChanged:(_Bool)arg1;
@property(nonatomic) _Bool isInFocusChanged; // @synthesize isInFocusChanged=_isInFocusChanged;
- (void)_setUserTransformingTileDidChange:(_Bool)arg1;
@property(nonatomic) _Bool isUserTransformingTileDidChange; // @synthesize isUserTransformingTileDidChange=_isUserTransformingTileDidChange;
- (void)_setModelTileTransformChanged:(_Bool)arg1;
@property(nonatomic) _Bool modelTileTransformChanged; // @synthesize modelTileTransformChanged=_modelTileTransformChanged;
- (void)_setAssetChanged:(_Bool)arg1;
@property(nonatomic) _Bool assetChanged; // @synthesize assetChanged=_assetChanged;
- (void).cxx_destruct;
- (_Bool)hasChanges;

@end

