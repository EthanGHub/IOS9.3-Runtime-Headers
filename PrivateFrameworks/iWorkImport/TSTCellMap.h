//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSMutableArray, TSTCellUIDList;

__attribute__((visibility("hidden")))
@interface TSTCellMap : TSPObject <NSCopying>
{
    vector_40b16ab8 _cellIDs;
    NSMutableArray *_mergeActions;
    _Bool _appliesToHidden;
    _Bool _mayModifyFormulasInCells;
    _Bool _mayModifyValuesReferencedByFormulas;
    _Bool _uidBased;
    _Bool _oneToMany;
    TSTCellUIDList *_cellUIDs;
    NSMutableArray *_cellLists;
    unordered_map_db78ad4f *_searchableIDMap;
    unordered_map_da379038 *_searchableUIDMap;
}

+ (id)cellMapWithContext:(id)arg1;
+ (id)uuidBasedCellMapWithContext:(id)arg1;
@property(readonly, nonatomic, getter=isOneToMany) _Bool oneToMany; // @synthesize oneToMany=_oneToMany;
@property(nonatomic, getter=isUIDBased) _Bool uidBased; // @synthesize uidBased=_uidBased;
@property(nonatomic) unordered_map_da379038 *searchableUIDMap; // @synthesize searchableUIDMap=_searchableUIDMap;
@property(nonatomic) unordered_map_db78ad4f *searchableIDMap; // @synthesize searchableIDMap=_searchableIDMap;
@property(nonatomic) _Bool mayModifyValuesReferencedByFormulas; // @synthesize mayModifyValuesReferencedByFormulas=_mayModifyValuesReferencedByFormulas;
@property(nonatomic) _Bool mayModifyFormulasInCells; // @synthesize mayModifyFormulasInCells=_mayModifyFormulasInCells;
@property(nonatomic) _Bool appliesToHidden; // @synthesize appliesToHidden=_appliesToHidden;
@property(retain, nonatomic) NSMutableArray *cellLists; // @synthesize cellLists=_cellLists;
@property(retain, nonatomic) TSTCellUIDList *cellUIDs; // @synthesize cellUIDs=_cellUIDs;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)p_cellCount;
- (void)p_resolveCellIDsToUUIDsByTableInfo:(id)arg1 preserveHostCells:(_Bool)arg2;
- (void)p_resolveUUIDsToCellIDsByTableInfo:(id)arg1;
- (id)p_addCell:(id)arg1;
- (id)p_cellAtIndex:(unsigned long long)arg1 inCellListArray:(id)arg2;
- (id)cellMapMaskedByUIDs:(const vector_dadc1b26 *)arg1 inRows:(_Bool)arg2;
- (id)uuidBasedCellMapByTableInfo:(id)arg1;
- (id)uuidBasedCellMapByTableInfo:(id)arg1 preserveHostCells:(_Bool)arg2;
- (id)cellIDBasedCellMapByTableInfo:(id)arg1;
- (void)clearMerges;
- (void)remapUIDsByColumnMap:(const struct TSUUuidMap *)arg1 rowMap:(const struct TSUUuidMap *)arg2 ownerMap:(const struct TSUUuidMap *)arg3;
- (void)popLastCell;
- (id)mergeActions;
- (void)addMergeActions:(id)arg1;
- (void)addHeadMergeAction:(id)arg1;
- (void)addMergeAction:(id)arg1;
- (void)addCell:(id)arg1 andCellID:(CDStruct_0441cfb5)arg2;
- (void)addCell:(id)arg1 andCellUID:(const struct TSTCellUID *)arg2;
- (id)changeDescriptorsForTable:(id)arg1;
- (id)findCellForCellUID:(const struct TSTCellUID *)arg1;
- (id)findCellForCellID:(CDStruct_0441cfb5)arg1;
- (_Bool)containsMergeChanges;
- (id)iterator;
- (const vector_40b16ab8 *)cellIDs;
- (void)enumerateCellsWithUIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCellsWithIDsUsingBlock:(CDUnknownBlockType)arg1;
- (const vector_dadc1b26 *)columnUIDs;
- (const vector_dadc1b26 *)rowUIDs;
- (id)cellAtIndex:(unsigned long long)arg1;
- (CDStruct_0441cfb5)cellIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 cell:(id)arg2 cellIDList:(const vector_40b16ab8 *)arg3;
- (id)initWithContext:(id)arg1 cell:(id)arg2 cellUIDList:(id)arg3;
- (id)initWithContext:(id)arg1 uidBased:(_Bool)arg2;
- (id)initWithContext:(id)arg1;

@end

