//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSLock, RURadioGetTracksOperation, RadioRequestContext, RadioStation, RadioStationMatchContext, SSVPlaybackLease;

@interface RUPrepareRadioPlaybackOperation : NSOperation
{
    CDUnknownBlockType _firstTrackBlock;
    RURadioGetTracksOperation *_getTracksOperation;
    NSLock *_lock;
    RadioStationMatchContext *_nowPlayingMatchContext;
    SSVPlaybackLease *_playbackLease;
    CDUnknownBlockType _preparedBlock;
    RadioRequestContext *_requestContext;
    RadioStation *_station;
    RadioStationMatchContext *_stationMatchContext;
    _Bool _willContinuePlayback;
}

- (void).cxx_destruct;
- (void)main;
- (void)cancel;
@property _Bool willContinuePlayback;
@property(retain) RadioStationMatchContext *stationMatchContext;
@property(retain) RadioStation *station;
@property(copy) RadioRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(copy) CDUnknownBlockType preparedBlock;
@property(retain) SSVPlaybackLease *playbackLease;
@property(retain) RadioStationMatchContext *nowPlayingMatchContext;
- (id)init;

@end

