//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString, PKPaymentMethod;

@interface PKPaymentToken : NSObject <NSSecureCoding>
{
    PKPaymentMethod *_paymentMethod;
    NSString *_paymentInstrumentName;
    NSString *_paymentNetwork;
    NSString *_transactionIdentifier;
    NSData *_paymentData;
}

+ (id)simulatedToken;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *paymentData; // @synthesize paymentData=_paymentData;
@property(copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(copy, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property(copy, nonatomic) NSString *paymentInstrumentName; // @synthesize paymentInstrumentName=_paymentInstrumentName;
@property(copy, nonatomic) PKPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

