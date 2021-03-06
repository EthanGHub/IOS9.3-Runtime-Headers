//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKit/PKPassbookSettingsOptionsDelegate-Protocol.h>

@class CNContact, NSDictionary, NSString;

@interface PKPaymentOptionsDefaults : NSObject <PKPassbookSettingsOptionsDelegate>
{
    CNContact *_defaultShippingAddress;
    CNContact *_defaultContactEmail;
    CNContact *_defaultContactName;
    CNContact *_defaultContactPhone;
    NSDictionary *_defaultBillingAddresses;
}

+ (id)defaults;
@property(retain, nonatomic) NSDictionary *defaultBillingAddresses; // @synthesize defaultBillingAddresses=_defaultBillingAddresses;
- (void)deleteDefaultContactName;
@property(retain, nonatomic) CNContact *defaultContactName;
- (void)deleteDefaultContactPhone;
@property(retain, nonatomic) CNContact *defaultContactPhone;
- (void)deleteDefaultContactEmail;
@property(retain, nonatomic) CNContact *defaultContactEmail;
- (void)deleteDefaultBillingAddress:(id)arg1;
- (void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2;
- (id)defaultBillingAddressForPaymentPass:(id)arg1;
- (id)_rawDefaultBillingAddresses;
- (void)deleteDefaultShippingAddress;
@property(retain, nonatomic) CNContact *defaultShippingAddress;
- (id)_contactForKeychainKey:(id)arg1;
- (void)_setContact:(id)arg1 forKeychainKey:(id)arg2;
- (void)_setContact:(id)arg1 property:(id)arg2 forKeychainKey:(id)arg3;
- (void)_setKeychainData:(id)arg1 forKey:(id)arg2;
- (void)_keychainData:(id *)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

