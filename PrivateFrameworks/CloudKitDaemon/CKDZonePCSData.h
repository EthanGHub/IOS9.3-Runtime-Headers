//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDPCSData.h>

@class CKRecordZoneID;

__attribute__((visibility("hidden")))
@interface CKDZonePCSData : CKDPCSData
{
    CKRecordZoneID *_zoneID;
}

+ (_Bool)supportsSecureCoding;
+ (id)dataWithZoneID:(id)arg1 pcsData:(id)arg2;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)itemID;
- (_Bool)decryptPCSDataWithManager:(id)arg1 error:(id *)arg2;
- (id)initWithZoneID:(id)arg1 pcsData:(id)arg2;

@end
