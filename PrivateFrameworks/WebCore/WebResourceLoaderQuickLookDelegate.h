//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/NSURLConnectionDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebResourceLoaderQuickLookDelegate : NSObject <NSURLConnectionDelegate>
{
    struct RefPtr<WebCore::ResourceLoader> _resourceLoader;
    _Bool _hasSentDidReceiveResponse;
    _Bool _hasFailed;
    struct QuickLookHandle *_quickLookHandle;
}

@property(nonatomic) struct QuickLookHandle *quickLookHandle; // @synthesize quickLookHandle=_quickLookHandle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearHandle;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 didReceiveDataArray:(id)arg2;
- (void)_sendDidReceiveResponseIfNecessary;
- (id)initWithResourceLoader:(PassRefPtr_f165d04b)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
