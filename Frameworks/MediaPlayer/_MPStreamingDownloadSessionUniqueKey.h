//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface _MPStreamingDownloadSessionUniqueKey : NSObject
{
    NSString *_buyParameters;
    long long _storeAdamID;
}

@property(nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property(copy, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

