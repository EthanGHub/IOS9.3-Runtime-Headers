//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSCache, NSManagedObjectID, NSMutableArray, NSString, NSURL;

@interface ICAttachmentImageLoadingOperation : NSOperation
{
    NSURL *_mediaURL;
    NSCache *_cache;
    NSManagedObjectID *_mediaObjectID;
    NSString *_typeUTI;
    NSMutableArray *_completionHandlers;
}

@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSString *typeUTI; // @synthesize typeUTI=_typeUTI;
@property(retain, nonatomic) NSManagedObjectID *mediaObjectID; // @synthesize mediaObjectID=_mediaObjectID;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
- (void).cxx_destruct;
- (void)main;
- (void)removeCompletionHandler:(CDUnknownBlockType)arg1 cancelIfNoneLeft:(_Bool)arg2;
- (CDUnknownBlockType)addCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCache:(id)arg1 media:(id)arg2 typeUTI:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

