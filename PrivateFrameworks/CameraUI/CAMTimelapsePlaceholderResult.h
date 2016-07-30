//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMTransientAssetConvertible-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface CAMTimelapsePlaceholderResult : NSObject <CAMTransientAssetConvertible>
{
    _Bool _usingFrontCamera;
    unsigned short _sessionIdentifier;
    NSString *_assetUUID;
    NSDate *_creationDate;
    long long _captureOrientation;
    void *_previewImageSurface;
    struct CGSize _videoDimensions;
}

@property(readonly, nonatomic) void *previewImageSurface; // @synthesize previewImageSurface=_previewImageSurface;
@property(readonly, nonatomic) struct CGSize videoDimensions; // @synthesize videoDimensions=_videoDimensions;
@property(readonly, nonatomic, getter=isUsingFrontCamera) _Bool usingFrontCamera; // @synthesize usingFrontCamera=_usingFrontCamera;
@property(readonly, nonatomic) long long captureOrientation; // @synthesize captureOrientation=_captureOrientation;
@property(readonly, copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) unsigned short sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, copy, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_1b6d18a9 irisStillDisplayTime;
@property(readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property(readonly, nonatomic, getter=isExpectingPairedVideo) _Bool expectingPairedVideo;
@property(readonly, nonatomic) NSString *irisStillImageUUID;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSString *burstIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) NSDate *captureDate;
@property(readonly, copy, nonatomic) NSURL *persistenceURL;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) unsigned long long mediaType;
- (void)dealloc;
- (id)initWithAssetUUID:(id)arg1 captureSession:(unsigned short)arg2 creationDate:(id)arg3 captureOrientation:(long long)arg4 usingFrontCamera:(_Bool)arg5 videoDimensions:(struct CGSize)arg6 previewImageSurface:(void *)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
