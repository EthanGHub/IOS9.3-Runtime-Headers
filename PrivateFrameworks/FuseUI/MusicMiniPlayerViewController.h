//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MPUTransportControlMediaRemoteControllerDelegate-Protocol.h>
#import <FuseUI/MPUTransportControlsViewDataSource-Protocol.h>
#import <FuseUI/MPUTransportControlsViewDelegate-Protocol.h>
#import <FuseUI/MPUTransportControlsViewLayoutDelegate-Protocol.h>
#import <FuseUI/MusicClientContextConsuming-Protocol.h>

@class MPAVController, MPAVItem, MPUTransportControlMediaRemoteController, MPUTransportControlsView, MusicClientContext, MusicMiniPlayerBackgroundView, MusicNowPlayingTitlesView, MusicPlaybackProgressScrubberController, NSString, SKUIClientContext, UIPanGestureRecognizer, UIView;
@protocol MusicPlaybackProgressScrubbing;

@interface MusicMiniPlayerViewController : UIViewController <MPUTransportControlMediaRemoteControllerDelegate, MPUTransportControlsViewDataSource, MPUTransportControlsViewDelegate, MPUTransportControlsViewLayoutDelegate, MusicClientContextConsuming>
{
    MusicMiniPlayerBackgroundView *_backgroundView;
    MPAVItem *_currentItem;
    MusicPlaybackProgressScrubberController *_miniPlayerPlaybackProgressScrubberController;
    MPAVController *_player;
    MPUTransportControlMediaRemoteController *_transportControlMediaRemoteController;
    MPUTransportControlMediaRemoteController *_secondaryControlMediaRemoteController;
    NSString *_titlesViewFirstLineText;
    NSString *_titlesViewSecondLineText;
    MusicClientContext *_clientContext;
    UIView<MusicPlaybackProgressScrubbing> *_playbackProgressView;
    MusicNowPlayingTitlesView *_titlesView;
    MPUTransportControlsView *_transportControlsView;
    MPUTransportControlsView *_secondaryTransportControlsView;
    UIPanGestureRecognizer *_nowPlayingPresentationPanRecognizer;
}

@property(retain, nonatomic) UIPanGestureRecognizer *nowPlayingPresentationPanRecognizer; // @synthesize nowPlayingPresentationPanRecognizer=_nowPlayingPresentationPanRecognizer;
@property(readonly, nonatomic) MPUTransportControlsView *secondaryTransportControlsView; // @synthesize secondaryTransportControlsView=_secondaryTransportControlsView;
@property(readonly, nonatomic) MPUTransportControlsView *transportControlsView; // @synthesize transportControlsView=_transportControlsView;
@property(readonly, nonatomic) MusicNowPlayingTitlesView *titlesView; // @synthesize titlesView=_titlesView;
@property(readonly, nonatomic) UIView<MusicPlaybackProgressScrubbing> *playbackProgressView; // @synthesize playbackProgressView=_playbackProgressView;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(retain, nonatomic) SKUIClientContext *clientContext;
- (void).cxx_destruct;
- (void)_updateTitlesForCurrentItem;
- (void)_updateSupportedCommands;
- (void)_updateNowPlayingInfo;
- (void)_unregisterForNotificationsForPlayer:(id)arg1;
- (void)_unregisterForNotificationsForCurrentItem:(id)arg1;
- (void)_showUpNext:(id)arg1;
- (void)_showContextualActions:(id)arg1;
- (void)_setCurrentItem:(id)arg1;
- (void)_reloadPlaybackProgressScrubberController;
- (void)_registerForNotificationsForPlayer:(id)arg1;
- (void)_registerForNotificationsForCurrentItem:(id)arg1;
- (void)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2;
- (id)_imageForTransportButtonWithControlType:(long long)arg1;
- (void)_didFinishAdActionNotification:(id)arg1;
- (void)_playerPlaybackStateDidChangeNotification:(id)arg1;
- (void)_playerCurrentItemDidChangeNotification:(id)arg1;
- (void)_playerContentsDidChangeNotification:(id)arg1;
- (void)_didUpdateSupportedCommandsNotification:(id)arg1;
- (void)_currentItemTitlesDidChangeNotification:(id)arg1;
- (void)_panRecognized:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)transportControlsViewDidLayoutSubviews:(id)arg1;
- (struct CGRect)transportControlsView:(id)arg1 adjustedFrameOfTransportButtonWithControlType:(long long)arg2 proposedFrame:(struct CGRect)arg3;
- (void)transportControlsView:(id)arg1 longPressEndOnControlType:(long long)arg2;
- (void)transportControlsView:(id)arg1 longPressBeginOnControlType:(long long)arg2;
- (void)transportControlsView:(id)arg1 tapOnControlType:(long long)arg2;
- (id)transportControlsView:(id)arg1 buttonForControlType:(long long)arg2;
- (id)transportControlMediaRemoteController:(id)arg1 alternateKeyForMediaRemoteNowPlayingInfoKey:(id)arg2;
- (void)transportControlMediaRemoteController:(id)arg1 requestsPushingMediaRemoteCommand:(unsigned int)arg2 withOptions:(id)arg3 shouldLaunchApplication:(_Bool)arg4;
- (id)presentingViewControllerForLikeBanActionSheetForTransportControlMediaRemoteController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
