//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYPlaybackEngine;
@protocol DYCaptureStore;

@interface DYFunctionPlayer : NSObject
{
    CDUnknownFunctionPointerType _executePlatform;
    SEL _executePlatformSEL;
    CDUnknownFunctionPointerType _executeGraphics;
    SEL _executeGraphicsSEL;
    CDUnknownFunctionPointerType _shouldExecuteGraphics;
    SEL _shouldExecuteGraphicsSEL;
    CDUnknownFunctionPointerType _isFrameBoundary;
    SEL _isFrameBoundarySEL;
    struct MemoryManager _memoryManager;
    struct SequenceCache _functionIndexSequence;
    void *_pointers[16];
    unsigned int _pointers_alloc_bitfield;
    id <DYCaptureStore> _captureStore;
    unsigned int _frameCounter;
    BOOL _lastCommandWasFrameBoundary;
    BOOL _skipOptionalFunctions;
    DYPlaybackEngine *_engine;
    BOOL _mainExecutionMode;
    unsigned int _currentExecutionModeFunctionIndex;
    unsigned int _currentFileFunctionIndex;
    unordered_map_82d59a1a _dataSizeMap;
    struct VariableCache _variables;
    unsigned long long _ctxID;
    struct CoreFunction *_function;
    void *_argumentPointers[16];
    void *_retval_buffer;
}

+ (struct CGSize)shrinkSourceSize:(struct CGSize)arg1 toDestSize:(struct CGSize)arg2;
@property(readonly, nonatomic) unsigned int currentExecutionModeFunctionIndex; // @synthesize currentExecutionModeFunctionIndex=_currentExecutionModeFunctionIndex;
@property(readonly, nonatomic) unsigned int currentFileFunctionIndex; // @synthesize currentFileFunctionIndex=_currentFileFunctionIndex;
@property(readonly, nonatomic) BOOL mainExecutionMode; // @synthesize mainExecutionMode=_mainExecutionMode;
@property(nonatomic) unsigned int frameCounter; // @synthesize frameCounter=_frameCounter;
@property(nonatomic) BOOL skipOptionalFunctions; // @synthesize skipOptionalFunctions=_skipOptionalFunctions;
@property(nonatomic) __weak DYPlaybackEngine *engine; // @synthesize engine=_engine;
@property(readonly, nonatomic) struct CoreFunction *function; // @synthesize function=_function;
@property(readonly, nonatomic) unsigned long long ctxID; // @synthesize ctxID=_ctxID;
@property(readonly, retain, nonatomic) id <DYCaptureStore> captureStore; // @synthesize captureStore=_captureStore;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setCurrentContext:(unsigned long long)arg1;
- (void)executeGraphicsFunction;
- (void)executePlatformFunction;
- (BOOL)shouldExecuteGraphicsFunction;
- (void)processArguments;
- (void)addPointerDataSizeMap:(unordered_map_82d59a1a *)arg1;
- (void *)copyDataForPosition:(unsigned long long)arg1 dataSize:(unsigned long long *)arg2;
- (void *)copyDataForFilename:(const char *)arg1 dataSize:(unsigned long long *)arg2;
- (void)executeFunctions:(struct CoreFunction *)arg1 count:(unsigned long long)arg2;
- (BOOL)isFrameBoundary;
- (void)performPostDispatchFrameBoundaryActions;
- (void)performPreDispatchFrameBoundaryActions;
- (void)performNewFrameActions;
- (void)performNewExecutionFileActions;
- (void)prepareForCaptureExecution;
- (void)prepareForNonCaptureExecution;
- (void)dealloc;
- (id)initWithCaptureStore:(id)arg1;
- (id)init;

@end

