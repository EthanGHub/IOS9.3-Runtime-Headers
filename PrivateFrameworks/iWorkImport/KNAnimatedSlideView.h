//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDCanvasDelegate-Protocol.h>
#import <iWorkImport/TSDConnectedInfoReplacing-Protocol.h>

@class KNAnimatedSlideModel, KNPlaybackSession, KNSlide, KNSlideNode, NSIndexSet, NSMutableArray, NSMutableSet, NSSet, NSString, TSDCanvas, TSDTexturedRectangle, TSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface KNAnimatedSlideView : NSObject <TSDCanvasDelegate, TSDConnectedInfoReplacing>
{
    KNSlide *mSlide;
    KNSlideNode *mSlideNode;
    KNSlideNode *mAlternateDestinationSlideNode;
    KNPlaybackSession *mSession;
    KNAnimatedSlideModel *mAnimatedSlideModel;
    unsigned long long mCurrentEventIndex;
    NSIndexSet *mEventIndexesToAnimate;
    _Bool mSlideIsBuildable;
    _Bool mTransitionInitialized;
    _Bool mShouldStopAnimations;
    NSMutableSet *mMovieRenderers;
    NSMutableSet *mActiveAnimatedBuilds;
    unsigned long long mSlideNumber;
    double mTransitionStartTime;
    unsigned long long mAnimationsActive;
    unsigned long long mAnimationsStarted;
    _Bool mIsInDelayBeforeActiveAnimations;
    NSMutableArray *mChunks;
    TSUNoCopyDictionary *mBuildsToStartAfterMovieStartsMap;
    TSUNoCopyDictionary *mTextureSetForRepMap;
    NSMutableArray *mDelayedAnimations;
    id mEventStartCallbackTarget;
    SEL mEventStartCallbackSelector;
    id mEventAnimationActiveCallbackTarget;
    SEL mEventAnimationActiveCallbackSelector;
    id mEventEndCallbackTarget;
    SEL mEventEndCallbackSelector;
    id mEventImmediateEndCallbackTarget;
    SEL mEventImmediateEndCallbackSelector;
    id mMovieStartCallbackTarget;
    SEL mMovieStartCallbackSelector;
    id mMovieEndCallbackTarget;
    SEL mMovieEndCallbackSelector;
    _Bool mEventTriggered;
    _Bool mQueuedTrigger;
    _Bool mSkipDelayOnTransition;
    _Bool mPlaysAutomaticTransitions;
    TSDCanvas *mCanvas;
    TSDTexturedRectangle *mOutgoingTexture;
    TSDTexturedRectangle *mIncomingTexture;
    int mIsTexturePreloadingCancelled;
    NSMutableSet *mTextureSets;
}

