//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/JSExport-Protocol.h>
#import <FuseUI/MusicJSNativeViewController-Protocol.h>

@class IKDOMDocument, NSDictionary, NSString;

@protocol MusicJSSearchNativeViewController <JSExport, MusicJSNativeViewController>
- (void)setSearchTerm:(NSString *)arg1;
- (void)setStoreSearchResultsDocument:(IKDOMDocument *)arg1:(NSDictionary *)arg2;
- (void)selectMediaPickerItem:(NSDictionary *)arg1;
@end

