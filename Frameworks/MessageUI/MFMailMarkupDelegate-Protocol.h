//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFAttachment, NSData, NSError, NSString, NSURL, UIImage, UIViewController;

@protocol MFMailMarkupDelegate <NSObject>
- (UIImage *)attachmentIcon:(MFAttachment *)arg1;
- (struct CGRect)markupAttachmentMaskForAttachment:(MFAttachment *)arg1;
- (MFAttachment *)markupReplacementAttachment;
- (struct CGRect)markupAttachmentBoundsForAttachment:(MFAttachment *)arg1;
- (void)handleMarkupData:(NSData *)arg1 fileName:(NSString *)arg2 mimeType:(NSString *)arg3 attachment:(MFAttachment *)arg4;
- (void)handleMarkupURL:(NSURL *)arg1 attachment:(MFAttachment *)arg2 completion:(void (^)(MFAttachment *))arg3;
- (void)handleMarkupError:(NSError *)arg1 attachment:(MFAttachment *)arg2;
- (void)dismissMarkupViewController;
- (void)presentMarkupViewController:(UIViewController *)arg1;
@end
