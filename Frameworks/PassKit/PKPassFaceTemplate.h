//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, PKPassFieldTemplate;

@interface PKPassFaceTemplate : NSObject
{
    double _barcodeVerticalInset;
    PKPassFieldTemplate *_defaultFieldTemplate;
    NSMutableArray *_bucketTemplates;
    struct CGSize _barcodeMaxSize;
}

@property(retain, nonatomic) NSMutableArray *bucketTemplates; // @synthesize bucketTemplates=_bucketTemplates;
@property(retain, nonatomic) PKPassFieldTemplate *defaultFieldTemplate; // @synthesize defaultFieldTemplate=_defaultFieldTemplate;
@property(nonatomic) struct CGSize barcodeMaxSize; // @synthesize barcodeMaxSize=_barcodeMaxSize;
@property(nonatomic) double barcodeBottomInset; // @synthesize barcodeBottomInset=_barcodeVerticalInset;
- (id)templateForBucketAtIndex:(unsigned long long)arg1;
- (void)addBucketTemplate:(id)arg1;
- (void)dealloc;

@end

