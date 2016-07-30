//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUFeedCell.h>

@class NSAttributedString, PUFeedTextCellContentView, UIButton, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUFeedTextCell : PUFeedCell
{
    PUFeedTextCellContentView *_contentView;
    _Bool _shouldUseOpaqueBackground;
    NSAttributedString *_attributedText;
    long long _numberOfTextLines;
    double _textDetailTextSpacing;
    NSAttributedString *_attributedDetailText;
    long long _numberOfDetailTextLines;
    long long _textAlignment;
    UIImage *_iconImage;
    long long _iconLocation;
    long long _tappableArea;
    long long _buttonType;
    long long _buttonSize;
    long long _buttonHorizontalAlignment;
    double _buttonPadding;
    UILabel *__label;
    UILabel *__detailLabel;
    UIImageView *__iconImageView;
    UIButton *__button;
    struct UIOffset _iconOffset;
    struct UIOffset _buttonOffset;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _iconPadding;
}

@property(retain, nonatomic, setter=_setButton:) UIButton *_button; // @synthesize _button=__button;
@property(retain, nonatomic, setter=_setIconImageView:) UIImageView *_iconImageView; // @synthesize _iconImageView=__iconImageView;
@property(retain, nonatomic, setter=_setDetailLabel:) UILabel *_detailLabel; // @synthesize _detailLabel=__detailLabel;
@property(retain, nonatomic, setter=_setLabel:) UILabel *_label; // @synthesize _label=__label;
@property(nonatomic) _Bool shouldUseOpaqueBackground; // @synthesize shouldUseOpaqueBackground=_shouldUseOpaqueBackground;
@property(nonatomic) double buttonPadding; // @synthesize buttonPadding=_buttonPadding;
@property(nonatomic) struct UIOffset buttonOffset; // @synthesize buttonOffset=_buttonOffset;
@property(nonatomic) long long buttonHorizontalAlignment; // @synthesize buttonHorizontalAlignment=_buttonHorizontalAlignment;
@property(nonatomic) long long buttonSize; // @synthesize buttonSize=_buttonSize;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) long long tappableArea; // @synthesize tappableArea=_tappableArea;
@property(nonatomic) struct UIOffset iconOffset; // @synthesize iconOffset=_iconOffset;
@property(nonatomic) struct UIEdgeInsets iconPadding; // @synthesize iconPadding=_iconPadding;
@property(nonatomic) long long iconLocation; // @synthesize iconLocation=_iconLocation;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long numberOfDetailTextLines; // @synthesize numberOfDetailTextLines=_numberOfDetailTextLines;
@property(retain, nonatomic) NSAttributedString *attributedDetailText; // @synthesize attributedDetailText=_attributedDetailText;
@property(nonatomic) double textDetailTextSpacing; // @synthesize textDetailTextSpacing=_textDetailTextSpacing;
@property(nonatomic) long long numberOfTextLines; // @synthesize numberOfTextLines=_numberOfTextLines;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (id)_labelBackgroundColor;
- (void)_updateLabelsBackgroundColor;
- (void)_configureButton:(id)arg1 withType:(long long)arg2 size:(long long)arg3 animated:(_Bool)arg4;
- (struct CGSize)_maximumPossibleTextSizeForButtonWithType:(long long)arg1 size:(long long)arg2;
- (struct CGSize)_textSizeForButtonWithType:(long long)arg1 size:(long long)arg2;
- (void)_handleButton:(id)arg1;
- (id)_delegate;
- (void)_updateButtonAnimated:(_Bool)arg1;
- (void)_updateIconImageView;
- (void)_updateDetailLabel;
- (_Bool)shouldRecognizerTap:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setButtonType:(long long)arg1 animated:(_Bool)arg2;
- (id)contentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
