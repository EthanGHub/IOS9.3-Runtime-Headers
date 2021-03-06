//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNPermissivePolicy.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CNDictionaryPolicy : CNPermissivePolicy
{
    NSDictionary *_policyDictionary;
}

- (_Bool)isContactPropertySupported:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (id)supportedLabelsForContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;
- (id)unsupportedAttributesForLableledContactProperty:(id)arg1;
- (id)contactRestrictionsForLabeledProperty:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

