//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUDataSourceViewController.h>

#import <MPUFoundation/MPStoreDownloadManagerObserver-Protocol.h>
#import <MPUFoundation/MPUActionTableViewDataSource-Protocol.h>
#import <MPUFoundation/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSString, UITableView;

@interface MPUTableViewController : MPUDataSourceViewController <MPStoreDownloadManagerObserver, MPUActionTableViewDataSource, UITableViewDelegate>
{
    _Bool _shouldUpdateVisibleCellsWhenVisible;
    _Bool _hasAppearedOnce;
    UITableView *_tableView;
    long long _numberOfTopActionRows;
    NSMutableArray *_visibleTopActionRows;
    long long _numberOfBottomActionRows;
    NSMutableArray *_visibleBottomActionRows;
    _Bool _shouldDeselectImmediately;
    Class _cellConfigurationClass;
}

+ (Class)_tableViewClass;
+ (id)actionCellConfigurationClasses;
+ (id)allActionCellConfigurationClasses;
+ (id)actionCellConfigurationClassesForLocation:(unsigned long long)arg1;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (Class)invalidationContextClass;
+ (_Bool)usesCellConfigurations;
+ (_Bool)wantsAutolayoutSizedTableViewRows;
@property(nonatomic) _Bool shouldDeselectImmediately; // @synthesize shouldDeselectImmediately=_shouldDeselectImmediately;
@property(readonly, nonatomic) Class cellConfigurationClass; // @synthesize cellConfigurationClass=_cellConfigurationClass;
- (void).cxx_destruct;
- (void)_reloadActionRowsAnimated:(_Bool)arg1 skipTableViewUpdates:(_Bool)arg2;
- (void)_loadCellConfiguration;
- (void)_updateVisibleCellsForDownloads:(id)arg1 updateAllCells:(_Bool)arg2;
- (void)_setCellConfigurationClass:(Class)arg1;
- (void)_recreateTableView;
- (id)_createTableView;
@property(readonly, nonatomic) struct CGPoint contentOffsetRevealingFirstDataSourceSection;
- (id)reuseIdentifierForCellAtIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withEntity:(id)arg3 invalidationContext:(id)arg4;
@property(readonly, nonatomic) _Bool shouldScrollToFirstDataSourceSectionOnInitialAppearance;
- (_Bool)isTableViewLoaded;
- (Class)actionCellConfigurationClassForIndexPath:(id)arg1;
@property(readonly, nonatomic) UITableView *tableView;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadActionRowsAnimated:(_Bool)arg1;
- (_Bool)shouldShowActionCellConfiguration:(Class)arg1;
- (long long)sectionForDataSourceSection:(long long)arg1;
- (long long)numberOfBottomActionRowsInTableView:(id)arg1;
- (long long)numberOfTopActionRowsInTableView:(id)arg1;
- (long long)numberOfActionRowsInTableView:(id)arg1;
- (id)indexPathForDataSourceIndex:(long long)arg1;
- (long long)indexOfFirstDataSourceSection;
- (long long)dataSourceSectionForSection:(long long)arg1;
- (long long)dataSourceIndexForIndexPath:(id)arg1;
- (Class)cellConfigurationForIndexPath:(id)arg1;
- (void)_configureCellsAfterScroll;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)setDataSource:(id)arg1;
- (void)reloadData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (id)initWithDataSource:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
