//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKMapItemMetadataRequest.h>

__attribute__((visibility("hidden")))
@interface MKMapItemMetadataDealRequest : MKMapItemMetadataRequest
{
    CDUnknownBlockType _dealHandler;
}

+ (id)requestWithMapItem:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType dealHandler; // @synthesize dealHandler=_dealHandler;
- (void).cxx_destruct;
- (void)handleError:(id)arg1;
- (void)handleData:(id)arg1;
- (id)urlRequest;
- (id)url;

@end
