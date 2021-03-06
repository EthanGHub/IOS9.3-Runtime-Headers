//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKSmoothPathViewDelegate-Protocol.h>

@class AKAnnotation, AKCandidatePickerView_iOS, AKController, AKPageModelController, AKSmoothPathView, CHDrawing, CHRecognizer, NSMutableArray, NSMutableDictionary, NSString;

@interface AKIntelligentSketchController : NSObject <AKSmoothPathViewDelegate>
{
    _Bool _preferDoodle;
    _Bool _shapeDetectionEnabled;
    _Bool _selectNewlyCreatedAnnotations;
    _Bool _pressureSensitiveDoodleMode;
    _Bool _ignoreAnnotationAndSelectionKVO;
    _Bool _isShowingOverlay;
    AKSmoothPathView *_intelligentSketchOverlayView;
    AKPageModelController *_modelControllerToObserveForAnnotationsAndSelections;
    double _veryHighConfidenceLevel;
    AKController *_controller;
    CHDrawing *_lastDrawing;
    CHRecognizer *_shapeRecognizer;
    AKAnnotation *_candidateAnnotation;
    CHDrawing *_candidateDrawing;
    NSMutableArray *_candidateAKTags;
    NSMutableDictionary *_candidateAKTagsToCHElementMap;
    AKCandidatePickerView_iOS *_candidatePickerView;
}

@property(retain, nonatomic) AKCandidatePickerView_iOS *candidatePickerView; // @synthesize candidatePickerView=_candidatePickerView;
@property _Bool isShowingOverlay; // @synthesize isShowingOverlay=_isShowingOverlay;
@property _Bool ignoreAnnotationAndSelectionKVO; // @synthesize ignoreAnnotationAndSelectionKVO=_ignoreAnnotationAndSelectionKVO;
@property(retain) NSMutableDictionary *candidateAKTagsToCHElementMap; // @synthesize candidateAKTagsToCHElementMap=_candidateAKTagsToCHElementMap;
@property(retain) NSMutableArray *candidateAKTags; // @synthesize candidateAKTags=_candidateAKTags;
@property(retain) CHDrawing *candidateDrawing; // @synthesize candidateDrawing=_candidateDrawing;
@property __weak AKAnnotation *candidateAnnotation; // @synthesize candidateAnnotation=_candidateAnnotation;
@property(retain, nonatomic) CHRecognizer *shapeRecognizer; // @synthesize shapeRecognizer=_shapeRecognizer;
@property(retain) CHDrawing *lastDrawing; // @synthesize lastDrawing=_lastDrawing;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property double veryHighConfidenceLevel; // @synthesize veryHighConfidenceLevel=_veryHighConfidenceLevel;
@property _Bool pressureSensitiveDoodleMode; // @synthesize pressureSensitiveDoodleMode=_pressureSensitiveDoodleMode;
@property(retain, nonatomic) AKPageModelController *modelControllerToObserveForAnnotationsAndSelections; // @synthesize modelControllerToObserveForAnnotationsAndSelections=_modelControllerToObserveForAnnotationsAndSelections;
@property(retain, nonatomic) AKSmoothPathView *intelligentSketchOverlayView; // @synthesize intelligentSketchOverlayView=_intelligentSketchOverlayView;
@property(nonatomic) _Bool selectNewlyCreatedAnnotations; // @synthesize selectNewlyCreatedAnnotations=_selectNewlyCreatedAnnotations;
@property(nonatomic, getter=shapeDetectionEnabled) _Bool shapeDetectionEnabled; // @synthesize shapeDetectionEnabled=_shapeDetectionEnabled;
@property(nonatomic) _Bool preferDoodle; // @synthesize preferDoodle=_preferDoodle;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_pickCandidateResult:(id)arg1;
- (void)_teardownCandidatePickerBar;
- (void)_presentCandidatePickerBarWithCandidates:(id)arg1 ofDrawing:(id)arg2;
- (id)_convertDrawingBoundsInInputView:(struct CGRect)arg1 outBoundsInPageModel:(struct CGRect *)arg2;
- (id)_convertRichBrushStrokesInInputView:(id)arg1 toPage:(id)arg2;
- (id)_createDoodleShapeResultFromCGPath:(struct CGPath *)arg1 withDrawingCenter:(struct CGPoint)arg2;
- (id)_createDoodleShapeResultFromRichBrushStrokePoints:(id)arg1 withDrawingCenter:(struct CGPoint)arg2;
- (id)_createFlippedCHDrawingFromCHDrawing:(id)arg1 withDrawingCenter:(struct CGPoint)arg2;
- (id)_createCHDrawingFromRichBrushStrokes:(id)arg1;
- (id)_createAnnotationWithRecognizerResult:(id)arg1 forDrawingBoundsInInputView:(struct CGRect)arg2 shouldGoToPageController:(id *)arg3;
- (void)_logCollectedBrushStrokes:(id)arg1 andPath:(struct CGPath *)arg2;
- (void)_logAllResults:(id)arg1;
- (_Bool)_isResultVeryHighConfidence:(id)arg1;
- (long long)_toolTagForCHRecognitionResult:(id)arg1;
- (_Bool)_shouldSelectCandidate:(id)arg1;
- (void)_teardownCandidatePicker;
- (void)_showCandidatePickerWithTypes:(id)arg1 forDrawingInInputView:(id)arg2 shouldSurfaceDoodle:(_Bool)arg3;
- (void)_inputView:(id)arg1 didCollectRichBrushStrokePoints:(id)arg2 orPath:(struct CGPath *)arg3;
- (void)inputView:(id)arg1 didCollectRichBrushStrokePoints:(id)arg2;
- (void)inputView:(id)arg1 didCollectPath:(struct CGPath *)arg2;
- (void)inputViewWillStartDrawing:(id)arg1;
- (void)logLastDrawingToDisk;
- (void)_clearPreviousCandidateAnnotation;
- (void)dismissCandidatePicker;
- (_Bool)isShowingCandidatePicker;
- (void)updateStrokeAttributes;
- (void)handleDragAction:(id)arg1;
- (void)handleTapAction:(id)arg1;
- (void)handleForwardedEvent:(id)arg1;
- (struct CGRect)_frameForOurOverlayInHostingView:(id)arg1;
- (void)updateOverlayBoundsAndBackingScale:(id)arg1;
- (void)enclosingScrollViewNotification:(id)arg1;
- (void)removeOverlay;
- (void)showOverlay;
- (void)dealloc;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

