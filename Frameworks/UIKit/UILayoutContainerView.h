//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/NSCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView <NSCoding>
{
    double _cornerRadius;
    _Bool _shadowViewsInstalled;
    UIView *_shadowView;
    _Bool _usesRoundedCorners;
    _Bool _usesInnerShadow;
    _Bool _forwardMoveToWindowCallbacks;
    _Bool __delegateRespondsToSemanticContentAttributeChanged;
    id _delegate;
}

@property(nonatomic, setter=_setDelegateRespondsToSemanticContentAttributeChanged:) _Bool _delegateRespondsToSemanticContentAttributeChanged; // @synthesize _delegateRespondsToSemanticContentAttributeChanged=__delegateRespondsToSemanticContentAttributeChanged;
@property(nonatomic) _Bool forwardMoveToWindowCallbacks; // @synthesize forwardMoveToWindowCallbacks=_forwardMoveToWindowCallbacks;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool usesInnerShadow; // @synthesize usesInnerShadow=_usesInnerShadow;
@property(nonatomic) _Bool usesRoundedCorners; // @synthesize usesRoundedCorners=_usesRoundedCorners;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)addSubview:(id)arg1;
- (void)_tearDownShadowViews;
- (void)_installShadowViews;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

