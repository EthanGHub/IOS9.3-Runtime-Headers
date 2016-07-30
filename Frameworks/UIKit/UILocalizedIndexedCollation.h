//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSLocale, NSString;

@interface UILocalizedIndexedCollation : NSObject
{
    NSLocale *_locale;
    NSArray *_sectionTitles;
    NSArray *_sectionStartStrings;
    NSArray *_sectionIndexTitles;
    NSArray *_sectionIndexMapping;
    NSString *_transform;
    NSString *_firstSectionStartString;
    NSString *_lastSectionStartString;
    struct __CFStringTokenizer *_tokenizer;
}

+ (id)currentCollation;
+ (id)collationWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2;
- (long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
- (long long)sectionForSectionIndexTitleAtIndex:(long long)arg1;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
@property(readonly, nonatomic) NSArray *sectionTitles;
- (void)dealloc;
- (struct __CFStringTokenizer *)tokenizer;
- (id)transformedCollationStringForString:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
