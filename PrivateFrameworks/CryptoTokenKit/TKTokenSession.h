//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LAContext, NSData;

@interface TKTokenSession : NSObject
{
    NSData *_ACMContext;
    _Bool _allowUI;
    LAContext *_LAContext;
}

@property(readonly, nonatomic) _Bool allowUI; // @synthesize allowUI=_allowUI;
@property(readonly, nonatomic) LAContext *LAContext; // @synthesize LAContext=_LAContext;
- (void).cxx_destruct;
- (void)processAttributes:(id)arg1;
@property(readonly, nonatomic) NSData *ACMContext;

@end

