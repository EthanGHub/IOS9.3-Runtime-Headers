//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TelephonyUI/TPStarkHardPauseButtonDelegate-Protocol.h>
#import <TelephonyUI/TPStarkInCallButtonsViewDelegate-Protocol.h>
#import <TelephonyUI/TPStarkPhoneCallGalleryViewDelegate-Protocol.h>
#import <TelephonyUI/UIActionSheetDelegate-Protocol.h>

@class NSArray, NSString, NSTimer, TPStarkInCallButtonsView, TPStarkInCallHardPauseButton, TPStarkPhoneCallGalleryView, TUCall, TUReplyWithMessageStore, UIView;
@protocol TPStarkInCallViewControllerDelegate;

@interface TPStarkInCallViewController : UIViewController <TPStarkPhoneCallGalleryViewDelegate, TPStarkHardPauseButtonDelegate, TPStarkInCallButtonsViewDelegate, UIActionSheetDelegate>
{
    TUReplyWithMessageStore *_replyWithMessageStore;
    unsigned short _currentMode;
    id <TPStarkInCallViewControllerDelegate> _delegate;
    NSArray *_primaryPhoneCalls;
    NSArray *_conferenceParticipants;
    TUCall *_incomingPhoneCall;
    UIView *_flippyView;
    TPStarkPhoneCallGalleryView *_galleryView;
    TPStarkInCallButtonsView *_buttonsView;
    TPStarkInCallHardPauseButton *_hardPauseButton;
    NSTimer *_viewUpdateClockTickTimer;
    TUCall *_callToDecline;
    TUCall *_failedCall;
}

@property(retain) TUCall *failedCall; // @synthesize failedCall=_failedCall;
@property unsigned short currentMode; // @synthesize currentMode=_currentMode;
@property(retain) TUCall *callToDecline; // @synthesize callToDecline=_callToDecline;
@property(retain) NSTimer *viewUpdateClockTickTimer; // @synthesize viewUpdateClockTickTimer=_viewUpdateClockTickTimer;
@property(retain) TPStarkInCallHardPauseButton *hardPauseButton; // @synthesize hardPauseButton=_hardPauseButton;
@property(retain) TPStarkInCallButtonsView *buttonsView; // @synthesize buttonsView=_buttonsView;
@property(retain) TPStarkPhoneCallGalleryView *galleryView; // @synthesize galleryView=_galleryView;
@property(retain) UIView *flippyView; // @synthesize flippyView=_flippyView;
@property(retain) TUCall *incomingPhoneCall; // @synthesize incomingPhoneCall=_incomingPhoneCall;
@property(copy) NSArray *conferenceParticipants; // @synthesize conferenceParticipants=_conferenceParticipants;
@property(copy) NSArray *primaryPhoneCalls; // @synthesize primaryPhoneCalls=_primaryPhoneCalls;
@property id <TPStarkInCallViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)selectNextHighlightableControlAscending:(_Bool)arg1;
- (void)hardPauseDigitsStateChangedNotification:(id)arg1;
- (void)updateHardPauseButtonState;
- (void)hardPauseButtonDidSendHardPauseDigits:(id)arg1;
- (id)callForHardPauseState;
- (void)hardPauseButtonDidChangeVisibility:(id)arg1;
- (void)highlightHardPauseButton;
- (_Bool)currentCallStateWarrantsCallWaitingMode;
- (void)callStateChangedNotification:(id)arg1;
- (void)muteStateChangedNotification:(id)arg1;
- (void)viewUpdateClockTickTimerFired:(id)arg1;
- (void)updateButtonsViewState;
- (_Bool)canSendMessageToCall:(id)arg1;
- (_Bool)isSpringBoardPasscodeLocked;
- (_Bool)areIncomingCallOptionsAllowed;
- (void)handleAlertControllerSendMessageResponse:(id)arg1;
- (id)replyWithMessageStore;
- (void)inCallButtonWasTapped:(id)arg1;
- (void)_sendMessageResponse:(id)arg1 toCall:(id)arg2;
- (_Bool)canSendMessage;
- (_Bool)isHoldEnabled;
- (_Bool)isKeypadEnabled;
- (_Bool)isKeypadAllowed;
- (_Bool)isSwapCallsAllowed;
- (_Bool)isMergeCallsAllowed;
- (_Bool)isAddCallAllowed;
- (id)representativePhoneCallForConferenceForGalleryView:(id)arg1;
- (id)allConferenceParticipantCalls;
- (id)conferenceParticipantCallsForPhoneCall:(id)arg1;
- (id)primaryPhoneCallsForGalleryView:(id)arg1;
- (_Bool)isMuted;
- (void)setIsMuted:(_Bool)arg1;
@property(readonly) _Bool isDismissable;
- (id)currentActivePhoneCall;
- (id)__sanitizedPrimaryPhoneCallOrdering:(id)arg1;
- (void)setPrimaryPhoneCalls:(id)arg1 conferencePhoneCalls:(id)arg2 incomingPhoneCall:(id)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