+ (void)registerUserDefaults;
+ (void)initialize;
@property(nonatomic) _Bool triggerQueued; // @synthesize triggerQueued=mQueuedTrigger;
@property(nonatomic) _Bool playsAutomaticTransitions; // @synthesize playsAutomaticTransitions=mPlaysAutomaticTransitions;
@property(nonatomic) _Bool skipDelayOnTransition; // @synthesize skipDelayOnTransition=mSkipDelayOnTransition;
@property(readonly, nonatomic) KNPlaybackSession *session; // @synthesize session=mSession;
@property(readonly, nonatomic) KNAnimatedSlideModel *model; // @synthesize model=mAnimatedSlideModel;
@property(copy, nonatomic) NSIndexSet *eventIndexesToAnimate; // @synthesize eventIndexesToAnimate=mEventIndexesToAnimate;
@property(nonatomic) _Bool eventHasTriggered; // @synthesize eventHasTriggered=mEventTriggered;
@property(readonly, nonatomic) NSSet *activeAnimatedBuilds; // @synthesize activeAnimatedBuilds=mActiveAnimatedBuilds;
- (void)clearActiveAnimatedBuilds;
- (void)removeActiveAnimatedBuild:(id)arg1;
- (void)addActiveAnimatedBuild:(id)arg1;
@property(retain, nonatomic) TSDTexturedRectangle *outgoingTexture; // @synthesize outgoingTexture=mOutgoingTexture;
@property(retain, nonatomic) TSDTexturedRectangle *incomingTexture; // @synthesize incomingTexture=mIncomingTexture;
- (id)textureSetForRep:(id)arg1;
- (void)setTexture:(id)arg1 forRep:(id)arg2;
- (void)p_resetMovieTextures;
- (void)p_clearMovieRenderers;
- (void)p_removeMovieRenderer:(id)arg1;
- (void)p_addMovieRenderer:(id)arg1;
@property(readonly, nonatomic) NSSet *movieRenderers;
- (void)p_animateBuild:(id)arg1;
- (void)p_animateBuild:(id)arg1 afterDelay:(double)arg2;
- (void)p_removeDelayedAnimation:(id)arg1;
- (void)p_performAnimationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4;
- (_Bool)p_shouldSkipActionBuild:(id)arg1 onMovieInfo:(id)arg2;
- (void)p_animateBuild:(id)arg1 isMoviePlayback:(_Bool)arg2;
- (void)p_animateTransition:(id)arg1;
- (void)setupTransition;
- (void)p_setupTransitionStartTime;
- (void)resumeAnimationsIfPaused;
- (void)pauseAnimations;
- (void)stopAnimations;
- (void)p_stopAllMovieRenderers;
- (void)interruptAndReset;
- (void)reset;
@property(readonly, nonatomic) unsigned long long eventCount;
- (void)setNewDestinationSlideNode:(id)arg1;
- (_Bool)isAtFirstEvent;
@property(nonatomic) unsigned long long eventIndex;
- (void)p_animateCurrentEventIgnoringDelays:(_Bool)arg1;
- (double)p_minimumDelay;
- (void)triggerNextEventIgnoringDelay:(_Bool)arg1;
- (void)triggerNextEvent;
- (_Bool)playAutomaticEvents;
- (void)renderEvent:(unsigned long long)arg1 intoContext:(struct CGContext *)arg2 ignoreBuildVisibility:(_Bool)arg3;
- (void)renderCurrentEvent;
- (void)renderEvent:(unsigned long long)arg1 onBaseLayer:(id)arg2 shouldPrepareBuildAnimation:(_Bool)arg3;
- (void)p_renderTexturesOnBaseLayer:(id)arg1 atEvent:(unsigned long long)arg2 shouldPrepareBuildAnimation:(_Bool)arg3 ignoreBuildVisibility:(_Bool)arg4;
- (void)p_initializeTextureSetForRep:(id)arg1 info:(id)arg2 eventIndex:(unsigned long long)arg3 shouldPrepareBuildAnimation:(_Bool)arg4 ignoreBuildVisibility:(_Bool)arg5 isRenderingToContext:(_Bool)arg6 buildInfos:(id)arg7 postInitBlock:(CDUnknownBlockType)arg8;
- (void)preloadTexturesForEvent:(unsigned long long)arg1 ignoreBuildVisibility:(_Bool)arg2 priority:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelTexturePreloading;
@property(readonly, nonatomic) KNAnimatedSlideView *nextASV;
- (_Bool)slideContainsRepsThatMustDrawOnMainThread;
- (id)p_getRenderersAtEventIndex:(long long)arg1;
- (_Bool)p_shouldAddInfoToTree:(id)arg1;
- (id)p_infosForSlide;
@property(readonly, nonatomic) _Bool isDoneAnimating;
- (_Bool)hasTransitionAtEventIndex:(long long)arg1;
@property(readonly, nonatomic) _Bool hasBuilds;
- (id)infosVisibleAtEvent:(unsigned long long)arg1 ignoreBuildVisibility:(_Bool)arg2;
- (id)repsCurrentlyVisible;
- (id)infosCurrentlyVisible;
@property(readonly, nonatomic) _Bool isMovieAnimating;
@property(readonly, nonatomic) _Bool isNonMovieAnimationAnimating;
@property(readonly, nonatomic) _Bool isNonMovieAnimationActive;
@property(readonly, nonatomic) _Bool isAnimating;
@property(readonly, nonatomic) TSDCanvas *canvas;
- (void)buildHasFinishedAnimating:(id)arg1;
- (void)movieHasFinishedPlayback:(id)arg1;
- (void)p_movieStarted:(id)arg1;
- (void)transitionHasFinishedAnimating:(id)arg1;
- (void)transitionHasImmediatelyFinishedAnimating:(id)arg1;
- (void)registerForMovieEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForMovieStartCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventImmediateEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventAnimationActiveCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventStartCallback:(SEL)arg1 target:(id)arg2;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (unsigned long long)slideNumber;
- (_Bool)isRenderingForKPF;
- (_Bool)isCanvasDrawingIntoPDF:(id)arg1;
- (_Bool)shouldShowInstructionalText;
- (_Bool)shouldSuppressBackgrounds;
- (_Bool)isPrintingCanvas;
- (id)documentRoot;
- (void)p_tearDownTexturesIsExitingShow:(_Bool)arg1;
- (void)p_recursivelyRemoveCallbackObserversFromAnimatedBuilds:(id)arg1;
- (void)dealloc;
- (id)initForSlideNode:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

