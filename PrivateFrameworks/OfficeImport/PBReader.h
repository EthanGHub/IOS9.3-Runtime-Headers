//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OCBReader.h>

__attribute__((visibility("hidden")))
@interface PBReader : OCBReader
{
    struct PptObjectFactory *mPptObjectFactory;
    const void *mBuffer;
}

- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;
@property(readonly, nonatomic) struct PptBinaryReader *pptReader;
- (id)read;
- (_Bool)start;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;

@end
