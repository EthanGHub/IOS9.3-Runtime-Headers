//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface DCManagedOtherMetadata : NSManagedObject
{
}

+ (id)otherMetadataForDocumentIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)saveOtherMetadata:(id)arg1 forDocumentIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)entityName;
- (id)dictionaryRepresentation;
- (void)updateWithValuesFromDictionary:(id)arg1;

@end
