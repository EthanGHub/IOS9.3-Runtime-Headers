//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUI/NSObject-Protocol.h>

@class TPSlidingButton;

@protocol TPSlidingButtonDelegateProtocol <NSObject>
- (void)slidingButton:(TPSlidingButton *)arg1 didSlideToProportion:(double)arg2;
- (void)slidingButtonDidFinishSlide;
- (void)slidingButtonWillFinishSlide;
@end

