//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface HAPBTLEConnectionRequestTuple : NSObject
{
    NSObject<OS_dispatch_source> *_connectionRequestTimer;
    NSString *_identifier;
    unsigned long long _advertisementFormat;
}

+ (id)connectionRequestTupleWithTimer:(id)arg1 identifier:(id)arg2 advertisementFormat:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long advertisementFormat; // @synthesize advertisementFormat=_advertisementFormat;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *connectionRequestTimer; // @synthesize connectionRequestTimer=_connectionRequestTimer;
- (void).cxx_destruct;

@end

