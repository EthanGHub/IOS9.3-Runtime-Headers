//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IKStyleMediaQuery : NSObject
{
    _Bool _isNegated;
    NSString *_mediaType;
    NSDictionary *_featureValues;
}

+ (id)mediaQueryListWithCSSMediaQuery:(id)arg1;
@property(readonly, nonatomic) _Bool isNegated; // @synthesize isNegated=_isNegated;
@property(readonly, retain, nonatomic) NSDictionary *featureValues; // @synthesize featureValues=_featureValues;
@property(readonly, retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (id)initWithMediaType:(id)arg1 featureValues:(id)arg2 isNegated:(_Bool)arg3;

@end

