//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSSStyle;

__attribute__((visibility("hidden")))
@interface TSCHStyleAndPropertyPair : NSObject <NSCopying>
{
    TSSStyle *mStyle;
    int mProperty;
}

+ (id)pairWithStyle:(id)arg1 property:(int)arg2;
- (id)description;
- (int)property;
- (id)style;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStyle:(id)arg1 property:(int)arg2;

@end

