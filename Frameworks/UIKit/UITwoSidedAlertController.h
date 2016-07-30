//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIAlertViewDelegate-Protocol.h>

@class NSString, UIAlertView;

@interface UITwoSidedAlertController : NSObject <UIAlertViewDelegate>
{
    UIAlertView *_front;
    UIAlertView *_back;
    UIAlertView *_currentAlert;
    id _delegate;
}

- (void).cxx_destruct;
- (void)alertViewCancel:(id)arg1;
- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;
- (void)backAlertClickedButtonAtIndex:(long long)arg1;
- (void)frontAlertClickedButtonAtIndex:(long long)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)flip;
- (void)dismiss;
- (void)didPresentAlertView:(id)arg1;
- (void)show;
- (id)createBackAlert;
- (id)createFrontAlert;
- (id)backAlert;
- (id)frontAlert;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
