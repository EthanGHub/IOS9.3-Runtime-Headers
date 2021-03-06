//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HAPFragmentationStream, HMMessage, NSString;

@interface HMDFragmentationStreamTuple : NSObject
{
    HAPFragmentationStream *_fragmentationStream;
    NSString *_homeUUID;
    HMMessage *_lastMessage;
}

+ (id)tupleWithFragmentationStreamForHome:(id)arg1 delegate:(id)arg2;
@property(retain, nonatomic) HMMessage *lastMessage; // @synthesize lastMessage=_lastMessage;
@property(readonly, nonatomic) NSString *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly, nonatomic) HAPFragmentationStream *fragmentationStream; // @synthesize fragmentationStream=_fragmentationStream;
- (void).cxx_destruct;
- (void)close;
- (id)initWithFragmentationStreamForHome:(id)arg1 delegate:(id)arg2;

@end

