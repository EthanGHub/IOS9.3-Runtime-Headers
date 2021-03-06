//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/NMSDeviceSourced-Protocol.h>
#import <CompanionSync/NMSObfuscatableDescriptionProviding-Protocol.h>

@class NMSMessageCenter, NMSOutgoingResponse, NSData, NSString;

@interface NMSIncomingRequest : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding>
{
    _Bool _expectsResponse;
    unsigned short _messageID;
    NSString *sourceDeviceID;
    NMSMessageCenter *_messageCenter;
    NSString *_idsIdentifier;
    NSData *_data;
    unsigned long long _priority;
    NMSOutgoingResponse *_response;
    id _pbRequest;
}

+ (void)setAllowsUnrepliedRequestsForUnitTesting:(_Bool)arg1;
+ (_Bool)allowsUnrepliedRequestsForUnitTesting;
@property(retain, nonatomic) id pbRequest; // @synthesize pbRequest=_pbRequest;
@property(retain, nonatomic) NMSOutgoingResponse *response; // @synthesize response=_response;
@property(nonatomic) _Bool expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property(nonatomic) __weak NMSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(retain, nonatomic) NSString *sourceDeviceID; // @synthesize sourceDeviceID;
- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;
@property(readonly, copy) NSString *description;
- (void)configureResponse;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

