//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSIndexPath, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface PUGridMagnifiedView : UIView
{
    UIImageView *_imageView;
    NSIndexPath *_itemIndexPath;
    UIImage *_itemImage;
    struct CGSize _magnifiedImageSize;
    struct UIEdgeInsets _magnifiedDragEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets magnifiedDragEdgeInsets; // @synthesize magnifiedDragEdgeInsets=_magnifiedDragEdgeInsets;
@property(retain, nonatomic) UIImage *itemImage; // @synthesize itemImage=_itemImage;
@property(retain, nonatomic) NSIndexPath *itemIndexPath; // @synthesize itemIndexPath=_itemIndexPath;
@property(nonatomic) struct CGSize magnifiedImageSize; // @synthesize magnifiedImageSize=_magnifiedImageSize;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (struct CGRect)pinFrameToParentFrame:(struct CGRect)arg1;
- (struct CGRect)photoFrameForViewFrame:(struct CGRect)arg1;
- (struct CGRect)viewFrameForPhotoFrame:(struct CGRect)arg1;
- (struct CGRect)imageWindFrame;
- (struct CGRect)magnifiedFrameForParentLocation:(struct CGPoint)arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setShadowOffset:(struct CGSize)arg1;
- (void)hideAnimate:(_Bool)arg1;
- (void)setImageAnimate:(_Bool)arg1;
- (void)moveToLocation:(struct CGPoint)arg1 animate:(_Bool)arg2;
- (void)magnifyFromImageFrame:(struct CGRect)arg1 toLocation:(struct CGPoint)arg2 animate:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

