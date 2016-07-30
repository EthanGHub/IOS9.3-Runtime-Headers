//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Protocol;

@interface NSXPCInterface : NSObject
{
    Protocol *_protocol;
    struct __CFDictionary *_methods2;
    id _reserved1;
}

+ (id)signatureForBlock:(id)arg1;
+ (id)interfaceWithProtocol:(id)arg1;
- (id)_interfaceForArgument:(unsigned long long)arg1 ofSelector:(SEL)arg2 reply:(_Bool)arg3;
- (id)_allowedClassesForSelector:(SEL)arg1 reply:(_Bool)arg2;
- (id)_verifiedMethodSignatureForReplyBlockOfSelector:(SEL)arg1;
- (id)_verifiedMethodSignatureForSelector:(SEL)arg1;
- (id)replyBlockSignatureForSelector:(SEL)arg1;
- (void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2;
- (Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(_Bool)arg3;
- (void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(_Bool)arg4;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(_Bool)arg3;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(_Bool)arg4;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(_Bool)arg3;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(_Bool)arg4;
@property Protocol *protocol;
- (id)debugDescription;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
