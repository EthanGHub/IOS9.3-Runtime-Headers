//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFOutgoingMessageContent.h>

@class MFLibraryMessage;

@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent
{
    MFLibraryMessage *_libraryMessage;
}

@property(retain, nonatomic) MFLibraryMessage *libraryMessage; // @synthesize libraryMessage=_libraryMessage;
- (id)libraryContent;
- (id)headers;
- (id)copy;
- (void)dealloc;

@end
