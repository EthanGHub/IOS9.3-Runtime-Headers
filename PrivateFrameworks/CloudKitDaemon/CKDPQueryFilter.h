//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPLocationBound, CKDPRecordFieldIdentifier, CKDPRecordFieldValue;

__attribute__((visibility("hidden")))
@interface CKDPQueryFilter : PBCodable <NSCopying>
{
    CKDPLocationBound *_bounds;
    CKDPRecordFieldIdentifier *_fieldName;
    CKDPRecordFieldValue *_fieldValue;
    int _type;
    CDStruct_f953fb60 _has;
}

@property(retain, nonatomic) CKDPLocationBound *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) CKDPRecordFieldValue *fieldValue; // @synthesize fieldValue=_fieldValue;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *fieldName; // @synthesize fieldName=_fieldName;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasBounds;
@property(readonly, nonatomic) _Bool hasFieldValue;
@property(readonly, nonatomic) _Bool hasFieldName;

@end

