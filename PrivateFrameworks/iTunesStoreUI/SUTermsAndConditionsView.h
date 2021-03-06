//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SUClientInterface, SULinkControl, SUSubtitledButton, UIAlertView;

@interface SUTermsAndConditionsView : UIView
{
    UIAlertView *_accountButtonAlert;
    SUSubtitledButton *_button;
    SUClientInterface *_clientInterface;
    _Bool _hideAccountButton;
    double _rightMargin;
    long long _style;
    SULinkControl *_termsAndConditionsControl;
    SUClientInterface *clientInterface;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) _Bool hideAccountButton; // @synthesize hideAccountButton=_hideAccountButton;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface;
- (void)_updateButton;
- (id)_termsAndConditionsControl;
- (long long)_linkStyleForStyle:(long long)arg1;
- (void)_destroyButton;
- (void)_clearButtonSelection:(id)arg1;
- (double)_buttonHeightForStyle:(long long)arg1;
- (id)_button;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)_accountsChangedNotification:(id)arg1;
- (void)_termsAndConditionsAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

