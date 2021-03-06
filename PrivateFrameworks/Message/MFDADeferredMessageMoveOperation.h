//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFOfflineCacheOperation.h>

#import <Message/MFDAOfflineCacheOperation-Protocol.h>

@class NSArray, NSString;

@interface MFDADeferredMessageMoveOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation>
{
    NSArray *_sourceRemoteIDs;
    NSArray *_originalFlags;
    NSArray *_temporaryRemoteIDs;
    NSString *_sourceMailboxID;
    NSString *_destinationMailboxID;
}

- (id)description;
- (_Bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessages:(id)arg1 temporaryIDs:(id)arg2 sourceMailbox:(id)arg3 destinationMailbox:(id)arg4;

@end

