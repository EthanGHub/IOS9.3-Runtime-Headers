//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUDownloadTaskProgress : NSObject
{
    _Bool _isActive;
    long long _totalBytesDownloaded;
    long long _totalBytesExpectedToBeDownloaded;
}

@property(nonatomic) long long totalBytesExpectedToBeDownloaded; // @synthesize totalBytesExpectedToBeDownloaded=_totalBytesExpectedToBeDownloaded;
@property(nonatomic) long long totalBytesDownloaded; // @synthesize totalBytesDownloaded=_totalBytesDownloaded;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (id)description;

@end
