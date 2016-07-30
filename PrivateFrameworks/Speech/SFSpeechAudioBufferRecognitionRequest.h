//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Speech/SFSpeechRecognitionRequest.h>

@class AVAudioFormat, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, SFSpeechRecognitionBufferDelegate;

@interface SFSpeechAudioBufferRecognitionRequest : SFSpeechRecognitionRequest
{
    id <SFSpeechRecognitionBufferDelegate> _bufferDelegate;
    NSMutableArray *_queuedBuffers;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _audioEnded;
}

- (void).cxx_destruct;
- (void)endAudio;
- (void)_endAudio;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)appendAudioPCMBuffer:(id)arg1;
- (void)_appendAudioPCMBuffer:(id)arg1;
- (id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4;
@property(readonly, nonatomic) AVAudioFormat *nativeAudioFormat;
- (id)init;

@end
