//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIPickerTableView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewCell : UITableViewCell
{
    UITapGestureRecognizer *_tap;
    UIPickerTableView *pickerTable;
}

@property(nonatomic) UIPickerTableView *pickerTable; // @synthesize pickerTable;
- (void).cxx_destruct;
- (void)_tapAction:(id)arg1;
- (void)_setIsCenterCell:(_Bool)arg1 shouldModifyAlphaOfView:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

