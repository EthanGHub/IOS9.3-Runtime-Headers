//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicJSNativeViewControllerFactory-Protocol.h>
#import <FuseUI/MusicJSPreviewViewControllerDelegate-Protocol.h>
#import <FuseUI/SKUINavigationBarDisplayConfiguring-Protocol.h>
#import <FuseUI/SKUIViewControllerPreviewing-Protocol.h>

@class MusicClientContext, NSString, SKUIClientContext, SKUIDocumentContainerViewController;

@interface MusicPreviewViewController : UIViewController <MusicJSNativeViewControllerFactory, MusicJSPreviewViewControllerDelegate, SKUINavigationBarDisplayConfiguring, SKUIViewControllerPreviewing>
{
    NSString *_previewIdentifier;
    MusicClientContext *_clientContext;
    SKUIDocumentContainerViewController *_previewDocumentViewController;
}

- (void).cxx_destruct;
- (id)previewMenuItems;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)contentScrollView;
- (id)previewCommitViewController;
- (id)navigationBarTitleTextTintColor;
- (id)navigationBarTintColor;
- (long long)navigationBarTintAdjustmentMode;
- (_Bool)prefersNavigationBarBackgroundViewHidden;
@property(retain, nonatomic) SKUIClientContext *clientContext;
- (void)jsPreviewViewController:(id)arg1 setPreviewDocument:(id)arg2 options:(id)arg3;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (id)initWithPreviewIdentifier:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

