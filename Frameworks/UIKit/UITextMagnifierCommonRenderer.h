//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextMagnifierRenderer.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UITextMagnifierCommonRenderer : UITextMagnifierRenderer
{
    _Bool m_loaded;
    UIImage *m_loImageHorizontal;
    UIImage *m_maskImageHorizontal;
    UIImage *m_hiImageHorizontal;
    UIImage *m_loImageVertical;
    UIImage *m_maskImageVertical;
    UIImage *m_hiImageVertical;
}

- (void).cxx_destruct;
- (struct CGPoint)calculateFinalCompositionPointForCompositePoint:(struct CGPoint)arg1;
- (double)offsetForMagnifier:(id)arg1;
- (struct CGPoint)calculateCompositePointWithOrientation:(_Bool)arg1;
- (id)filenamesForMagnifier;
- (void)drawMagnifier:(struct CGRect)arg1;
- (struct CGImage *)captureSnapshotAtRect:(struct CGRect)arg1 forMagnifier:(id)arg2 withRotation:(double)arg3 onlyTarget:(_Bool)arg4 outTransform:(struct CGAffineTransform *)arg5;
- (void)performOperations:(CDUnknownBlockType)arg1 forMagnifier:(id)arg2;
- (void)loadImages;

@end
