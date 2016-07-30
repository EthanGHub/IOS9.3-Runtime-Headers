//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface CKTranscriptLocationShareCell : UITableViewCell
{
    _Bool _showOfferTimeRemaining;
    double _offerTimeRemaining;
    UILabel *_timeRemainingLabel;
}

+ (id)identifier;
@property(retain, nonatomic) UILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(nonatomic) double offerTimeRemaining; // @synthesize offerTimeRemaining=_offerTimeRemaining;
@property(nonatomic) _Bool showOfferTimeRemaining; // @synthesize showOfferTimeRemaining=_showOfferTimeRemaining;
- (id)timeStringForTimeInterval:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
