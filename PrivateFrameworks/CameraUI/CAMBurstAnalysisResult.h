//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CAMBurstAnalysisResult : NSObject
{
    NSString *_identifier;
    NSArray *_allAssetIdentifiers;
    NSArray *_goodAssetIdentifiers;
    NSString *_bestAssetIdentifier;
}

@property(readonly, copy, nonatomic) NSString *bestAssetIdentifier; // @synthesize bestAssetIdentifier=_bestAssetIdentifier;
@property(readonly, copy, nonatomic) NSArray *goodAssetIdentifiers; // @synthesize goodAssetIdentifiers=_goodAssetIdentifiers;
@property(readonly, copy, nonatomic) NSArray *allAssetIdentifiers; // @synthesize allAssetIdentifiers=_allAssetIdentifiers;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)arg1 allAssetIdentifiers:(id)arg2 goodAssetIdentifiers:(id)arg3 bestAssetIdentifier:(id)arg4;
- (id)init;

@end
