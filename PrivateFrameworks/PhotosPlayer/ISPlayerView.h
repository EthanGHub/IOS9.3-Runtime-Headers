//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosPlayer/ISGestureInputDelegate-Protocol.h>
#import <PhotosPlayer/ISPlayerChangeObserver-Protocol.h>
#import <PhotosPlayer/ISPlayerChangeObserverPrivate-Protocol.h>
#import <PhotosPlayer/ISPlayerDelegate-Protocol.h>
#import <PhotosPlayer/ISPlayerOutput-Protocol.h>
#import <PhotosPlayer/UIGestureRecognizerDelegate-Protocol.h>

@class AVPlayerLayer, CALayer, ISCrossfadeLayer, ISGestureInput, ISMutedAudioInput, ISPlaybackSpec, ISPlayer, ISVitalityFilter, ISVitalityInput, ISWrappedAVPlayer, NSError, NSHashTable, NSMutableSet, NSObject, NSString, UIGestureRecognizer, UIScrollView, _ISAVPlayerView, _ISCrossfadeView, _ISPlayerDebugView, _ISTargetView;
@protocol ISPlayerViewDelegate, NSObject, OS_dispatch_queue;

@interface ISPlayerView : UIView <ISGestureInputDelegate, ISPlayerOutput, UIGestureRecognizerDelegate, ISPlayerChangeObserver, ISPlayerChangeObserverPrivate, ISPlayerDelegate>
{
    ISPlayer *_player;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_observerQueue;
    ISWrappedAVPlayer *_videoPlayer;
    CALayer *_overridePhotoLayer;
    struct CGImage *_photoContents;
    _Bool _photoViewHidden;
    struct {
        unsigned int respondsToStateDidChange:1;
        unsigned int respondsToWillBeginVisualPlayback:1;
        unsigned int respondsToDidEndVisualPlayback:1;
        unsigned int respondsToDidPlaybackVideoAssetToEnd:1;
        unsigned int respondsToWillPlaybackVideoAssetToEnd:1;
        unsigned int respondsToDelegateForGestureReognizer:1;
        unsigned int respondsToViewHostingGestureRecognizer:1;
        unsigned int respondsToIsInteractingDidChange:1;
        unsigned int respondsToGestureRecognizerDidChange:1;
        unsigned int respondsToPlayerItemDidChange:1;
    } _delegateFlags;
    _Bool _interactivePlaybackAllowed;
    _Bool _isReadyForDisplay;
    _Bool _isInteracting;
    _Bool _useSingletonPlayer;
    _Bool _vitalityAllowed;
    _Bool _allowReversePlayback;
    _Bool _shouldManagePlayerItemLoading;
    _Bool _showCrossfadeBorder;
    _Bool _showVideoBorder;
    _Bool _showDebugInfo;
    _Bool __crossfadeEnabled;
    _Bool __needsUpdateDebugView;
    _Bool __needsNewDriver;
    _Bool __playerTransitioning;
    double _photoScale;
    double _scrubOffset;
    long long _scrubRegion;
    long long _playbackState;
    long long _status;
    NSError *_error;
    id <ISPlayerViewDelegate> _delegate;
    unsigned long long _playbackStyle;
    ISPlaybackSpec *_playbackSpec;
    UIScrollView *_vitalityScrollView;
    ISVitalityFilter *_vitalityFilter;
    UIView *__photoContainerView;
    UIView *__videoContainerView;
    _ISTargetView *__photoView;
    _ISAVPlayerView *__videoView;
    _ISTargetView *__videoMaskView;
    _ISCrossfadeView *__crossfadeView;
    _ISPlayerDebugView *__debugInfoView;
    ISGestureInput *__playbackInput;
    ISVitalityInput *__vitalityInput;
    ISMutedAudioInput *__mutedAudioInput;
    id __forceTouchStatusObserver;
    id <NSObject> __playerObservationToken;
    NSMutableSet *__activeGestures;
    struct CGSize _dimensionsOfReservedVideoMemory;
    struct CGSize __videoSize;
}

