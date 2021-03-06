//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSString, NSURLRequest, WKSecurityOrigin;

@interface WKFrameInfo : NSObject <WKObject, NSCopying>
{
    struct ObjectStorage<API::FrameInfo> _frameInfo;
}

@property(readonly) struct Object *_apiObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) WKSecurityOrigin *securityOrigin;
@property(readonly, copy, nonatomic) NSURLRequest *request;
@property(readonly, nonatomic, getter=isMainFrame) _Bool mainFrame;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

