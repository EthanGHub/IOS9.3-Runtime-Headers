//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol UIScrollViewDelegate;

@interface UIScrollView (ISPlayerView)
@property(readonly, nonatomic) id <UIScrollViewDelegate> is_scrollViewDelegate;
- (void)is_didLayoutPlayerViews;
@property(nonatomic, setter=is_setVitalityHints:) unsigned long long is_vitalityHints;
@property(nonatomic, setter=is_setSupportsVitality:) _Bool is_supportsVitality;
@end
