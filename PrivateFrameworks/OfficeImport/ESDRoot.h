//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/ESDObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDRoot : ESDObject
{
    NSMutableArray *mChildren;
}

- (void)writeToWriter:(struct OcWriter *)arg1;
- (void)addChild:(id)arg1;
- (id)childAt:(unsigned long long)arg1;
- (unsigned long long)childCount;
- (struct EshRoot *)eshRoot;
- (void)dealloc;
- (id)initFromReader:(struct OcReader *)arg1;
- (id)init;
- (id)initWithEshObject:(struct EshObject *)arg1;
- (id)pbReferenceWithID:(unsigned int)arg1;
- (id)initWithPbState:(id)arg1;

@end

