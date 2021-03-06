//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebUI/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL, WBUFormAutoFillFrameHandle;

@protocol WBUFormAutoFiller <NSObject>
- (void)resumeLoadingAfterSavingFormData;
- (void)clearAutoFillMetadata;
- (void)collectMetadataForTextField:(NSString *)arg1 inFrame:(WBUFormAutoFillFrameHandle *)arg2 atURL:(NSURL *)arg3 replyIdentifier:(NSNumber *)arg4;
- (void)collectFormMetadataForPrefillingAtURL:(NSURL *)arg1;
- (void)collectURLsForPrefillingAtURL:(NSURL *)arg1;
- (void)setFormControls:(NSArray *)arg1 areAutoFilled:(_Bool)arg2 andClearField:(NSString *)arg3 inFrame:(WBUFormAutoFillFrameHandle *)arg4;
- (void)fillTextField:(NSString *)arg1 inFrame:(WBUFormAutoFillFrameHandle *)arg2 withGeneratedPassword:(NSString *)arg3;
- (void)annotateForm:(NSNumber *)arg1 inFrame:(WBUFormAutoFillFrameHandle *)arg2 withValues:(NSDictionary *)arg3;
- (void)autoFillForm:(NSNumber *)arg1 inFrame:(WBUFormAutoFillFrameHandle *)arg2 withGeneratedPassword:(NSString *)arg3;
- (void)autoFillFormSynchronouslyInFrame:(WBUFormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2;
- (void)autoFillFormAsynchronouslyInFrame:(WBUFormAutoFillFrameHandle *)arg1 withValues:(NSDictionary *)arg2 setAutoFilled:(_Bool)arg3 selectFieldAfterFilling:(NSString *)arg4;
@end

