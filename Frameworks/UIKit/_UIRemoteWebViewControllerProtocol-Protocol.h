//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSData, NSError, NSNumber, NSString;

@protocol _UIRemoteWebViewControllerProtocol <NSObject>
- (void)_dispatchDidDismissViewController;
- (void)_dispatchWillPresentViewControllerWithCompletionHandler:(void (^)(id, NSError *))arg1;
- (void)_decidePolicyForEncodedRequest:(NSData *)arg1 inMainFrame:(_Bool)arg2 navigationType:(NSNumber *)arg3 replyHandler:(void (^)(id, NSError *))arg4;
- (void)_setURLString:(NSString *)arg1;
- (void)_setTitle:(NSString *)arg1;
- (void)_setLoading:(_Bool)arg1 error:(NSError *)arg2;
- (void)_setEstimatedProgress:(float)arg1;
- (void)_setCanGoBack:(_Bool)arg1 canGoForward:(_Bool)arg2;
@end
