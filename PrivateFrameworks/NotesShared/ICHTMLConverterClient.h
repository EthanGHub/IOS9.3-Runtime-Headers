//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ICHTMLConverterClient : NSObject
{
    NSXPCConnection *_connectionToService;
    NSObject<OS_dispatch_queue> *_requestCountQueue;
    unsigned long long _requestCount;
}

+ (id)sharedClient;
@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestCountQueue; // @synthesize requestCountQueue=_requestCountQueue;
- (void).cxx_destruct;
- (void)suspendConnectionIfNeeded;
- (void)resumeConnectionIfNeeded;
- (void)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 timeoutDate:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end
