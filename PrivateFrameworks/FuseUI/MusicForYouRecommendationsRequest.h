//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicStoreModelRequest.h>

@class MusicForYouRecommendationsResponse;

@interface MusicForYouRecommendationsRequest : MusicStoreModelRequest
{
    unsigned long long _recommendationsRequestType;
}

+ (id)allSupportedSectionProperties;
+ (id)allSupportedItemProperties;
@property unsigned long long recommendationsRequestType;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)configurationForLoadingModelDataWithStoreBag:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(retain, nonatomic) MusicForYouRecommendationsResponse *previousResponse; // @dynamic previousResponse;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @dynamic responseHandler;

@end
