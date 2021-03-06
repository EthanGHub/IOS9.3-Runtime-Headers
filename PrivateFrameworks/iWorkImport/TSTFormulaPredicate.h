//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TSTFormulaPredicate : NSObject <NSCopying>
{
    struct TSCEFormula mFormula;
    int mPredicateType;
    int mQualifier1;
    int mQualifier2;
    int mArgIndex0;
    int mArgIndex1;
    int mArgIndex2;
    _Bool mParamsAreDone;
    unsigned char mNodeTag0;
    unsigned char mNodeTag1;
    unsigned char mNodeTag2;
    double mNumberParam1;
    double mNumberParam2;
    NSString *mStringParam1;
    NSDate *mDateTimeParam1;
    NSDate *mDateTimeParam2;
    struct TSCENumberValue *mDurationParam1;
    struct TSCENumberValue *mDurationParam2;
    struct TSCEASTNodeCrossTableCellReference mCrossTableRefParam0;
    struct TSCEASTNodeCrossTableCellReference mCrossTableRefParam1;
    struct TSCEASTNodeCrossTableCellReference mCrossTableRefParam2;
    struct TSCEASTNodeCrossTableRowReference mCrossTableRowRefParam0;
    struct TSCEASTNodeCrossTableRowReference mCrossTableRowRefParam1;
    struct TSCEASTNodeCrossTableRowReference mCrossTableRowRefParam2;
    struct TSCEASTNodeCrossTableColumnReference mCrossTableColumnRefParam0;
    struct TSCEASTNodeCrossTableColumnReference mCrossTableColumnRefParam1;
    struct TSCEASTNodeCrossTableColumnReference mCrossTableColumnRefParam2;
    CDStruct_9527dae1 mPredicateArgs[2];
}

