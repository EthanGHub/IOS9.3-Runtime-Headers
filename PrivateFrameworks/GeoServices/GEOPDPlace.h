//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOPDPlace : PBCodable <NSCopying>
{
    unsigned long long _muid;
    unsigned long long _preferredMuid;
    NSMutableArray *_components;
    int _referenceFrame;
    int _resultProviderId;
    int _status;
    struct {
        unsigned int muid:1;
        unsigned int preferredMuid:1;
        unsigned int referenceFrame:1;
        unsigned int resultProviderId:1;
        unsigned int status:1;
    } _has;
}

+ (id)attributionForPlaceData:(id)arg1 type:(int)arg2;
+ (id)failedPlaceDataForMuid:(unsigned long long)arg1;
+ (id)failedPlaceData;
@property(nonatomic) int resultProviderId; // @synthesize resultProviderId=_resultProviderId;
@property(retain, nonatomic) NSMutableArray *components; // @synthesize components=_components;
@property(nonatomic) unsigned long long preferredMuid; // @synthesize preferredMuid=_preferredMuid;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasResultProviderId;
- (id)componentAtIndex:(unsigned long long)arg1;
- (unsigned long long)componentsCount;
- (void)addComponent:(id)arg1;
- (void)clearComponents;
@property(nonatomic) _Bool hasPreferredMuid;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) _Bool hasMuid;
- (void)dealloc;
- (id)compactDebugDescription;
- (_Bool)isCacheable;
- (void)setFirstSeenTimestamp:(double)arg1;
- (id)copyWithStrippedOptionalData;
- (void)_removeETAComponents;
- (id)copyWithoutETAComponents;
- (id)businessURL;
- (_Bool)isDisputed;
- (id)spokenNameForLocale:(id)arg1;
- (id)bestName;
- (id)_entityName;
- (id)_cleanedPhoneNumberForPhoneNumberRepresentation:(id)arg1;
- (_Bool)hasExpiredComponentsAsOf:(double)arg1;
- (id)phoneNumbers;
@property(nonatomic) _Bool hasReferenceFrame;
@property(nonatomic) int referenceFrame;
- (id)geoMapItem;

@end
