//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPContainerEdit-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MSPContainerEdit : NSObject <MSPContainerEdit>
{
}

- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;
- (void)ifAddition:(CDUnknownBlockType)arg1 ifRemoval:(CDUnknownBlockType)arg2 ifReplacement:(CDUnknownBlockType)arg3 ifContentUpdate:(CDUnknownBlockType)arg4 ifReplacedEntirely:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
