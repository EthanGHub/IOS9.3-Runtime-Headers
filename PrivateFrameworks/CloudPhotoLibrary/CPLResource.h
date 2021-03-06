//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLResourceIdentity, NSString;

@interface CPLResource : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _generateDerivative;
    _Bool _canGenerateDerivative;
    CPLResourceIdentity *_identity;
    NSString *_itemIdentifier;
    unsigned long long _resourceType;
}

+ (float)derivativeGenerationThreshold;
+ (unsigned long long)maxPixelSizeForResourceType:(unsigned long long)arg1;
+ (_Bool)hasPriorityBoostForResourceType:(unsigned long long)arg1;
+ (id)shortDescriptionForResourceType:(unsigned long long)arg1;
+ (id)descriptionForResourceType:(unsigned long long)arg1;
+ (id)normalizedResourcesFromResources:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool canGenerateDerivative; // @synthesize canGenerateDerivative=_canGenerateDerivative;
@property(nonatomic) _Bool generateDerivative; // @synthesize generateDerivative=_generateDerivative;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(retain, nonatomic) CPLResourceIdentity *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (_Bool)isTrackedForUpload;
- (id)bestFileNameForResource;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(unsigned long long)arg3;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

