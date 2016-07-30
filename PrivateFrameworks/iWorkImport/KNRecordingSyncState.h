//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface KNRecordingSyncState : NSObject <NSCopying>
{
    NSUUID *_outOfSyncToken;
    _Bool _canClearOutOfSyncToken;
}

@property(readonly, nonatomic) NSUUID *outOfSyncToken; // @synthesize outOfSyncToken=_outOfSyncToken;
- (id)recordingSyncStateByMarkingRecordingAsOutOfSync:(_Bool)arg1 withLocalOutOfSyncToken:(id)arg2;
- (_Bool)isRecordingLocallyOutOfSyncUsingLocalOutOfSyncToken:(id)arg1;
@property(readonly, nonatomic, getter=isRecordingOutOfSync) _Bool recordingOutOfSync;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithOutOfSyncToken:(id)arg1 canClearOutOfSyncToken:(_Bool)arg2;

@end
