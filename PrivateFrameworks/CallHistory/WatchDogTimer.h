//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@class NSObject, NSString;
@protocol OS_dispatch_source;

@interface WatchDogTimer : CHLogger
{
    NSString *_name;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 withName:(id)arg2 withTimeout:(double)arg3 withCallback:(CDUnknownBlockType)arg4;

@end
