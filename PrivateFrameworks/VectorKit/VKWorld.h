//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class VKModelObject;
@protocol VKWorldDelegate;

__attribute__((visibility("hidden")))
@interface VKWorld : NSObject
{
    id <VKWorldDelegate> _delegate;
    VKModelObject *_modelRoot;
}

@property(readonly, nonatomic) VKModelObject *modelRoot; // @synthesize modelRoot=_modelRoot;
@property(nonatomic) id <VKWorldDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning:(_Bool)arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3 dispatchQueue:(id)arg4;
- (void)runAnimation:(id)arg1;
- (void)worldDisplayDidChange;
- (void)worldLayoutDidChange;
- (id)description;
- (void)dealloc;
- (id)init;

@end

