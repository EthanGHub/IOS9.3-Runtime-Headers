//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKAppContext, IKAppMediaItemBridge, IKAppPlaylistBridge, IKDOMDocument, IKJSPlayer;
@protocol IKAppPlayer;

@interface IKAppPlayerBridge : NSObject
{
    id <IKAppPlayer> _appPlayer;
    IKAppContext *_appContext;
    IKJSPlayer *_jsPlayer;
    long long _state;
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak IKJSPlayer *jsPlayer; // @synthesize jsPlayer=_jsPlayer;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, nonatomic) id <IKAppPlayer> appPlayer; // @synthesize appPlayer=_appPlayer;
- (void).cxx_destruct;
@property(readonly, nonatomic) double scanRate;
- (void)cleanup;
- (void)timedMetadataDidChange:(id)arg1 value:(id)arg2;
- (void)setTimedMetadataKeysToObserve:(id)arg1;
@property(readonly, nonatomic) IKAppMediaItemBridge *previousMediaItem;
@property(readonly, nonatomic) IKAppMediaItemBridge *nextMediaItem;
@property(readonly, nonatomic) IKAppMediaItemBridge *currentMediaItem;
@property(retain, nonatomic) IKDOMDocument *overlayDocument;
- (void)setElapsedTime:(double)arg1 precise:(_Bool)arg2;
@property(nonatomic) __weak IKAppPlaylistBridge *playlist;
- (void)scan:(double)arg1;
- (void)stop;
- (void)pause;
- (void)present;
- (void)play;
- (void)dealloc;
- (id)initWithJSPlayer:(id)arg1;
- (void)requestSeekToTime:(double)arg1 currentTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)requestSeekToTime:(double *)arg1 currentTime:(double)arg2;
- (void)shouldHandleStateEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldHandleStateEvent:(id)arg1;
- (void)stateWillChange:(id)arg1;
- (void)stateDidChange:(id)arg1;
- (void)mediaItemDidChange:(long long)arg1;
- (void)mediaItemDidChange:(id)arg1 userInitiated:(_Bool)arg2;
- (void)mediaItemWillChange:(long long)arg1;
- (void)mediaItemWillChange:(id)arg1 userInitiated:(_Bool)arg2;
- (void)timeBoundaryDidCross:(double)arg1;
- (void)stopObservingTimeBoundary:(double)arg1;
- (void)observeTimeBoundary:(double)arg1;
- (void)removeTimeIntervalObserver:(unsigned long long)arg1;
- (void)addTimeIntervalObserver:(unsigned long long)arg1;
- (void)timeIntervalElapsed:(double)arg1 time:(double)arg2;

@end