+ (void)setAllowPlayerReuse:(_Bool)arg1;
+ (void)resetCaches;
+ (void)initialize;
@property(readonly, nonatomic) NSMutableSet *_activeGestures; // @synthesize _activeGestures=__activeGestures;
@property(retain, nonatomic, setter=_setPlayerObservationToken:) id <NSObject> _playerObservationToken; // @synthesize _playerObservationToken=__playerObservationToken;
@property(retain, nonatomic, setter=_setForceTouchStatusObserver:) id _forceTouchStatusObserver; // @synthesize _forceTouchStatusObserver=__forceTouchStatusObserver;
@property(nonatomic, setter=_setVideoSize:) struct CGSize _videoSize; // @synthesize _videoSize=__videoSize;
@property(retain, nonatomic, setter=_setMutedAudioInput:) ISMutedAudioInput *_mutedAudioInput; // @synthesize _mutedAudioInput=__mutedAudioInput;
@property(retain, nonatomic, setter=_setVitalityInput:) ISVitalityInput *_vitalityInput; // @synthesize _vitalityInput=__vitalityInput;
@property(retain, nonatomic, setter=_setPlaybackInput:) ISGestureInput *_playbackInput; // @synthesize _playbackInput=__playbackInput;
@property(nonatomic, getter=_isPlayerTransitioning, setter=_setPlayerTransitioning:) _Bool _playerTransitioning; // @synthesize _playerTransitioning=__playerTransitioning;
@property(nonatomic, setter=_setNeedsNewDriver:) _Bool _needsNewDriver; // @synthesize _needsNewDriver=__needsNewDriver;
@property(nonatomic, setter=_setNeedsUpdateDebugView:) _Bool _needsUpdateDebugView; // @synthesize _needsUpdateDebugView=__needsUpdateDebugView;
@property(retain, nonatomic, setter=_setDebugInfoView:) _ISPlayerDebugView *_debugInfoView; // @synthesize _debugInfoView=__debugInfoView;
@property(nonatomic, getter=_isCrossfadeEnabled, setter=_setCrossfadeEnabled:) _Bool _crossfadeEnabled; // @synthesize _crossfadeEnabled=__crossfadeEnabled;
@property(retain, nonatomic, setter=_setCrossfadeView:) _ISCrossfadeView *_crossfadeView; // @synthesize _crossfadeView=__crossfadeView;
@property(readonly, nonatomic) _ISTargetView *_videoMaskView; // @synthesize _videoMaskView=__videoMaskView;
@property(retain, nonatomic, setter=_setVideoView:) _ISAVPlayerView *_videoView; // @synthesize _videoView=__videoView;
@property(retain, nonatomic, setter=_setPhotoView:) _ISTargetView *_photoView; // @synthesize _photoView=__photoView;
@property(retain, nonatomic, setter=_setVideoContainerView:) UIView *_videoContainerView; // @synthesize _videoContainerView=__videoContainerView;
@property(retain, nonatomic, setter=_setPhotoContainerView:) UIView *_photoContainerView; // @synthesize _photoContainerView=__photoContainerView;
@property(retain, nonatomic) ISVitalityFilter *vitalityFilter; // @synthesize vitalityFilter=_vitalityFilter;
@property(nonatomic) __weak UIScrollView *vitalityScrollView; // @synthesize vitalityScrollView=_vitalityScrollView;
@property(retain, nonatomic) ISPlaybackSpec *playbackSpec; // @synthesize playbackSpec=_playbackSpec;
@property(nonatomic) _Bool showDebugInfo; // @synthesize showDebugInfo=_showDebugInfo;
@property(nonatomic) _Bool showVideoBorder; // @synthesize showVideoBorder=_showVideoBorder;
@property(nonatomic) _Bool showCrossfadeBorder; // @synthesize showCrossfadeBorder=_showCrossfadeBorder;
@property(nonatomic) _Bool shouldManagePlayerItemLoading; // @synthesize shouldManagePlayerItemLoading=_shouldManagePlayerItemLoading;
@property(nonatomic) struct CGSize dimensionsOfReservedVideoMemory; // @synthesize dimensionsOfReservedVideoMemory=_dimensionsOfReservedVideoMemory;
@property(nonatomic) unsigned long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property(nonatomic) _Bool allowReversePlayback; // @synthesize allowReversePlayback=_allowReversePlayback;
@property(nonatomic, getter=isVitalityAllowed) _Bool vitalityAllowed; // @synthesize vitalityAllowed=_vitalityAllowed;
@property(nonatomic, getter=isUsingSingletonPlayer) _Bool useSingletonPlayer; // @synthesize useSingletonPlayer=_useSingletonPlayer;
@property(nonatomic, getter=isPhotoViewHidden) _Bool photoViewHidden; // @synthesize photoViewHidden=_photoViewHidden;
@property(nonatomic) __weak id <ISPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setError:(id)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)_setStatus:(long long)arg1;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) _Bool isReadyForDisplay; // @synthesize isReadyForDisplay=_isReadyForDisplay;
@property(nonatomic, getter=isInteractivePlaybackAllowed) _Bool interactivePlaybackAllowed; // @synthesize interactivePlaybackAllowed=_interactivePlaybackAllowed;
@property(nonatomic) long long scrubRegion; // @synthesize scrubRegion=_scrubRegion;
@property(nonatomic) double scrubOffset; // @synthesize scrubOffset=_scrubOffset;
@property(nonatomic) double photoScale; // @synthesize photoScale=_photoScale;
- (void).cxx_destruct;
- (long long)state;
- (id)videoPlayerForPlayer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)playerPlayingVitalityChanged:(id)arg1;
- (void)player:(id)arg1 didChangePlayerItem:(id)arg2;
- (void)player:(id)arg1 didChangePlayerStatus:(long long)arg2;
- (void)player:(id)arg1 didChangePlaybackState:(long long)arg2;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)playerDidPlayVideoToEnd;
- (void)playerWillPlayVideoToEnd;
- (void)playerDidEndTransitionToPlaybackState:(long long)arg1;
- (void)playerWillBeginTransitionToPlaybackState:(long long)arg1;
@property(readonly, nonatomic) ISCrossfadeLayer *crossfadeLayer;
@property(retain, nonatomic) struct CGImage *photoContents;
@property(readonly, nonatomic) CALayer *photoLayer;
@property(readonly, nonatomic) AVPlayerLayer *videoLayer;
- (void)gestureInputGestureRecognizerDidChange:(id)arg1;
- (id)gestureInput:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (id)gestureInput:(id)arg1 viewHostingGestureRecognizer:(id)arg2;
- (void)_setInteracting:(_Bool)arg1;
- (void)_handleGesture:(id)arg1;
- (void)setVitalityEnabled:(_Bool)arg1 inScrollView:(id)arg2;
- (void)_forceTouchStatusDidChange:(id)arg1;
- (void)_updatePlayerParameters;
- (void)_setPlaybackState:(long long)arg1;
- (void)_playerPlaybackStateDidChange;
- (void)_playerDidChangePlayerItem;
- (void)_removePlayerObservers;
- (void)_addPlayerObservers;
- (void)_updateStatus;
- (void)_updateContainerViews;
- (void)_updateVideoBorder;
- (void)dealloc;
- (void)_updateSubviewOrdering;
- (void)_updateVideoLayer;
- (void)_updateCrossfadeLayer;
@property(readonly, nonatomic, getter=isPlayingVitalityHint) _Bool playingVitalityHint;
@property(readonly, nonatomic, getter=isPlayingVitality) _Bool playingVitality;
- (void)playVitalityHint;
- (void)seekForVitalityHintIfNeeded;
- (void)cancelGestureRecognizers;
- (void)invalidateGestureRecognizers;
- (void)_updateDebugViewIfNeeded;
- (void)_invalidateDebugView;
- (void)_updatePhotoViewVisibility;
- (void)_updateVitalityInput;
- (void)_updatePlaybackInput;
- (Class)_playbackInputClass;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property(retain, nonatomic) ISPlayer *player;
- (void)prepareWithPlayerItem:(id)arg1;
@property(nonatomic) double playThreshold;
@property(nonatomic) _Bool audioMuted;
- (void)_configureForPlaybackSpec:(id)arg1;
@property(retain, nonatomic) CALayer *overridePhotoLayer;
@property(nonatomic) double scrubThreshold;
- (void)prepareWithPhoto:(struct CGImage *)arg1 videoAsset:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4;
- (void)prepareWithPhoto:(struct CGImage *)arg1 videoAsset:(id)arg2 photoTime:(double)arg3;
- (void)prepareWithBundleURL:(id)arg1;
- (struct CGSize)_uncachedVideoSize;
- (void)_updateVideoSizeIfNeeded;
- (void)_handleTracksLoadedForPlayerItem:(id)arg1;
- (void)_invalidateVideoSizeAndLoadAsynchronously;
- (struct CGSize)_photoSize;
- (long long)_photoOrientation;
- (struct CGSize)intrinsicContentSize;
- (void)_layoutPhotoView;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;
- (_Bool)isSupportedContentMode:(long long)arg1;
- (id)supportedContentModes;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithVideoPlayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, copy) NSString *debugDescription;
- (double)_backingScaleFactor;
- (id)contentLayer;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

