//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface TUMetadataCache : NSObject
{
    NSObject<OS_dispatch_queue> *_cache_queue;
    NSArray *_providers;
}

@property(retain, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cache_queue; // @synthesize cache_queue=_cache_queue;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEmpty;
- (void)removeDestinationIDFromCache:(id)arg1;
- (void)updateCacheWithDestinationIDs:(id)arg1;
- (id)metadataForDestinationID:(id)arg1;
- (id)init;
- (id)initWithDataProviders:(id)arg1;

@end
