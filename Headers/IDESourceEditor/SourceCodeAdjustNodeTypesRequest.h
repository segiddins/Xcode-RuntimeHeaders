//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceEditor/DVTInvalidation-Protocol.h>

@class DVTPerformanceMetric, DVTStackBacktrace, IDEIndex, NSString, _TtC15IDESourceEditor18SourceCodeDocument;

@interface SourceCodeAdjustNodeTypesRequest : NSObject <DVTInvalidation>
{
    _TtC15IDESourceEditor18SourceCodeDocument *_document;
    CDUnknownBlockType _completionBlock;
    double _lastRescheduleTimestamp;
    DVTPerformanceMetric *_perfMetric;
    BOOL _started;
    IDEIndex *_workspaceIndex;
    struct _NSRange _dirtyCharacterRange;
}

+ (id)_indexQueriesOperationQueue;
+ (void)initialize;
@property(readonly) struct _NSRange dirtyCharacterRange; // @synthesize dirtyCharacterRange=_dirtyCharacterRange;
@property BOOL started; // @synthesize started=_started;
@property(readonly) IDEIndex *workspaceIndex; // @synthesize workspaceIndex=_workspaceIndex;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_processFoundSymbolResults:(id)arg1;
- (void)_batchProcessDirtyRange;
- (void)addSourceModelItem:(id)arg1;
- (id)initWithDocument:(id)arg1 workspaceIndex:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

