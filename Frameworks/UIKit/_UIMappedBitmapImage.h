//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _UIMappedBitmapImage : UIImage
{
    NSData *_data;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_configureImage:(id)arg1;
- (void)_preheatBitmapData;

@end
