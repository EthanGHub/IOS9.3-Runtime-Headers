//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GLKit/NSCopying-Protocol.h>

@interface GLKTextureInfo : NSObject <NSCopying>
{
    unsigned int name;
    unsigned int target;
    unsigned int width;
    unsigned int height;
    int alphaState;
    int textureOrigin;
    _Bool containsMipmaps;
}

@property(readonly) _Bool containsMipmaps; // @synthesize containsMipmaps;
@property(readonly) int textureOrigin; // @synthesize textureOrigin;
@property(readonly) int alphaState; // @synthesize alphaState;
@property(readonly) unsigned int height; // @synthesize height;
@property(readonly) unsigned int width; // @synthesize width;
@property(readonly) unsigned int target; // @synthesize target;
@property(readonly) unsigned int name; // @synthesize name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithTexture:(id)arg1 textureName:(unsigned int)arg2;

@end
