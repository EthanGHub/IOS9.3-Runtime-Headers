//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse;

@interface GEORPPlaceInfo : PBCodable <NSCopying>
{
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
}

@property(retain, nonatomic) GEOPDPlaceResponse *placeResponse; // @synthesize placeResponse=_placeResponse;
@property(retain, nonatomic) GEOPDPlaceRequest *placeRequest; // @synthesize placeRequest=_placeRequest;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPlaceResponse;
@property(readonly, nonatomic) _Bool hasPlaceRequest;
- (void)dealloc;
- (void)clearSessionIdFromPlaceRequest;

@end
