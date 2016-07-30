//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRSendCommandResultMessageProtobuf : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _handlerReturnStatus;
    unsigned int _errorCode;
    CDStruct_70a7dc3e _has;
}

@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setHandlerReturnStatus:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)handlerReturnStatusAtIndex:(unsigned long long)arg1;
- (void)addHandlerReturnStatus:(unsigned int)arg1;
- (void)clearHandlerReturnStatus;
@property(readonly, nonatomic) unsigned int *handlerReturnStatus;
@property(readonly, nonatomic) unsigned long long handlerReturnStatusCount;
@property(nonatomic) _Bool hasErrorCode;
- (void)dealloc;

@end
