//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CKActionMenuView, NSArray;
@protocol CKActionMenuControllerDelegate;

@interface CKActionMenuController : NSObject
{
    unsigned long long _defaultActionIndex;
    id <CKActionMenuControllerDelegate> _delegate;
    NSArray *_passthroughViews;
    CKActionMenuView *_actionMenuView;
}

@property(retain, nonatomic) CKActionMenuView *actionMenuView; // @synthesize actionMenuView=_actionMenuView;
@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) id <CKActionMenuControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long defaultActionIndex; // @synthesize defaultActionIndex=_defaultActionIndex;
- (struct CGRect)convertActionMenuFrameToView:(id)arg1;
- (void)dismissActionMenuAnimated:(_Bool)arg1;
- (void)presentActionMenuFromPoint:(struct CGPoint)arg1 inView:(id)arg2 animated:(_Bool)arg3;
@property(readonly, nonatomic, getter=isActionMenuVisible) _Bool actionMenuVisible;
@property(readonly, copy, nonatomic) NSArray *actionMenuItems;
- (void)setActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)initWithActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 blurEffectStyle:(long long)arg3 backgroundFilters:(id)arg4;
- (void)dealloc;

@end

