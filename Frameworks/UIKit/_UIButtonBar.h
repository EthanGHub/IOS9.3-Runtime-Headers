//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/_UIBarButtonItemGroupOwner-Protocol.h>
#import <UIKit/_UIBarButtonItemViewOwner-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMapTable, NSMutableArray, NSString, UIBarButtonItem, UILayoutGuide, UIView, _UIButtonBarButtonVisualProvider, _UIButtonBarLayoutMetrics, _UIButtonBarStackView;

@interface _UIButtonBar : NSObject <_UIBarButtonItemViewOwner, _UIBarButtonItemGroupOwner, NSCoding>
{
    _UIButtonBarStackView *_stackView;
    UILayoutGuide *_flexibleSpaceEqualSizeLayoutGuide;
    UILayoutGuide *_minimumInterItemSpaceLayoutGuide;
    NSLayoutConstraint *_minimumInterItemSpaceConstraint;
    UILayoutGuide *_minimumInterGroupSpaceLayoutGuide;
    NSLayoutConstraint *_minimumInterGroupSpaceConstraint;
    _UIButtonBarLayoutMetrics *_layoutMetrics;
    NSMutableArray *_groupLayouts;
    NSMutableArray *_effectiveLayout;
    NSMapTable *_groupLayoutMap;
    NSMutableArray *_layoutViews;
    NSMutableArray *_layoutGuides;
    NSMutableArray *_layoutActiveConstraints;
    NSMapTable *_senderActionMap;
    _Bool _compact;
    _Bool _itemsInGroupUseSameSize;
    NSArray *_barButtonGroups;
    double _minimumInterItemSpace;
    _UIButtonBarButtonVisualProvider *_visualProvider;
    double _minimumInterGroupSpace;
    CDUnknownBlockType _defaultActionFilter;
}

+ (float)optionalConstraintsPriority;
@property(copy, nonatomic) CDUnknownBlockType defaultActionFilter; // @synthesize defaultActionFilter=_defaultActionFilter;
@property(nonatomic, getter=_minimumInterGroupSpace, setter=_setMinimumInterGroupSpace:) double minimumInterGroupSpace; // @synthesize minimumInterGroupSpace=_minimumInterGroupSpace;
@property(nonatomic, getter=_itemsInGroupUseSameSize, setter=_setItemsInGroupUseSameSize:) _Bool itemsInGroupUseSameSize; // @synthesize itemsInGroupUseSameSize=_itemsInGroupUseSameSize;
@property(copy, nonatomic, getter=_visualProvider, setter=_setVisualProvider:) _UIButtonBarButtonVisualProvider *visualProvider; // @synthesize visualProvider=_visualProvider;
@property(nonatomic, getter=_compact, setter=_setCompact:) _Bool compact; // @synthesize compact=_compact;
@property(nonatomic) double minimumInterItemSpace; // @synthesize minimumInterItemSpace=_minimumInterItemSpace;
@property(copy, nonatomic) NSArray *barButtonGroups; // @synthesize barButtonGroups=_barButtonGroups;
- (void).cxx_destruct;
- (id)_debug;
- (void)_groupDidChangePriority:(id)arg1;
- (void)_groupDidChangeGeometry:(id)arg1;
- (void)_groupDidUpdateVisibility:(id)arg1;
- (void)_groupDidUpdateRepresentative:(id)arg1 fromRepresentative:(id)arg2;
- (void)_groupDidUpdateItems:(id)arg1 removedItems:(id)arg2;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_validateAllItems;
- (void)_reloadBarButtonGroups;
@property(readonly, nonatomic) UIBarButtonItem *ultimateFallbackItem;
- (id)_updatedViewForBarButtonItem:(id)arg1 withView:(id)arg2;
- (void)_updateForTraitCollectionChange:(id)arg1;
- (void)_layoutBar;
- (id)_newGroupLayout:(id)arg1;
- (void)_setNeedsVisualUpdate;
- (id)_layoutForGroup:(id)arg1;
- (id)_targetActionForBarButtonItem:(id)arg1;
- (void)_updateToFitInWidth:(double)arg1;
- (double)_estimatedWidth;
@property(readonly, nonatomic, getter=_layoutWidth) double layoutWidth;
@property(readonly, nonatomic) UIView *view;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
