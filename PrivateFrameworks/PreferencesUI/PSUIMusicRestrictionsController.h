//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class UIAlertView;

@interface PSUIMusicRestrictionsController : PSListController
{
    UIAlertView *_iAPAlertView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)setExplicitEnabled:(id)arg1 specifier:(id)arg2;
- (id)explicitEnabled:(id)arg1;
- (id)specifiers;

@end
