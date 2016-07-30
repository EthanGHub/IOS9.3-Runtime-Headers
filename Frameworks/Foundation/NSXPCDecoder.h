//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSXPCCoder.h>

@class NSObject, NSXPCConnection, NSXPCInterface;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NSXPCDecoder : NSXPCCoder
{
    NSObject<OS_xpc_object> *_oolObjects;
    NSXPCInterface *_interface;
    SEL _replyToSelector;
    unsigned long long _genericIndex;
    void **_decoder;
    NSXPCConnection *_connection;
    struct *_collections[128];
    struct {
        unsigned long long offset;
        int type;
    } _rootObject;
    unsigned int _collectionPointer;
    id _allowedClassesList[128];
    long long _allowedClassesIndex;
}

+ (id)_createXPCObjectWithData:(id)arg1;
@property NSXPCConnection *_connection; // @synthesize _connection;
@property SEL replyToSelector; // @synthesize replyToSelector=_replyToSelector;
@property(retain) NSXPCInterface *interface; // @synthesize interface=_interface;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s *)arg1 forKey:(id)arg2;
- (id)decodeXPCObjectForKey:(id)arg1;
- (const char *)_decodeCStringForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (long long)decodeIntegerForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (_Bool)decodeBoolForKey:(id)arg1;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;
- (id)allowedClasses;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectForKey:(id)arg1;
- (_Bool)containsValueForKey:(id)arg1;
- (id)decodeInvocation;
- (id)decodeObject;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(_Bool)arg3;
- (_Bool)allowsKeyedCoding;
- (id)debugDescription;
- (void)finalize;
- (void)dealloc;
- (id)_initWithRootXPCObject:(id)arg1;

@end
