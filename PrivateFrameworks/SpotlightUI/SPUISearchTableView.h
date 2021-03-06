//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <SpotlightUI/SPUISearchTableHeaderViewDelegate-Protocol.h>

@class NSMutableSet, NSString;
@protocol SPUISearchTableViewDelegate;

@interface SPUISearchTableView : UITableView <SPUISearchTableHeaderViewDelegate>
{
    _Bool _lastLayoutWasLandscape;
    _Bool _isTogglingSectionExpansion;
    id <SPUISearchTableViewDelegate> _searchDelegate;
    NSMutableSet *_expandedSections;
    CDUnknownBlockType _toggleSectionExpansionCompletion;
}

@property _Bool isTogglingSectionExpansion; // @synthesize isTogglingSectionExpansion=_isTogglingSectionExpansion;
@property(copy, nonatomic) CDUnknownBlockType toggleSectionExpansionCompletion; // @synthesize toggleSectionExpansionCompletion=_toggleSectionExpansionCompletion;
@property _Bool lastLayoutWasLandscape; // @synthesize lastLayoutWasLandscape=_lastLayoutWasLandscape;
@property(retain, nonatomic) NSMutableSet *expandedSections; // @synthesize expandedSections=_expandedSections;
@property(nonatomic) __weak id <SPUISearchTableViewDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void).cxx_destruct;
- (void)updateLayoutAfterDeferredRotationIfNeeded;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutMarginsDidChange;
- (_Bool)allowsHeaderViewsToFloat;
- (_Bool)allowsFooterViewsToFloat;
- (void)updateSeparatorForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)toggleExpansionForSection:(unsigned long long)arg1;
- (_Bool)sectionIsExpanded:(long long)arg1;
- (void)clearExpansionState;
- (struct UIEdgeInsets)layoutMargins;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

