//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@protocol GEOMapItem;

@interface GEOSuggestedDestination : NSObject <NSSecureCoding>
{
    unsigned long long _classification;
    id <GEOMapItem> _mapItem;
    int _transportType;
    long long _loiType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long loiType; // @synthesize loiType=_loiType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) id <GEOMapItem> mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) unsigned long long classification; // @synthesize classification=_classification;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
