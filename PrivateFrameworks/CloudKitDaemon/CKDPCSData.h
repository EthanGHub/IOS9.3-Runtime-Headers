//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSSecureCoding-Protocol.h>

@class NSData, NSString;
@protocol NSSecureCoding;

__attribute__((visibility("hidden")))
@interface CKDPCSData : NSObject <NSSecureCoding>
{
    struct _OpaquePCSShareProtection *_pcs;
    NSString *_etag;
    NSData *_pcsData;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *pcsData; // @synthesize pcsData=_pcsData;
@property(copy, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
@property(readonly, nonatomic) id <NSSecureCoding> itemID;
@property(nonatomic) struct _OpaquePCSShareProtection *pcs; // @synthesize pcs=_pcs;
- (_Bool)decryptPCSDataWithManager:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithPCSData:(id)arg1;

@end

