//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthKit/NSObject-Protocol.h>

@class AKAppleIDAuthenticationContext, NSDictionary, NSHTTPURLResponse, NSNumber, NSString;

@protocol AKAppleIDAuthenticationDaemonProtocol <NSObject>
- (void)reportSignOutForAllAppleIDsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)reportSignOutForAppleID:(NSString *)arg1 service:(long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)checkInWithAuthenticationServerForAppleID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setConfigurationInfo:(NSDictionary *)arg1 forIdentifier:(NSString *)arg2 forAltDSID:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)setAppleIDWithDSID:(NSNumber *)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)setAppleIDWithAltDSID:(NSString *)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)getServerUILoadDelegateForAltDSID:(NSString *)arg1 completion:(void (^)(AKAppleIDServerResourceLoadDelegate *, NSError *))arg2;
- (void)updateStateWithExternalAuthenticationResponse:(NSHTTPURLResponse *)arg1 forAppleID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(NSString *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)generateLoginCodeWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)checkSecurityUpgradeEligibilityForAppleID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)authenticateWithContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
@end

