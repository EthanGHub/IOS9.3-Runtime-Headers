//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableData.h>

__attribute__((visibility("hidden")))
@interface __NSCFData : NSMutableData
{
    unsigned char _cfinfo[4];
    unsigned int _rc;
    long long _length;
    long long _capacity;
    struct __CFAllocator *_bytesDeallocator;
    char *_bytes;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void *)mutableBytes;
- (const void *)bytes;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (unsigned long long)retainCount;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

