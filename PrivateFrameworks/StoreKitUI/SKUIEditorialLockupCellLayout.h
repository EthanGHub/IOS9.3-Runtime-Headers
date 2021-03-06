//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIItemCellLayout.h>

@class SKUICellLayoutView, SKUIEditorialCellLayout, SKUILockupItemCellLayout, SKUITextBoxView, UIColor, UIView;

@interface SKUIEditorialLockupCellLayout : SKUIItemCellLayout
{
    struct UIEdgeInsets _contentInsets;
    SKUIEditorialCellLayout *_editorialCellLayout;
    UIView *_editorialContainerView;
    double _editorialHeight;
    long long _layoutStyle;
    SKUILockupItemCellLayout *_lockupLayout;
    SKUICellLayoutView *_lockupView;
    UIColor *_offerNoticeTextColor;
    SKUITextBoxView *_textBoxView;
    unsigned long long _visibleFields;
}

+ (double)_imagePaddingForArtworkSize:(long long)arg1;
+ (double)editorialWidthForCellWidth:(double)arg1 lockupStyle:(struct SKUILockupStyle)arg2;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) unsigned long long visibleFields; // @synthesize visibleFields=_visibleFields;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (_Bool)_showsItemOfferUnderEditorial;
- (id)_lockupView;
- (_Bool)_isItemOfferButtonHidden;
- (id)_editorialContainerView;
- (id)_editorialCellLayout;
- (void)setRestricted:(_Bool)arg1;
- (void)setItemState:(id)arg1 animated:(_Bool)arg2;
- (void)setItemOfferNoticeString:(id)arg1;
- (void)setItemOfferButtonAppearance:(id)arg1;
- (void)setItemOffer:(id)arg1;
- (void)setIconImageHidden:(_Bool)arg1;
- (void)setIconImage:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)layoutForItemOfferChange;
- (id)itemState;
- (id)itemOfferNoticeString;
- (id)itemOffer;
- (_Bool)isIconImageHidden;
- (id)iconImageView;
- (id)iconImage;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) SKUITextBoxView *textBoxView;
- (void)setColoringWithColorScheme:(id)arg1;
@property(readonly, nonatomic) SKUILockupItemCellLayout *lockupCellLayout;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2;

@end

