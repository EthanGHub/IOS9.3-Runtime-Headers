//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import <SearchUI/UITabBarControllerDelegate-Protocol.h>

@class NSString;

@interface SearchUITestTabBarController : UITabBarController <UITabBarControllerDelegate>
{
}

- (_Bool)shouldAutorotate;
- (void)didShowTableView;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (void)updateAppearanceForViewController:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (id)initWithResults:(id)arg1 styles:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

