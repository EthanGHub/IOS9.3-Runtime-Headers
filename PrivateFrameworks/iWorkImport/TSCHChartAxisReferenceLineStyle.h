//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, TSCHChartAxisID;

__attribute__((visibility("hidden")))
@interface TSCHChartAxisReferenceLineStyle : NSObject
{
    TSCHChartAxisID *mAxisIdentifier;
    NSArray *mReferenceLineStyles;
}

@property(copy, nonatomic) NSArray *referenceLineStyles; // @synthesize referenceLineStyles=mReferenceLineStyles;
@property(copy, nonatomic) TSCHChartAxisID *axisIdentifier; // @synthesize axisIdentifier=mAxisIdentifier;
- (void)dealloc;
- (void)didInitFromSOS;

@end

