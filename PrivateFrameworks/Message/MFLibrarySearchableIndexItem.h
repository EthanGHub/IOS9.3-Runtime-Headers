//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableItem, MFMailMessage, NSData, NSString;

@interface MFLibrarySearchableIndexItem : NSObject
{
    _Bool _hasCompleteBodyData;
    NSString *_identifier;
    MFMailMessage *_message;
    NSData *_bodyData;
}

+ (id)transactionAttributeKey;
+ (id)itemWithMessage:(id)arg1 bodyData:(id)arg2;
@property(nonatomic) _Bool hasCompleteBodyData; // @synthesize hasCompleteBodyData=_hasCompleteBodyData;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(readonly, retain, nonatomic) MFMailMessage *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)searchableItemWithClientState:(id)arg1;
@property(readonly, retain, nonatomic) CSSearchableItem *searchableItem;
- (_Bool)_isMessagePartOfExistingThreadWithHeaders:(id)arg1;
@property(readonly, copy, nonatomic) NSString *domainIdentifier;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithMessage:(id)arg1 bodyData:(id)arg2;
- (id)init;

@end
