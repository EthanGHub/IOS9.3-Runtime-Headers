//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDrawing, ICDrawingController, ICDrawingUndoCheckPoint, NSMutableArray, NSOperationQueue, NSUndoManager;

@interface ICDrawingUndoStack : NSObject
{
    ICDrawing *_drawing;
    NSMutableArray *_undoStack;
    NSMutableArray *_redoStack;
    NSMutableArray *_checkPointCommands;
    NSOperationQueue *_operationQueue;
    ICDrawingController *_drawingController;
    NSUndoManager *_undoManager;
    ICDrawingUndoCheckPoint *_initialCheckPoint;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSMutableArray *checkPointCommands; // @synthesize checkPointCommands=_checkPointCommands;
@property(retain, nonatomic) NSMutableArray *redoStack; // @synthesize redoStack=_redoStack;
@property(retain, nonatomic) NSMutableArray *undoStack; // @synthesize undoStack=_undoStack;
@property(retain, nonatomic) ICDrawingUndoCheckPoint *initialCheckPoint; // @synthesize initialCheckPoint=_initialCheckPoint;
@property(nonatomic) __weak ICDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(nonatomic) __weak ICDrawingController *drawingController; // @synthesize drawingController=_drawingController;
- (void).cxx_destruct;
- (void)didUndoOrRedo:(id)arg1;
- (void)performRedo;
- (void)redo;
- (void)performUndo;
- (void)undo;
- (void)undoManagerCommand:(id)arg1;
- (id)findUndoCheckPointRenderCostOut:(double *)arg1 commandsAfterOut:(id *)arg2;
- (void)addEraseUndoCommand;
- (id)applyCommandFromStack:(id)arg1 toStack:(id)arg2;
- (void)applyUndoCommand:(id)arg1;
- (void)didRemoveCheckPoint;
- (void)didAddCheckPoint;
- (void)checkIfNewCheckPointIsNeeded;
- (void)didAddNewCommand:(id)arg1;
- (void)addUndoCommand:(id)arg1;
@property(readonly, nonatomic) unsigned long long undoStackDepth; // @dynamic undoStackDepth;
- (void)setInitialImage:(struct CGImage *)arg1 forCommands:(id)arg2;
- (void)reset;
- (void)dealloc;
- (id)initWithDrawing:(id)arg1;

@end

