//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UILabel;

@interface SKUIProductPagePlaceholderView : UIView
{
    UIImageView *_imageView;
    UILabel *_label;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithPlaceholderString:(id)arg1 isPad:(_Bool)arg2;

@end
