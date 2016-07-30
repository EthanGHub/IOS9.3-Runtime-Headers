//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNNode;

__attribute__((visibility("hidden")))
@interface SCNManipulableItem : NSObject
{
    double _screenSize;
    SCNNode *node;
    id component;
    unsigned long long elementIndex;
}

+ (void)removeItemsFromScene:(id)arg1;
+ (void)addItems:(id)arg1 toScene:(id)arg2;
@property(nonatomic) unsigned long long elementIndex; // @synthesize elementIndex;
@property(retain, nonatomic) id component; // @synthesize component;
@property(retain, nonatomic) SCNNode *node; // @synthesize node;
- (void)validateClone;
- (id)cloneForManipulators;
@property(readonly, nonatomic) struct SCNVector3 elementPosition;
- (id)parentItem;
- (void)setPosition:(struct SCNVector3)arg1;
- (struct SCNVector3)scale;
- (struct SCNMatrix4)worldTransform;
@property(nonatomic) struct SCNMatrix4 transform;
- (_Bool)isNodeManipulator;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (double)screenSize;
- (void)setScreenSize:(double)arg1;

@end
