//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUSettings.h>

@interface PUPhotosGridSettings : PUSettings
{
    _Bool _badgeAllItemsAsVideos;
    _Bool _displayAllItemsAsBursts;
    _Bool _forceJPEGThumbnailsInDefaultGrid;
    _Bool _flashDegradedImages;
    _Bool _useFloatingHeaders;
    _Bool _swipeSelectionEnabled;
    _Bool _shouldExitEditingModeAfterDuplication;
    double _defaultItemSideSize;
    double _minimumSpacing;
    double _maximumSpacing;
    double _sideMargins;
    long long _numberColumnsInDefaultGrid;
    long long _numberOfColumnsInWideGrid;
    double _magnifierRevealPreviewScale;
    double _previewRevealProgressToFreezeMagnifier;
    double _minimumDistanceToUnfreeze;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) _Bool shouldExitEditingModeAfterDuplication; // @synthesize shouldExitEditingModeAfterDuplication=_shouldExitEditingModeAfterDuplication;
@property(nonatomic) double minimumDistanceToUnfreeze; // @synthesize minimumDistanceToUnfreeze=_minimumDistanceToUnfreeze;
@property(nonatomic) double previewRevealProgressToFreezeMagnifier; // @synthesize previewRevealProgressToFreezeMagnifier=_previewRevealProgressToFreezeMagnifier;
@property(nonatomic) double magnifierRevealPreviewScale; // @synthesize magnifierRevealPreviewScale=_magnifierRevealPreviewScale;
@property(nonatomic, getter=isSwipeSelectionEnabled) _Bool swipeSelectionEnabled; // @synthesize swipeSelectionEnabled=_swipeSelectionEnabled;
@property(nonatomic) _Bool useFloatingHeaders; // @synthesize useFloatingHeaders=_useFloatingHeaders;
@property(nonatomic) _Bool flashDegradedImages; // @synthesize flashDegradedImages=_flashDegradedImages;
@property(nonatomic) long long numberOfColumnsInWideGrid; // @synthesize numberOfColumnsInWideGrid=_numberOfColumnsInWideGrid;
@property(nonatomic) long long numberColumnsInDefaultGrid; // @synthesize numberColumnsInDefaultGrid=_numberColumnsInDefaultGrid;
@property(nonatomic) _Bool forceJPEGThumbnailsInDefaultGrid; // @synthesize forceJPEGThumbnailsInDefaultGrid=_forceJPEGThumbnailsInDefaultGrid;
@property(nonatomic) _Bool displayAllItemsAsBursts; // @synthesize displayAllItemsAsBursts=_displayAllItemsAsBursts;
@property(nonatomic) _Bool badgeAllItemsAsVideos; // @synthesize badgeAllItemsAsVideos=_badgeAllItemsAsVideos;
@property(nonatomic) double sideMargins; // @synthesize sideMargins=_sideMargins;
@property(nonatomic) double maximumSpacing; // @synthesize maximumSpacing=_maximumSpacing;
@property(nonatomic) double minimumSpacing; // @synthesize minimumSpacing=_minimumSpacing;
@property(nonatomic) double defaultItemSideSize; // @synthesize defaultItemSideSize=_defaultItemSideSize;
- (void)setDefaultValues;

@end

