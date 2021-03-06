//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICCloudSyncingObject.h>

#import <NotesShared/ICCloudObject-Protocol.h>
#import <NotesShared/ICSearchIndexableNote-Protocol.h>
#import <NotesShared/NSTextStorageDelegate-Protocol.h>
#import <NotesShared/TTTextStorageDelegate-Protocol.h>

@class ICAccount, ICGroup, ICNoteData, NSData, NSDate, NSMutableSet, NSNumber, NSSet, NSString, NSUUID, TTTextStorage, TTVectorMultiTimestamp;

@interface ICNote : ICCloudSyncingObject <ICCloudObject, ICSearchIndexableNote, TTTextStorageDelegate, NSTextStorageDelegate>
{
    TTTextStorage *_textStorage;
    NSMutableSet *_connectedSockets;
    NSMutableSet *_connectedDevices;
    NSUUID *_uuid;
    _Bool needsRefresh;
    TTVectorMultiTimestamp *archivedTimestamp;
    NSData *decryptedData;
}

+ (id)defaultTitleForEmptyNote;
+ (unsigned long long)maxNoteTextLength;
+ (void)redactNote:(id)arg1;
+ (id)createNoteFromNote:(id)arg1 isPasswordProtected:(_Bool)arg2 removingOriginalNote:(_Bool)arg3;
+ (id)predicateForVisibleNotesIncludingTrash:(_Bool)arg1;
+ (id)predicateForSearchableNotes;
+ (id)predicateForVisibleNotes;
+ (id)predicateForNote:(id)arg1;
+ (id)newFetchRequestForNotesInContext:(id)arg1;
+ (unsigned long long)countOfNotesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)notesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (unsigned long long)countOfVisibleNotesInContext:(id)arg1;
+ (id)visibleNotesInContext:(id)arg1;
+ (unsigned long long)countOfAllNotesInContext:(id)arg1;
+ (id)allNotesInContext:(id)arg1;
+ (id)noteWithLegacyManagedObjectID:(id)arg1 context:(id)arg2;
+ (id)visibleNoteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)noteWithIdentifier:(id)arg1 includeDeleted:(_Bool)arg2 context:(id)arg3;
+ (id)noteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)noteWithUUID:(id)arg1 context:(id)arg2;
+ (id)refreshAllOfNoteWithIdentifier:(id)arg1 context:(id)arg2;
+ (void)purgeAllNotesInContext:(id)arg1;
+ (void)purgeNote:(id)arg1;
+ (void)deleteNote:(id)arg1;
+ (void)deleteEmptyNote:(id)arg1;
+ (id)newEmptyNoteWithUUID:(id)arg1 context:(id)arg2;
+ (id)newEmptyNoteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newEmptyNoteInContext:(id)arg1;
+ (id)newNoteInContext:(id)arg1;
+ (id)allCloudObjects;
+ (id)newCloudObjectForRecord:(id)arg1;
+ (id)existingCloudObjectForRecordID:(id)arg1;
+ (id)hexStringForColor:(struct UIColor *)arg1;
+ (_Bool)isDefaultColor:(struct UIColor *)arg1;
+ (id)tagDictionariesForAttributes:(id)arg1 attachmentConversionHandler:(CDUnknownBlockType)arg2;
+ (id)tagDictionaryForWrapperAroundParagraphStyle:(id)arg1;
+ (id)htmlStringFromAttributedString:(id)arg1 attachmentConversionHandler:(CDUnknownBlockType)arg2;
+ (void)fixFontsInAttributedString:(id)arg1;
+ (void)fixUnwantedCharactersInAttributedString:(id)arg1;
+ (void)fixDashedListsInAttributedString:(id)arg1;
+ (id)htmlStringByFixingDashedListsInHTMLString:(id)arg1;
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2;
+ (id)htmlObjectAttributesForAttachmentWithContentID:(id)arg1;
+ (id)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 readerDelegate:(id)arg3;
+ (id)attributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;
+ (id)attributedStringFromHTMLString:(id)arg1;
@property(retain) NSData *decryptedData; // @synthesize decryptedData;
@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh;
@property(copy, nonatomic) TTVectorMultiTimestamp *archivedTimestamp; // @synthesize archivedTimestamp;
- (void).cxx_destruct;
- (id)loggingDescriptionValues;
- (void)setLegacyManagedObjectID:(id)arg1;
@property(retain, nonatomic) NSSet *folders; // @dynamic folders;
- (void)setFolder:(id)arg1;
- (void)setNeedsInitialFetchFromCloud:(_Bool)arg1;
- (void)textStorageDidPerformUndo:(id)arg1;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)filterAttachmentsInTextStorage:(id)arg1 range:(struct _NSRange)arg2;
- (void)setNeedsSave;
- (void)save;
- (_Bool)isDeletedOrInTrash;
- (id)contentInfoText;
- (void)regenerateTitle;
- (struct _NSRange)rangeForTitle:(_Bool *)arg1;
- (void)regenerateSnippet;
- (struct _NSRange)rangeForSnippet;
- (void)saveAndClearDecryptedData;
- (id)parentEncryptableObject;
- (void)decrypt;
- (id)textDataDecryptedIfNecessary;
- (_Bool)supportsEncryptedValuesDictionary;
- (_Bool)hasTextStorage;
- (void)releaseTextStorage;
- (void)didTurnIntoFault;
- (void)willSave;
- (void)saveNoteData;
- (void)didChangeNoteText;
- (void)replaceWithDocument:(id)arg1;
- (unsigned long long)mergeWithNoteDocument:(id)arg1;
- (unsigned long long)mergeWithNoteData:(id)arg1;
- (void)refreshNoteTextFromDataStore;
- (struct _NSRange)rangeForAttachment:(id)arg1;
- (void)fetchThumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 cache:(id)arg3 cacheKey:(id)arg4 processingBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (struct UIImage *)thumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 imageScaling:(unsigned long long *)arg3 showAsFileIcon:(_Bool *)arg4 isMovie:(_Bool *)arg5 movieDuration:(CDStruct_198678f7 *)arg6;
- (_Bool)hasThumbnailImage;
- (id)attachmentFromRemoteFileWrapper:(id)arg1;
- (id)attachmentFromLegacyAttachmentFileWrapper:(id)arg1;
- (id)attachmentFromStandardFileWrapper:(id)arg1;
- (id)attachmentFromObject:(id)arg1 createIfNecessary:(_Bool)arg2;
- (id)attachmentActivityItemsForSharing;
- (id)visibleAttachments;
- (_Bool)isTooLargeForPasswordProtection;
- (_Bool)containsAttachmentsUnsupportedInPasswordProtection;
- (_Bool)attachmentExceedsMaxSizeAllowed:(unsigned long long)arg1;
- (_Bool)canAddAttachments:(unsigned long long)arg1;
- (_Bool)canAddAttachment;
- (void)unmarkForDeletion;
- (void)markForDeletion;
- (_Bool)requiresLegacyTombstoneAfterDeletion;
- (_Bool)allowsNewTextLength:(unsigned long long)arg1;
- (_Bool)isEditable;
- (_Bool)isVisible;
- (_Bool)isEmpty;
- (id)noteAsPlainTextWithoutTitle;
- (id)noteAsPlainText;
@property(retain, nonatomic) TTTextStorage *textStorage;
- (id)uuid;
- (id)connectedSockets;
- (id)connectedDevices;
- (void)setNoteType:(unsigned long long)arg1;
- (unsigned long long)noteType;
- (id)folder;
- (id)attachmentWithIdentifier:(id)arg1;
- (id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filename:(id)arg3;
- (id)addAttachment;
- (id)addURLAttachmentWithURL:(id)arg1;
- (id)addAttachmentWithUTI:(id)arg1 withData:(id)arg2 filenameExtension:(id)arg3;
- (id)addAttachmentWithUTI:(id)arg1 withURL:(id)arg2;
- (id)addAttachmentWithRemoteFileURL:(id)arg1;
- (id)addAttachmentWithFileWrapper:(id)arg1;
- (id)addAttachmentWithFileURL:(id)arg1;
- (id)addAttachmentWithData:(id)arg1 filename:(id)arg2;
- (id)addAttachmentWithIdentifier:(id)arg1;
- (void)resetUniqueIdentifier;
- (id)attachmentForWebThumbnail;
- (void)deduplicateSelfAndCreateNewObjectFromRecord:(id)arg1;
- (long long)mergePolicyForRecord:(id)arg1;
- (_Bool)supportsDeletionByTTL;
- (void)deleteFromLocalDatabase;
- (id)objectsToBeDeletedBeforeThisObject;
- (_Bool)hasAllMandatoryFields;
- (void)fixBrokenReferences;
- (_Bool)isInICloudAccount;
- (id)threadUnsafeNewlyCreatedRecord;
- (void)mergeFoldersFromRecord:(id)arg1;
- (void)mergeTextData:(id)arg1 record:(id)arg2 mergePolicy:(long long)arg3;
- (void)mergeTextDataFromRecord:(id)arg1 mergePolicy:(long long)arg2;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (void)mergeDataFromRecord:(id)arg1 withMergePolicy:(long long)arg2;
- (void)mergeDataFromRecord:(id)arg1;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (id)recordType;
- (id)recordZoneID;
- (id)recordName;
- (id)htmlStringWithAttachmentConversionHandler:(CDUnknownBlockType)arg1;
- (id)htmlStringWithAttachments:(_Bool)arg1;
- (id)htmlString;
- (void)releaseMemoryForIndexing;
- (id)searchableItemAttributeSet;
- (id)searchDomainIdentifier;
- (id)searchableItemIdentifier;
- (id)searchableContentKeyPaths;
- (_Bool)shouldUpdateIndexForChangedValues:(id)arg1;
- (id)searchIndexStringsOutHasAdditionalStrings:(_Bool *)arg1;
- (id)dateForCurrentSortType;
- (_Bool)isHiddenFromSearch;
- (_Bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultsSection;
- (id)searchIndexableTitleUsingContentTextIfNecessary:(id)arg1;
- (id)objectIdentifier;
- (long long)visibilityTestingType;

// Remaining properties
@property(retain, nonatomic) ICAccount *account; // @dynamic account;
@property(nonatomic) short attachmentViewType; // @dynamic attachmentViewType;
@property(retain, nonatomic) NSSet *attachments; // @dynamic attachments;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDate *foldersModificationDate; // @dynamic foldersModificationDate;
@property(retain, nonatomic) ICGroup *group; // @dynamic group;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *integerId; // @dynamic integerId;
@property(retain, nonatomic) NSString *legacyContentHashAtImport; // @dynamic legacyContentHashAtImport;
@property(retain, nonatomic) NSString *legacyImportDeviceIdentifier; // @dynamic legacyImportDeviceIdentifier;
@property(retain, nonatomic) NSString *legacyManagedObjectIDURIRepresentation; // @dynamic legacyManagedObjectIDURIRepresentation;
@property(retain, nonatomic) NSDate *legacyModificationDateAtImport; // @dynamic legacyModificationDateAtImport;
@property(retain, nonatomic) NSNumber *legacyNoteIntegerId; // @dynamic legacyNoteIntegerId;
@property(retain, nonatomic) NSNumber *legacyNoteWasPlainText; // @dynamic legacyNoteWasPlainText;
@property(retain, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(retain, nonatomic) ICNoteData *noteData; // @dynamic noteData;
@property(retain, nonatomic) NSNumber *noteHasChanges; // @dynamic noteHasChanges;
@property(retain, nonatomic) NSString *snippet; // @dynamic snippet;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *thumbnailAttachmentIdentifier; // @dynamic thumbnailAttachmentIdentifier;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSNumber *type; // @dynamic type;

@end

