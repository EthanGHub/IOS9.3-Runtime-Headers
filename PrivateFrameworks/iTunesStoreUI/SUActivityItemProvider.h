//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSObject, UIActivity, UIImage;
@protocol OS_dispatch_queue, SUActivityItemProviderDelegate;

@interface SUActivityItemProvider : UIActivityItemProvider
{
    UIActivity *_activity;
    id <SUActivityItemProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id _lastProvidedItem;
    UIImage *_previewImage;
}

- (id)item;
@property(retain, setter=setSUPreviewImage:) UIImage *suPreviewImage;
@property(readonly) id suLastProvidedItem;
@property(retain, setter=setSUActivity:) UIActivity *suActivity;
@property __weak id <SUActivityItemProviderDelegate> delegate;
- (void)dealloc;
- (id)initWithPlaceholderItem:(id)arg1;

@end

