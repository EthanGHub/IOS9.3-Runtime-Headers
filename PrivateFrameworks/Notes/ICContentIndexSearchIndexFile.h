//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/ICSearchIndexFile-Protocol.h>
#import <Notes/ICSearchQueryable-Protocol.h>

@class NSString, NSURL;

@interface ICContentIndexSearchIndexFile : NSObject <ICSearchIndexFile, ICSearchQueryable>
{
    unsigned int _tid;
    struct __CXIndex *_index;
    NSURL *_url;
}

@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) unsigned int tid; // @synthesize tid=_tid;
@property(nonatomic) struct __CXIndex *index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)cancelQuery:(id)arg1;
- (id)findNextMatchingIdentifiersForQuery:(id)arg1 isDone:(_Bool *)arg2;
- (id)newQueryWithSearchTerms:(id)arg1;
- (void)removeDocumentsForIdentifiers:(id)arg1;
- (void)removeDocumentForIdentifier:(id)arg1;
- (void)addDocumentWithIdentifier:(id)arg1 content:(id)arg2 transactionId:(id *)arg3;
- (void)close;
- (_Bool)openWithURL:(id)arg1 transactionId:(id *)arg2;
- (_Bool)createWithURL:(id)arg1;
- (unsigned int)creationOptions;
- (unsigned int)sharedOptions;
- (_Bool)opened;
@property(readonly, copy, nonatomic) NSString *name;
- (void)dealloc;

@end

