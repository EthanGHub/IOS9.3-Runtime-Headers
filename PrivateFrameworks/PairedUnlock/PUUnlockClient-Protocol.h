//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PairedUnlock/NSObject-Protocol.h>

@class NSError;

@protocol PUUnlockClient <NSObject>
- (void)didGetRemoteDeviceHasPasscode:(_Bool)arg1 isLocked:(_Bool)arg2 isUnlockOnly:(_Bool)arg3 error:(NSError *)arg4;
- (void)remoteDeviceDidRemoveLockout:(_Bool)arg1 error:(NSError *)arg2;
- (void)remoteDeviceDidUnlock;
- (void)remoteDeviceDidCompletePasscodeAction:(_Bool)arg1 error:(NSError *)arg2;
- (void)didDisableOnlyRemoteUnlock:(_Bool)arg1 error:(NSError *)arg2;
- (void)didEnableOnlyRemoteUnlock:(_Bool)arg1 error:(NSError *)arg2;
- (void)didUnpairForUnlock:(_Bool)arg1 error:(NSError *)arg2;
- (void)didPairForUnlock:(_Bool)arg1 error:(NSError *)arg2;
@end

