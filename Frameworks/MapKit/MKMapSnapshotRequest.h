//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MKMapSnapshotCreator, NSString, UIImage, VKMapSnapshotCreator;

__attribute__((visibility("hidden")))
@interface MKMapSnapshotRequest : NSObject
{
    id _requester;
    id _context;
    CDStruct_2c43369c _coordinate;
    unsigned long long _zoomLevel;
    struct CGSize _size;
    UIImage *_image;
    NSString *_attributionString;
    MKMapSnapshotCreator *_delegate;
    VKMapSnapshotCreator *_snapshotCreator;
}

@property(retain, nonatomic) NSString *attributionString; // @synthesize attributionString=_attributionString;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak MKMapSnapshotCreator *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) unsigned long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) id requester; // @synthesize requester=_requester;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (id)description;

@end

