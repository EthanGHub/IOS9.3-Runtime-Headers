//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUDelimitedValuesParser : NSObject
{
    unsigned short *_buffer;
    unsigned long long _bufferLength;
    unsigned short _separator;
    _Bool _freeWhenDone;
}

+ (_Bool)coerceString:(id)arg1 withLocale:(id)arg2 toCurrencyFormat:(CDStruct_28403e59 *)arg3 value:(double *)arg4;
+ (_Bool)coerceString:(id)arg1 withLocale:(id)arg2 toNumberFormat:(CDStruct_28403e59 *)arg3 value:(double *)arg4;
@property(readonly, nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferLength;
- (CDStruct_4bcfbbae)parseColumnRowSize;
- (void)parseRawStringsWithBlock:(CDUnknownBlockType)arg1;
- (void)parseStringsWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithString:(id)arg1 separator:(unsigned short)arg2;
- (id)initWithBuffer:(unsigned short *)arg1 length:(unsigned long long)arg2 separator:(unsigned short)arg3 freeWhenDone:(_Bool)arg4;

@end

