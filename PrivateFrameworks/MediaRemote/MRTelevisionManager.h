//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSPointerArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRTelevisionManager : NSObject
{
    NSPointerArray *_televisionsPointerArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedManager;
- (void)clearTelevisions;
- (void)registerTelevision:(id)arg1;
- (id)televisionWithName:(id)arg1;
@property(readonly, nonatomic) NSArray *allTelevisions;
- (void)dealloc;
- (id)init;

@end
