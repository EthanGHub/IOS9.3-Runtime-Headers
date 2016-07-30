//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDeleteShareInfo, CKShare, CKShareID, NSError;

__attribute__((visibility("hidden")))
@interface CKDModifyShareMetadata : NSObject
{
    CKShareID *_shareID;
    _Bool _isDelete;
    CKShare *_share;
    CKDeleteShareInfo *_deleteInfo;
    unsigned long long _state;
    NSError *_error;
}

+ (id)_stringForUploadState:(unsigned long long)arg1;
+ (id)modifyMetadataForDeleteWithShareID:(id)arg1;
+ (id)modifyMetadataWithShare:(id)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(retain, nonatomic) CKDeleteShareInfo *deleteInfo; // @synthesize deleteInfo=_deleteInfo;
@property(readonly, nonatomic) CKShare *share; // @synthesize share=_share;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) CKShareID *shareID;
- (id)initWithShareID:(id)arg1;
- (id)initWithShare:(id)arg1;

@end
