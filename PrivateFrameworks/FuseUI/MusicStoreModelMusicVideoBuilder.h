//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicStoreModelObjectBuilder.h>

@interface MusicStoreModelMusicVideoBuilder : MusicStoreModelObjectBuilder
{
    struct {
        unsigned int initialized:1;
        unsigned int title:1;
        unsigned int duration:1;
        unsigned int explicit:1;
        unsigned int artistUploadedContent:1;
        unsigned int artwork:1;
        CDStruct_63a3d127 artist;
        CDStruct_63a3d127 genre;
    } _requestedMusicVideoProperties;
}

+ (id)allSupportedProperties;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;

@end
