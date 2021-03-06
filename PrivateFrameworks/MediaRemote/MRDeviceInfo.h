//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/NSMutableCopying-Protocol.h>

@class NSString;

@interface MRDeviceInfo : NSObject <NSMutableCopying>
{
    NSString *_uniqueIdentifier;
    NSString *_name;
    NSString *_localizedModelName;
}

+ (id)currentDeviceInfo;
@property(readonly, nonatomic) NSString *localizedModelName; // @synthesize localizedModelName=_localizedModelName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithUniqueIdentifier:(id)arg1 name:(id)arg2 localizedModelName:(id)arg3;

@end

