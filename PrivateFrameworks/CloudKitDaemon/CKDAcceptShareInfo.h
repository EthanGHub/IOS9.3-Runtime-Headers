//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKShareID, NSData, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDAcceptShareInfo : NSObject
{
    NSURL *_shareURL;
    CKShareID *_shareID;
    NSString *_etag;
    NSData *_publicPCSData;
    NSString *_publicPCSEtag;
    NSData *_publicKey;
}

@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) NSString *publicPCSEtag; // @synthesize publicPCSEtag=_publicPCSEtag;
@property(retain, nonatomic) NSData *publicPCSData; // @synthesize publicPCSData=_publicPCSData;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
- (void).cxx_destruct;

@end
