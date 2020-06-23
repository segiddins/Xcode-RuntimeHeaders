//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_$s15IDESourceEditor18SourceCodeDocumentCN.h"

#import <IDEPegasusPlaygroundEditor/IDEPlaygroundExecutionDeviceViewContentReceiver-Protocol.h>
#import <IDEPegasusPlaygroundEditor/IDEPlaygroundExecutionSessionDelegate-Protocol.h>
#import <IDEPegasusPlaygroundEditor/IDEPlaygroundHostingDocument-Protocol.h>
#import <IDEPegasusPlaygroundEditor/IDEToyboxDelegate-Protocol.h>

@class IDEPlaygroundPageSharedContext, IDEPlaygroundSharedContext, IDEToybox, MISSING_TYPE, NSArray, NSDictionary, NSMutableArray, NSString, NSURL;

@interface _TtC26IDEPegasusPlaygroundEditor18PlaygroundDocument : _$s15IDESourceEditor18SourceCodeDocumentCN <IDEPlaygroundHostingDocument, IDEPlaygroundExecutionSessionDelegate, IDEToyboxDelegate, IDEPlaygroundExecutionDeviceViewContentReceiver>
{
    MISSING_TYPE *notificationTokens;
    MISSING_TYPE *observationTokens;
    MISSING_TYPE *documentObservers;
    MISSING_TYPE *diagnosticsLog;
    MISSING_TYPE *isLegacyDocument;
    MISSING_TYPE *currentUUID;
    MISSING_TYPE *originalContentURLDuringSave;
    MISSING_TYPE *originalSwiftContents;
    MISSING_TYPE *executionSession;
    MISSING_TYPE *executionRanges;
    MISSING_TYPE *stashedExecutionRanges;
    MISSING_TYPE *expressionStopwatch;
    MISSING_TYPE *executionState;
    MISSING_TYPE *executionIssues;
    MISSING_TYPE *preparationParametersWrapper;
    MISSING_TYPE *consoleItems;
    MISSING_TYPE *toybox;
    MISSING_TYPE *playgroundResultsGeneration;
    MISSING_TYPE *isReadingFromURL;
    MISSING_TYPE *isWritingToURL;
    MISSING_TYPE *isResettingWholeDocument;
    MISSING_TYPE *userHadDiagnosticsEnabled;
    MISSING_TYPE *auxiliarySourceCompilationInProgress;
    MISSING_TYPE *playgroundExpressionIsComplete;
    MISSING_TYPE *shouldExecuteWhenSessionIsReady;
    MISSING_TYPE *executionSessionSetupFailed;
    MISSING_TYPE *shouldIgnoreExecutionErrors;
    MISSING_TYPE *lastExpressionDidComplete;
    MISSING_TYPE *_playgroundContext;
    MISSING_TYPE *_auxiliarySourceFrameworks;
    MISSING_TYPE *lastExecutedLineContent;
    MISSING_TYPE *skipCancelExecutionOnNextEdit;
    MISSING_TYPE *_firstEditorWorkspaceBuildSettings;
    MISSING_TYPE *playgroundSections;
    MISSING_TYPE *sourceCodePlaygroundSections;
    MISSING_TYPE *_sourceCodePlaygroundSectionCharacterRanges;
}

+ (id)keyPathsForValuesAffectingPlaygroundPageContext;
+ (id)keyPathsForValuesAffectingPlaygroundContext;
- (void).cxx_destruct;
- (void)toggleDisplayMode:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (struct _NSRange)lineRangeForLineRange:(struct _NSRange)arg1 fromTimestamp:(double)arg2 toTimestamp:(double)arg3;
@property(nonatomic, readonly) NSArray *sourceCodePlaygroundSectionCharacterRanges;
@property(nonatomic, copy) NSArray *sourceCodePlaygroundSections;
@property(nonatomic, copy) NSArray *playgroundSections;
@property(nonatomic, readonly) NSString *contents;
- (void)pegasusUpgradeFormat:(id)arg1;
- (void)unregisterDocumentEditor:(id)arg1;
- (void)viewContentProvider:(id)arg1 didUpdateIOSurfaceID:(unsigned int)arg2 screenSize:(struct CGSize)arg3;
- (void)toybox:(id)arg1 didRemoveToy:(id)arg2;
- (void)toybox:(id)arg1 didAddToy:(id)arg2;
- (void)toyboxArchivableStateDidChange:(id)arg1;
- (void)playgroundExecutionSession:(id)arg1 didEncounterError:(id)arg2;
- (void)playgroundExecutionSession:(id)arg1 didReceiveConsoleItem:(id)arg2;
- (void)playgroundExecutionSession:(id)arg1 didReceiveResult:(id)arg2;
- (void)playgroundExecutionSessionDidFinishExecution:(id)arg1;
- (void)playgroundExecutionSessionWillFinishExecution:(id)arg1;
- (void)playgroundExecutionSessionDidFailExpression:(id)arg1;
- (void)playgroundExecutionSessionDidCompleteExpression:(id)arg1;
- (void)playgroundExecutionSessionWillBeginExpression:(id)arg1;
- (void)playgroundExecutionSession:(id)arg1 didMoveToState:(unsigned long long)arg2;
@property(nonatomic, readonly) NSDictionary *buildSettings;
- (void)playgroundExecutionSessionDidBeginExecution:(id)arg1;
- (void)playgroundExecutionSessionWillBeginExecution:(id)arg1;
- (id)fileWrapperOfType:(id)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)editorDocumentWillClose;
- (id)init;
@property(nonatomic, copy) NSString *displayName;
@property(nonatomic, readonly) IDEPlaygroundPageSharedContext *playgroundPageContext;
@property(nonatomic, readonly) IDEPlaygroundSharedContext *playgroundContext;
@property(nonatomic, retain) IDEPlaygroundSharedContext *_playgroundContext; // @synthesize _playgroundContext;
@property(nonatomic, copy) NSURL *fileURL;
@property(nonatomic, retain) IDEToybox *toybox; // @synthesize toybox;
@property(nonatomic, retain) NSMutableArray *consoleItems; // @synthesize consoleItems;
@property(nonatomic, copy) NSArray *executionIssues;
@property(nonatomic) unsigned long long executionState; // @synthesize executionState;
- (BOOL)dvt_shouldShowDocumentDirtyState;
@property(nonatomic, readonly) BOOL isLegacyDocument; // @synthesize isLegacyDocument;

@end
