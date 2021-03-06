//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class CLLocation, NSData, NSString;

@interface EKStructuredLocation : EKObject <NSCopying>
{
}

+ (id)locationWithMapItem:(id)arg1;
+ (id)_stringByStrippingCongtrolCharactersFromString:(id)arg1;
+ (id)locationWithTitle:(id)arg1;
- (void)updateFromMapItem:(id)arg1;
- (id)geoURLString;
- (id)_asCalLocation;
- (void)updatePersistentObject;
@property(retain, nonatomic) NSString *routing;
- (id)description;
- (_Bool)isEqualToLocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *mapKitHandle;
@property(copy, nonatomic) NSString *addressBookEntityID;
@property(nonatomic) double radius;
@property(retain, nonatomic) CLLocation *geoLocation;
- (id)cacheKey;
@property(retain, nonatomic) NSString *address;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hasKnownSpatialData;
@property(readonly, nonatomic) _Bool isStructured;
- (id)_persistentLocation;
- (id)init;

@end

