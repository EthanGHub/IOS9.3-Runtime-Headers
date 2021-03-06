//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKComposition, CKConversation, CKTranscriptController;

@protocol CKTranscriptComposeDelegate <NSObject>
- (void)transcriptControllerDidReportSpam:(CKTranscriptController *)arg1;
- (void)transcriptController:(CKTranscriptController *)arg1 didSelectNewConversation:(CKConversation *)arg2;
- (_Bool)supportsAttachments;
- (void)showNewMessageCompositionForComposition:(CKComposition *)arg1;
- (void)transcriptController:(CKTranscriptController *)arg1 didSendMessageInConversation:(CKConversation *)arg2;
- (void)transcriptController:(CKTranscriptController *)arg1 willSendComposition:(CKComposition *)arg2 inConversation:(CKConversation *)arg3;
- (void)didCancelComposition:(CKTranscriptController *)arg1;

@optional
- (_Bool)canEditRecipients;
@end

