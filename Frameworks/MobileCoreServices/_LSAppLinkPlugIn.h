//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSURLComponents;
@protocol OS_xpc_object;

@interface _LSAppLinkPlugIn : NSObject
{
    NSURLComponents *_URLComponents;
    NSObject<OS_xpc_object> *_XPCConnection;
    NSError *_previousPlugInError;
}

+ (_Bool)canHandleURLComponents:(id)arg1;
+ (Class)plugInClasses;
@property(retain) NSError *previousPlugInError; // @synthesize previousPlugInError=_previousPlugInError;
@property(retain) NSObject<OS_xpc_object> *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
@property(retain) NSURLComponents *URLComponents; // @synthesize URLComponents=_URLComponents;
- (void)getAppLinkWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

