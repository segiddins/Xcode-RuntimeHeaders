//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractClassDescriptionBackedWorkspaceDocumentClassProvider.h>

@class DVTDelayedInvocation, DVTNotificationToken, DVTObservingToken, IBSourceCodeParserRegistry, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSObject, NSSet, NSString;
@protocol DVTInvalidation, OS_dispatch_queue;

@interface IBSourceCodeClassProvider : IBAbstractClassDescriptionBackedWorkspaceDocumentClassProvider
{
    DVTDelayedInvocation *_batchedParsingInvocation;
    NSObject<OS_dispatch_queue> *_scanningQueue;
    IBSourceCodeParserRegistry *_parserRegistry;
    NSMutableDictionary *_workspaceWorkItems;
    NSMutableArray *_workItemQueueFromLastStart;
    NSDictionary *_workspaceFrameworkConflictWinners;
    id <DVTInvalidation> _containerContentObservation;
    DVTObservingToken *_editorDocumentsObservingToken;
    DVTNotificationToken *_editorDocumentDidChangeToken;
    NSSet *_openEditorDocumentPaths;
    NSMutableOrderedSet *_observers;
    BOOL _invalidating;
    double _throttleFactor;
    NSString *_proximityPriorityHintingPath;
    long long _generation;
    long long _lastStartedGeneration;
    long long _lastCompletedGeneration;
}

+ (double)timeout;
@property(readonly) long long lastCompletedGeneration; // @synthesize lastCompletedGeneration=_lastCompletedGeneration;
@property(readonly) long long lastStartedGeneration; // @synthesize lastStartedGeneration=_lastStartedGeneration;
@property(readonly) long long generation; // @synthesize generation=_generation;
@property(copy) NSString *proximityPriorityHintingPath; // @synthesize proximityPriorityHintingPath=_proximityPriorityHintingPath;
@property(nonatomic) double throttleFactor; // @synthesize throttleFactor=_throttleFactor;
- (void).cxx_destruct;
- (void)_notifyObserversOfAffectedFilePaths:(id)arg1 andAffectedClassNames:(id)arg2;
- (id)addParsingObserver:(CDUnknownBlockType)arg1;
- (void)openEditorDocumentDidChange:(id)arg1;
- (void)openEditorDocumentsDidChange;
- (void)openEditorDocumentWithPathsDidChange:(id)arg1;
- (void)observedWorkspaceDidAddOrModifyPaths:(id)arg1 andRemovePaths:(id)arg2;
- (void)integratePartialClassDescriptions:(id)arg1;
- (void)batchUpdateParsing:(id)arg1;
- (id)nextBatchUpdatingGenerationIfNeeded;
- (BOOL)isSchedulableWorkItem:(id)arg1;
- (id)overridingEditorContentForWorkItems:(id)arg1;
- (BOOL)isClassDescriptionApplicable:(id)arg1 givenFrameworkPaths:(id)arg2;
- (CDUnknownBlockType)workItemPriorityComparator;
- (void)postDidUpdateParsingNotification;
@property(readonly) long long completionProgress;
- (BOOL)isPaused;
- (void)primitiveInvalidate;
- (id)initWithWorkspaceDocument:(id)arg1 platform:(id)arg2 toolchainIdentifiers:(id)arg3;

@end

