//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray;

@interface SKUIGalleryPageComponent : SKUIPageComponent
{
    NSArray *_childComponents;
    double _cycleInterval;
    _Bool _hidesPageIndicator;
}

@property(nonatomic) _Bool hidesPageIndicator; // @synthesize hidesPageIndicator=_hidesPageIndicator;
@property(nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
@property(readonly, nonatomic) NSArray *childComponents; // @synthesize childComponents=_childComponents;
- (void).cxx_destruct;
- (id)metricsElementName;
- (long long)componentType;
- (id)initWithCustomPageContext:(id)arg1;

@end

