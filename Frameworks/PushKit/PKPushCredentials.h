//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface PKPushCredentials : NSObject
{
    NSString *_type;
    NSData *_token;
}

@property(copy) NSData *token; // @synthesize token=_token;
@property(copy) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

