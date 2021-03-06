//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BKSDisplayRenderOverlayDescribing-Protocol.h>
#import <BackBoardServices/BSDescriptionProviding-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class BKSDisplayProgressIndicatorProperties, CADisplay, NSString;

@interface BKSDisplayRenderOverlayDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding, BKSDisplayRenderOverlayDescribing>
{
    NSString *_name;
    NSString *_displayUUID;
    CADisplay *_display;
    BKSDisplayProgressIndicatorProperties *_progressIndicatorProperties;
    long long _interfaceOrientation;
    _Bool _lockBacklight;
}

+ (_Bool)supportsSecureCoding;
+ (id)_classesRequiredToDecode;
+ (id)descriptorWithName:(id)arg1 display:(id)arg2;
@property(retain, nonatomic) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties; // @synthesize progressIndicatorProperties=_progressIndicatorProperties;
@property(nonatomic) _Bool lockBacklight; // @synthesize lockBacklight=_lockBacklight;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(copy, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, retain, nonatomic) CADisplay *display; // @synthesize display=_display;
- (void)dealloc;
- (id)initWithName:(id)arg1 display:(id)arg2;
- (id)_initWithName:(id)arg1 displayUUID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

