//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotificationCenter/NSObject-Protocol.h>

@class NCSnippetDataSource, NCSnippetDatum;

@protocol NCSnippetDataSourceObserver <NSObject>
- (void)snippetDataSource:(NCSnippetDataSource *)arg1 removeDatum:(NCSnippetDatum *)arg2;
- (void)snippetDataSource:(NCSnippetDataSource *)arg1 replaceWithDatum:(NCSnippetDatum *)arg2;
@end

