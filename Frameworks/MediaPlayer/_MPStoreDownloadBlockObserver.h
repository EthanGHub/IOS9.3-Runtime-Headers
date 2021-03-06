//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPStoreDownloadManagerObserver-Protocol.h>

@class MPStoreDownload, NSString;

@interface _MPStoreDownloadBlockObserver : NSObject <MPStoreDownloadManagerObserver>
{
    CDUnknownBlockType _didFinishDownloadHandler;
    CDUnknownBlockType _didFinishPurchaseHandler;
    MPStoreDownload *_download;
}

@property(readonly, nonatomic) MPStoreDownload *download; // @synthesize download=_download;
@property(copy, nonatomic) CDUnknownBlockType didFinishPurchaseHandler; // @synthesize didFinishPurchaseHandler=_didFinishPurchaseHandler;
@property(copy, nonatomic) CDUnknownBlockType didFinishDownloadHandler; // @synthesize didFinishDownloadHandler=_didFinishDownloadHandler;
- (void).cxx_destruct;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (id)initWithDownload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

