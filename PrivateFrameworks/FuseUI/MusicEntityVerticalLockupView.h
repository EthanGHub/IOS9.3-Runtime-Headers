//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicEntityAbstractLockupView.h>

#import <FuseUI/MusicEntityContentDescriptorViewConfiguring-Protocol.h>
#import <FuseUI/MusicEntityViewDownloadInformationObserving-Protocol.h>

@class MusicEntityViewContentDescriptor, NSString, UIImageView;
@protocol MusicEntityValueProviding, MusicEntityVerticalLockupViewDelegate;

@interface MusicEntityVerticalLockupView : MusicEntityAbstractLockupView <MusicEntityContentDescriptorViewConfiguring, MusicEntityViewDownloadInformationObserving>
{
    UIImageView *_availableOfflineBadgeImageView;
    _Bool _isAvailableOffline;
    double _textLateralEdgePadding;
    id <MusicEntityVerticalLockupViewDelegate> _delegate;
    struct MusicEntityDownloadInformation _downloadInformation;
}

+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;
@property(nonatomic) __weak id <MusicEntityVerticalLockupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct MusicEntityDownloadInformation downloadInformation; // @synthesize downloadInformation=_downloadInformation;
- (void).cxx_destruct;
@property(retain, nonatomic) MusicEntityViewContentDescriptor *contentDescriptor;
- (void)setTextLateralEdgePadding:(double)arg1;
- (_Bool)_shouldArtworkViewRespectHighlightProperty;
- (_Bool)_shouldEnableArtworkViewUserInteraction;
- (void)_handlePlayButtonTappedWithAction:(unsigned long long)arg1;
- (void)_contentDescriptorDidChange:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <MusicEntityValueProviding> entityValueProvider;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
