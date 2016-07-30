//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload
{
    NSData *_pemData;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, retain, nonatomic) NSData *pemData; // @synthesize pemData=_pemData;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isIdentity;
- (struct __SecIdentity *)copyIdentityFromKeychain;
- (struct __SecCertificate *)copyCertificate;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end
