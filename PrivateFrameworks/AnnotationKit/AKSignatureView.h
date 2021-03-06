//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AKRichBrushStroke, CHBoxcarFilterPointFIFO, CHPointStrokeFIFO, CHQuadCurvePointFIFO, NSArray, NSMutableArray, UIColor;

@interface AKSignatureView : UIView
{
    NSMutableArray *_strokes;
    struct CGColor *_cgColor;
    struct CGPoint _lastPoint;
    id _trackingTouchID;
    _Bool _isAddingPointWithoutSmoothing;
    UIColor *_strokeColor;
    double _minPressure;
    double _maxPressure;
    double _minThickness;
    double _maxThickness;
    AKRichBrushStroke *_currentBrushStroke;
    double _currentWeight;
    unsigned long long _totalPointsAdded;
    double _strokeStartTime;
    CHPointStrokeFIFO *_strokeFIFO;
    CHBoxcarFilterPointFIFO *_boxcarFIFO;
    CHQuadCurvePointFIFO *_interpolatingFIFO;
    struct CGPoint _strokeStartLocation;
    struct CGPoint _strokeLastLocation;
    // Error parsing type: , name: _lastVectorPoint
    struct CGRect _aggregateInvalid;
    struct CGRect _unionDrawingRect;
}

@property(nonatomic) struct CGRect unionDrawingRect; // @synthesize unionDrawingRect=_unionDrawingRect;
@property(nonatomic) struct CGRect aggregateInvalid; // @synthesize aggregateInvalid=_aggregateInvalid;
@property(retain, nonatomic) CHQuadCurvePointFIFO *interpolatingFIFO; // @synthesize interpolatingFIFO=_interpolatingFIFO;
@property(retain, nonatomic) CHBoxcarFilterPointFIFO *boxcarFIFO; // @synthesize boxcarFIFO=_boxcarFIFO;
@property(retain, nonatomic) CHPointStrokeFIFO *strokeFIFO; // @synthesize strokeFIFO=_strokeFIFO;
// Error parsing type for property lastVectorPoint:
// Property attributes: T,V_lastVectorPoint

@property _Bool isAddingPointWithoutSmoothing; // @synthesize isAddingPointWithoutSmoothing=_isAddingPointWithoutSmoothing;
@property double strokeStartTime; // @synthesize strokeStartTime=_strokeStartTime;
@property struct CGPoint strokeLastLocation; // @synthesize strokeLastLocation=_strokeLastLocation;
@property struct CGPoint strokeStartLocation; // @synthesize strokeStartLocation=_strokeStartLocation;
@property unsigned long long totalPointsAdded; // @synthesize totalPointsAdded=_totalPointsAdded;
@property(nonatomic) double currentWeight; // @synthesize currentWeight=_currentWeight;
@property(retain, nonatomic) AKRichBrushStroke *currentBrushStroke; // @synthesize currentBrushStroke=_currentBrushStroke;
@property(nonatomic) double maxThickness; // @synthesize maxThickness=_maxThickness;
@property(nonatomic) double minThickness; // @synthesize minThickness=_minThickness;
@property(nonatomic) double maxPressure; // @synthesize maxPressure=_maxPressure;
@property(nonatomic) double minPressure; // @synthesize minPressure=_minPressure;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) NSArray *strokes; // @synthesize strokes=_strokes;
- (void).cxx_destruct;
- (void)handleCoalescedTouches:(id)arg1 forTouch:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)weightForTouch:(id)arg1;
- (_Bool)ak_forceAvailableForTouch:(id)arg1;
- (double)weightForValue:(double)arg1;
- (void)terminateStroke;
- (void)continueStrokeWithoutSmoothing: /* Error: Ran out of types for this method. */;
- (void)continueStroke: /* Error: Ran out of types for this method. */;
- (void)startStroke: /* Error: Ran out of types for this method. */;
- (void)setFrame:(struct CGRect)arg1;
- (void)clear;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) double interfaceScale;
- (double)_windowBackingScaleFactor;
- (void)deferredInvalidate:(id)arg1;
- (struct CGPath *)copyStrokedInterpolatedPath;
@property(readonly, nonatomic) struct CGRect strokesBounds;
- (void)teardown;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

