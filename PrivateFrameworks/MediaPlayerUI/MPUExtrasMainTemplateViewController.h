//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>

#import <MediaPlayerUI/MPUExtrasMainMenuSectionMetricsDataSource-Protocol.h>
#import <MediaPlayerUI/UICollectionViewDataSource-Protocol.h>
#import <MediaPlayerUI/UICollectionViewDelegate-Protocol.h>
#import <MediaPlayerUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class MPUExtrasMainMenuSectionMetrics, NSIndexPath, NSLayoutConstraint, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;
@protocol UICollectionViewDelegate;

@interface MPUExtrasMainTemplateViewController : MPUExtrasTemplateViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, MPUExtrasMainMenuSectionMetricsDataSource>
{
    MPUExtrasMainMenuSectionMetrics *_mainMenuMetrics;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    UICollectionView *_menuBarCollectionView;
    _Bool _hasHadMenuSelection;
    UIView *_menuBarView;
    id <UICollectionViewDelegate> _didSelectDelegate;
}

@property(nonatomic) __weak id <UICollectionViewDelegate> didSelectDelegate; // @synthesize didSelectDelegate=_didSelectDelegate;
@property(readonly, nonatomic) UIView *menuBarView; // @synthesize menuBarView=_menuBarView;
- (void).cxx_destruct;
- (void)_startBackgroundAudio;
- (void)_recalculateSizes;
@property(readonly, nonatomic) NSIndexPath *indexPathOfFeaturedItem;
- (struct CGSize)sectionMetrics:(id)arg1 sizeForItemAtIndex:(long long)arg2 withFontDescriptor:(id)arg3;
- (long long)numberOfItemsForSectionMetrics:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)_isFeatureItemAtIndexPath:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)_collectionView:(id)arg1 indexPathShouldDisplayAsSelected:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)_textElementAtIndex:(long long)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)_menuItems;
- (void)setCollectionViewHeight:(double)arg1;
@property(readonly, nonatomic) double collectionViewHeight;
- (void)_prepareLayout;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_prepareCollectionView;
- (void)_dynamicTypeChanged;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (id)templateElement;
- (_Bool)showsPlaceholder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

