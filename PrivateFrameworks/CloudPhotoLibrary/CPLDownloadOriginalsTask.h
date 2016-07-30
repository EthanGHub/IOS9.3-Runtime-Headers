//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncEmergencyTask.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSProgress, NSString, NSURL;
@protocol CPLEngineTransportResourceDownloadTask, OS_dispatch_queue;

@interface CPLDownloadOriginalsTask : CPLEngineSyncEmergencyTask
{
    NSMutableArray *_cloudResources;
    NSMutableArray *_failedIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
    id <CPLEngineTransportResourceDownloadTask> _downloadTask;
    NSMutableDictionary *_cloudIdentifierForLocalIdentifier;
    NSProgress *_progress;
    NSString *_typeIdentifier;
    NSString *_progressIdentifier;
    NSURL *_destinationURL;
    NSArray *_localIdentifiers;
}

+ (_Bool)shouldCoalesceTasks;
+ (id)taskIdentifier;
@property(readonly, nonatomic) NSArray *failedIdentifiers; // @synthesize failedIdentifiers=_failedIdentifiers;
@property(copy, nonatomic) NSArray *localIdentifiers; // @synthesize localIdentifiers=_localIdentifiers;
@property(copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(copy, nonatomic) NSString *progressIdentifier; // @synthesize progressIdentifier=_progressIdentifier;
@property(copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (void).cxx_destruct;
- (void)cancel;
- (void)launch;
- (void)_filterCloudCache;
- (void)_downloadNextResource;
- (void)taskDidFinishWithError:(id)arg1;
- (unsigned long long)priority;
- (_Bool)shouldStopSyncSession;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
