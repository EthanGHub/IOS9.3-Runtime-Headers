//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, _AVViewSublayerAnimationDelegateProxy;

__attribute__((visibility("hidden")))
@interface AVView : UIView
{
    NSMutableArray *_sublayers;
    _AVViewSublayerAnimationDelegateProxy *_sublayerAnimationDelegateProxy;
}

- (void).cxx_destruct;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)removeSublayer:(id)arg1;
- (void)addSublayer:(id)arg1;
@property(readonly, nonatomic) NSArray *sublayers;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

