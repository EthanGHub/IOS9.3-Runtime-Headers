//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RadioStationMatchMetadata;

@interface RadioStationMatchContext : NSObject
{
    _Bool _shouldMatchArtist;
    RadioStationMatchMetadata *_matchMetadata;
}

@property(nonatomic) _Bool shouldMatchArtist; // @synthesize shouldMatchArtist=_shouldMatchArtist;
@property(retain, nonatomic) RadioStationMatchMetadata *matchMetadata; // @synthesize matchMetadata=_matchMetadata;
- (void).cxx_destruct;
- (id)copyMatchDictionary;

@end