+ (_Bool)isThresholdNeededForType:(int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initFromArchive:(const struct FormulaPredicateArchive *)arg1;
- (void)encodeToArchive:(struct FormulaPredicateArchive *)arg1 archiver:(id)arg2;
- (id)copyByUpdatingLinkedTable:(const UUIDData_5fbc143e *)arg1 hostCell:(CDStruct_0441cfb5)arg2;
- (id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2;
- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(CDStruct_0441cfb5)arg3;
- (id)copyByRemappingOwnerUIDsWithMap:(const struct TSUUuidMap *)arg1 calcEngine:(id)arg2 error:(_Bool *)arg3;
- (void)p_populateMembersFromFormula;
- (void)p_clearDerivedVariables;
- (id)description;
- (CDStruct_9527dae1 *)predicateArg2atHostCoordinate:(CDStruct_0441cfb5)arg1;
- (CDStruct_9527dae1 *)predicateArg1atHostCoordinate:(CDStruct_0441cfb5)arg1;
- (const struct TSCEASTNodeCrossTableRowReference *)crossTableRowRefParam2;
- (const struct TSCEASTNodeCrossTableRowReference *)crossTableRowRefParam1;
- (const struct TSCEASTNodeCrossTableRowReference *)crossTableRowRefParam0;
- (const struct TSCEASTNodeCrossTableColumnReference *)crossTableColumnRefParam2;
- (const struct TSCEASTNodeCrossTableColumnReference *)crossTableColumnRefParam1;
- (const struct TSCEASTNodeCrossTableColumnReference *)crossTableColumnRefParam0;
- (const struct TSCEASTNodeCrossTableCellReference *)crossTableRefParam2;
- (const struct TSCEASTNodeCrossTableCellReference *)crossTableRefParam1;
- (const struct TSCEASTNodeCrossTableCellReference *)crossTableRefParam0;
- (struct TSCENumberValue *)durationParam2;
- (struct TSCENumberValue *)durationParam1;
- (id)dateTimeParam2;
- (id)dateTimeParam1;
- (id)stringParam1;
- (double)numberParam2;
- (double)numberParam1;
- (unsigned char)nodeTag2;
- (unsigned char)nodeTag1;
- (unsigned char)nodeTag0;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withRowRef:(struct TSCEASTNodeCrossTableRowReference)arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withColumnRef:(struct TSCEASTNodeCrossTableColumnReference)arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withCellRef:(struct TSCEASTNodeCrossTableCellReference)arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDurationValue:(double)arg3 withUnit:(int)arg4;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDate:(id)arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withString:(id)arg3;
- (void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDouble:(double)arg3;
- (void)p_setParamIndex2:(int)arg1;
- (void)p_setParamIndex1:(int)arg1;
- (void)p_setParamIndex0:(int)arg1;
- (void)p_setQualifier2:(int)arg1;
- (void)p_setQualifier1:(int)arg1;
- (void)p_setPredicateType:(int)arg1;
- (int)qualifier2;
- (int)qualifier1;
- (int)predicateType;
- (void)setFormula:(const struct TSCEFormula *)arg1;
- (struct TSCEFormula *)formula;
- (_Bool)evaluateAtCellID:(CDStruct_0441cfb5)arg1 inFormulaOwner:(struct __CFUUID *)arg2 calculationEngine:(id)arg3;
- (_Bool)p_testDataTypesForArg0:(int)arg1 arg1:(int)arg2 arg2:(int)arg3 predShouldReturn:(_Bool *)arg4;
- (int)p_argTypeForNodeTag:(unsigned char)arg1 argNum:(unsigned long long)arg2 calculationEngine:(id)arg3 hostCell:(CDStruct_0441cfb5)arg4;
- (_Bool)containsUidReferences;
- (id)copyToGeometricFormForConditionalStylesWithTableModel:(id)arg1 containingCell:(CDStruct_0441cfb5)arg2;
- (id)copyToUidFormForConditionalStylesWithTableModel:(id)arg1 containingCell:(CDStruct_0441cfb5)arg2 preserveHostCell:(_Bool)arg3;
- (id)copyToGeometricFormForHiddenRowsWithTableModel:(id)arg1 containsBadRef:(_Bool *)arg2;
- (id)copyToUidFormForHiddenRowsWithTableModel:(id)arg1;
- (id)copyToGeometricFormWithCalcEngine:(id)arg1 tableID:(struct __CFUUID *)arg2 containingCell:(CDStruct_0441cfb5)arg3 containsBadRef:(_Bool *)arg4;
- (id)copyToUidFormWithCalcEngine:(id)arg1 tableID:(struct __CFUUID *)arg2 containingCell:(CDStruct_0441cfb5)arg3 preserveHostCell:(_Bool)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLiteralTextType:(int)arg1 string:(id)arg2 argumentCellReference:(CDStruct_78b871e1)arg3 hostCell:(CDStruct_0441cfb5)arg4;
- (id)initWithLiteralDurationType:(int)arg1 duration1:(struct TSTDurationWrapper)arg2 duration2:(struct TSTDurationWrapper)arg3 qualifier:(int)arg4 argumentCellReference:(CDStruct_78b871e1)arg5 hostCell:(CDStruct_0441cfb5)arg6;
- (id)initWithLiteralNumberType:(int)arg1 number1:(double)arg2 number2:(double)arg3 qualifier:(int)arg4 argumentCellReference:(CDStruct_78b871e1)arg5 hostCell:(CDStruct_0441cfb5)arg6;
- (id)initWithLiteralDateType:(int)arg1 date1:(id)arg2 date2:(id)arg3 number1:(double)arg4 number2:(double)arg5 qualifier1:(int)arg6 qualifier2:(int)arg7 argumentCellReference:(CDStruct_78b871e1)arg8 hostCell:(CDStruct_0441cfb5)arg9;
- (id)initWithLiteralDateType:(int)arg1 date1:(id)arg2 date2:(id)arg3 number1:(double)arg4 number2:(double)arg5 qualifier1:(int)arg6 qualifier2:(int)arg7 argumentCellReference:(CDStruct_78b871e1)arg8 hostCell:(CDStruct_0441cfb5)arg9 forConditionalStyle:(_Bool)arg10;
- (struct TSCEFormulaCreator)p_creatorForPeriodBoundaryWithScale:(int)arg1 direction:(int)arg2 offset:(CDStruct_9527dae1)arg3 argIndex:(unsigned int)arg4 earlierBound:(_Bool)arg5 isCalPers:(_Bool)arg6 hostCell:(CDStruct_0441cfb5)arg7;
- (id)initWithPredicateType:(int)arg1 arg1:(CDStruct_9527dae1)arg2 arg2:(CDStruct_9527dae1)arg3 qualifier1:(int)arg4 qualifier2:(int)arg5 argumentCellReference:(CDStruct_78b871e1)arg6 hostCell:(CDStruct_0441cfb5)arg7;
- (id)initWithPredicateType:(int)arg1 arg1:(CDStruct_9527dae1)arg2 arg2:(CDStruct_9527dae1)arg3 qualifier1:(int)arg4 qualifier2:(int)arg5 argumentCellReference:(CDStruct_78b871e1)arg6 hostCell:(CDStruct_0441cfb5)arg7 forConditionalStyle:(_Bool)arg8;
- (_Bool)isEqualForInspector:(id)arg1 atHostCoordinate:(CDStruct_0441cfb5)arg2;
- (_Bool)p_predicateArg:(CDStruct_9527dae1 *)arg1 isEqual:(CDStruct_9527dae1 *)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)p_isEqualForNonFormulaItems:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;

@end

