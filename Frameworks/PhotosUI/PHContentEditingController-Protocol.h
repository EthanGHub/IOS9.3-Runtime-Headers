//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PHAdjustmentData, PHContentEditingInput, UIImage;

@protocol PHContentEditingController <NSObject>
@property(readonly, nonatomic) _Bool shouldShowCancelConfirmation;
- (void)cancelContentEditing;
- (void)finishContentEditingWithCompletionHandler:(void (^)(PHContentEditingOutput *))arg1;
- (void)startContentEditingWithInput:(PHContentEditingInput *)arg1 placeholderImage:(UIImage *)arg2;
- (_Bool)canHandleAdjustmentData:(PHAdjustmentData *)arg1;
@end
