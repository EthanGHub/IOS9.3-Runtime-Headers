//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLLibrary;

@interface MLEntity : NSObject
{
    shared_ptr_0b947ef7 _entity;
    MLLibrary *_library;
}

+ (struct EntityClass *)coreEntityClass;
+ (id)MLEntityWithCoreEntity:(shared_ptr_0b947ef7)arg1;
+ (Class)MLEntityClassWithCoreEntityClass:(struct EntityClass *)arg1;
@property(readonly, nonatomic) __weak MLLibrary *library; // @synthesize library=_library;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(void *)arg2;
- (id)valueForProperty:(void *)arg1;
@property(readonly, nonatomic) long long persistentID;
@property(readonly, nonatomic) shared_ptr_0b947ef7 coreEntity;
- (id)initWithCoreEntity:(shared_ptr_0b947ef7)arg1;
- (id)init;

@end
