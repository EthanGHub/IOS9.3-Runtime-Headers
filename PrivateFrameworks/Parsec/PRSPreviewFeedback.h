//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Parsec/PRSFeedback.h>

@class NSString;

@interface PRSPreviewFeedback : PRSFeedback
{
    NSString *_local_result;
    NSString *_fbr;
    long long _dpos;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long dpos; // @synthesize dpos=_dpos;
@property(retain, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(retain, nonatomic) NSString *local_result; // @synthesize local_result=_local_result;
- (void).cxx_destruct;
- (void)validate;
- (id)plist;
- (id)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(long long)arg2;

@end

