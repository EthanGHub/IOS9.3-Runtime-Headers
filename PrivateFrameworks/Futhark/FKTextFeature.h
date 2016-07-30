//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FKTextFeature : NSObject
{
    void *_backingObject;
    CDStruct_a2151f1f *_session;
    int _scale;
    long long _featureID;
    NSArray *_corners;
    long long _type;
    NSArray *_subFeatures;
    struct CGRect _boundingBox;
}

+ (id)featureFromSequenceIndex:(int)arg1 session:(CDStruct_a2151f1f *)arg2 roiOffset:(struct CGPoint)arg3 dimensions:(struct CGSize)arg4 createConcompFeatures:(_Bool)arg5 createDiacriticFeatures:(_Bool)arg6 featureID:(long long *)arg7 scale:(int)arg8;
+ (id)featureFromConcomp:(struct concomp *)arg1 session:(CDStruct_a2151f1f *)arg2 roiOffset:(struct CGPoint)arg3 dimensions:(struct CGSize)arg4 type:(long long)arg5 createDiacriticFeatures:(_Bool)arg6 featureID:(long long *)arg7 scale:(int)arg8;
@property(retain, nonatomic) NSArray *subFeatures; // @synthesize subFeatures=_subFeatures;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, retain, nonatomic) NSArray *corners; // @synthesize corners=_corners;
@property(readonly, nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(readonly, nonatomic) long long featureID; // @synthesize featureID=_featureID;
- (void)dealloc;
- (id)initWithType:(long long)arg1 boundingBox:(struct CGRect *)arg2 corners:(id)arg3 featureID:(long long)arg4 session:(CDStruct_a2151f1f *)arg5 backingObject:(void *)arg6 scale:(int)arg7;

@end
