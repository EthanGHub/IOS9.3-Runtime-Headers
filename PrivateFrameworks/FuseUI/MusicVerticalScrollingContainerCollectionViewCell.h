//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MusicVerticalScrollingContainerItem;
@protocol MusicVerticalScrollingContainerCollectionViewCellDelegate;

@interface MusicVerticalScrollingContainerCollectionViewCell : UICollectionViewCell
{
    struct {
        unsigned int didUpdateBounds:1;
    } _delegateRespondsToSelector;
    id <MusicVerticalScrollingContainerCollectionViewCellDelegate> _delegate;
    MusicVerticalScrollingContainerItem *_verticalScrollingContainerItem;
}

@property(retain, nonatomic) MusicVerticalScrollingContainerItem *verticalScrollingContainerItem; // @synthesize verticalScrollingContainerItem=_verticalScrollingContainerItem;
@property(nonatomic) __weak id <MusicVerticalScrollingContainerCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_performBlockAffectingBounds:(CDUnknownBlockType)arg1;
- (void)setPreservesSuperviewLayoutMargins:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;

@end

