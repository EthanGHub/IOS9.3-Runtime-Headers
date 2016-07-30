//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDSpecStroke.h>

@class TSDStrokePattern, TSUColor;

__attribute__((visibility("hidden")))
@interface TSDSpecStrokeSetPattern : TSDSpecStroke
{
    TSDStrokePattern *_pattern;
    int _lineCap;
    int _lineJoin;
    double _miterLimit;
    double _width;
    TSUColor *_color;
    _Bool _definedLineCap;
    _Bool _definedLineJoin;
    _Bool _definedMiterLimit;
    _Bool _definedWidth;
    _Bool _definedColor;
}

+ (id)newFromArchive:(const struct SpecStrokeSetPatternArchive *)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct SpecStrokeSetPatternArchive *)arg2 archiver:(id)arg3;
- (id)operationPropertyName;
- (id)apply:(id)arg1;
- (_Bool)canApplyOnObject:(id)arg1;
- (id)strokeModifiedFromStroke:(id)arg1;
- (id)initWithCurrentProperty:(id)arg1;
- (id)initSpecStrokeSetPatternWithArchive:(const struct SpecStrokeSetPatternArchive *)arg1 unarchiver:(id)arg2;
- (void)saveSpecStrokeSetPatternToArchive:(struct SpecStrokeSetPatternArchive *)arg1 archiver:(id)arg2;

@end
