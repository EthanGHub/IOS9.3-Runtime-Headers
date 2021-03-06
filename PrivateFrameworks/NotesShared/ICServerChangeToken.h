//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CKServerChangeToken, ICAccount, NSString;

@interface ICServerChangeToken : NSManagedObject
{
}

+ (id)serverChangeTokensMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)serverChangeTokenForAccount:(id)arg1 zoneName:(id)arg2 context:(id)arg3;
+ (id)addServerChangeTokenForAccount:(id)arg1 ckServerChangeToken:(id)arg2 zoneName:(id)arg3 context:(id)arg4;
- (id)loggingDescription;

// Remaining properties
@property(retain, nonatomic) ICAccount *account; // @dynamic account;
@property(retain, nonatomic) CKServerChangeToken *ckServerChangeToken; // @dynamic ckServerChangeToken;
@property(retain, nonatomic) NSString *zoneName; // @dynamic zoneName;

@end

