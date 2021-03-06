//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PRSFairPlaySAPSession : NSObject
{
    _Bool _complete;
    NSString *_SAPVersion;
}

@property(retain) NSString *SAPVersion; // @synthesize SAPVersion=_SAPVersion;
@property(readonly, nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
- (void).cxx_destruct;
- (id)signatureStringForData:(id)arg1 error:(id *)arg2;
- (id)signatureForData:(id)arg1 error:(id *)arg2;
- (id)processSignedData:(id)arg1 withSignature:(id)arg2 error:(id *)arg3;
- (id)exchangeData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

