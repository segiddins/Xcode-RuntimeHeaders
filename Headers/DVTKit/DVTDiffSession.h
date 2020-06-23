//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTDiffContextDelegate-Protocol.h>
#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTDiffContext, DVTDiffDataSource, DVTDiffDescriptor, DVTStackBacktrace, NSArray, NSData, NSDictionary, NSIndexSet, NSMapTable, NSMutableArray, NSMutableIndexSet, NSString, NSUndoManager;
@protocol DVTDiffSessionDelegate, DVTDiffSessionObserver, DVTDiffSessionTextEditBuffer;

@interface DVTDiffSession : NSObject <DVTInvalidation, DVTDiffContextDelegate>
{
    DVTDiffContext *_diffContext;
    NSArray *_diffDescriptors;
    NSIndexSet *_commonDescriptorIndexes;
    NSIndexSet *_modifiedDescriptorIndexes;
    NSString *_diffString;
    unsigned long long _selectedDiffDescriptorIndex;
    NSMutableIndexSet *_toggledDiffDescriptorIndexes;
    NSMutableArray *_lastToggledDiffDescriptors;
    unsigned long long _lastNumberOfModifiedDescriptors;
    unsigned long long _timestamp;
    id <DVTDiffSessionDelegate> _delegate;
    NSUndoManager *_undoManager;
    id <DVTDiffSessionTextEditBuffer> _mergeTextStorage;
    id _mergeTextStorageObserver;
    NSData *_mergeTextDigest;
    NSArray *_mergeDescriptors;
    NSMutableArray *_mergeDescriptorObservers;
    NSMapTable *_descriptorMap;
    unsigned long long _conflictCount;
    DVTDiffDataSource *_ancestorDataSource;
    DVTDiffDataSource *_modifiedDataSource;
    DVTDiffDataSource *_intermediateDataSource;
    DVTDiffDataSource *_originalDataSource;
    BOOL _inMergeEdit;
    BOOL _isBinaryConflictResolution;
    BOOL _isCalculatingInitialDiffs;
    BOOL _enableDiffToggles;
    BOOL _diffDescriptorsShouldAppearAsDisabled;
    BOOL _diffDescriptorsShouldAppearAsInactive;
    BOOL _skipTokenizingNewlines;
    id <DVTDiffSessionObserver> _observer;
    NSIndexSet *_hiddenDiffDescriptorIndexes;
}

+ (void)initialize;
+ (id)binaryConflictDetectionForOriginalDataSource:(id)arg1 modifiedDataSource:(id)arg2 ancestorDataSource:(id)arg3;
+ (BOOL)hasToggledDiffDescriptorsInMergeState:(id)arg1;
+ (BOOL)isMultiDiffSelectionMergeState:(id)arg1;
+ (long long)binaryConflictMergeDirection:(id)arg1;
+ (BOOL)isBinaryConflictResolutionMergeState:(id)arg1;
+ (void)_validateRestoredState:(id)arg1;
+ (id)keyPathsForValuesAffectingVisibleModifiedDescriptorIndexes;
+ (id)keyPathsForValuesAffectingSelectedMergeDescriptor;
+ (id)keyPathsForValuesAffectingIsThreeWayDiff;
+ (id)logAspect;
@property(retain) NSIndexSet *hiddenDiffDescriptorIndexes; // @synthesize hiddenDiffDescriptorIndexes=_hiddenDiffDescriptorIndexes;
@property __weak id <DVTDiffSessionObserver> observer; // @synthesize observer=_observer;
@property BOOL diffDescriptorsShouldAppearAsInactive; // @synthesize diffDescriptorsShouldAppearAsInactive=_diffDescriptorsShouldAppearAsInactive;
@property BOOL diffDescriptorsShouldAppearAsUnfocused; // @synthesize diffDescriptorsShouldAppearAsUnfocused=_diffDescriptorsShouldAppearAsDisabled;
@property BOOL enableDiffToggles; // @synthesize enableDiffToggles=_enableDiffToggles;
@property(retain, nonatomic) NSIndexSet *toggledDiffDescriptorIndexes; // @synthesize toggledDiffDescriptorIndexes=_toggledDiffDescriptorIndexes;
@property BOOL skipTokenizingNewlines; // @synthesize skipTokenizingNewlines=_skipTokenizingNewlines;
@property BOOL isCalculatingInitialDiffs; // @synthesize isCalculatingInitialDiffs=_isCalculatingInitialDiffs;
@property BOOL isBinaryConflictResolution; // @synthesize isBinaryConflictResolution=_isBinaryConflictResolution;
@property(retain) NSData *mergeTextDigest; // @synthesize mergeTextDigest=_mergeTextDigest;
@property(readonly) DVTDiffDataSource *originalDataSource; // @synthesize originalDataSource=_originalDataSource;
@property(readonly) DVTDiffDataSource *intermediateDataSource; // @synthesize intermediateDataSource=_intermediateDataSource;
@property(readonly) DVTDiffDataSource *modifiedDataSource; // @synthesize modifiedDataSource=_modifiedDataSource;
@property(readonly) DVTDiffDataSource *ancestorDataSource; // @synthesize ancestorDataSource=_ancestorDataSource;
@property unsigned long long conflictCount; // @synthesize conflictCount=_conflictCount;
@property(retain) id <DVTDiffSessionTextEditBuffer> mergeTextStorage; // @synthesize mergeTextStorage=_mergeTextStorage;
@property(retain) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain) id <DVTDiffSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain) NSString *diffString; // @synthesize diffString=_diffString;
@property(retain) NSIndexSet *modifiedDescriptorIndexes; // @synthesize modifiedDescriptorIndexes=_modifiedDescriptorIndexes;
@property(retain) NSIndexSet *commonDescriptorIndexes; // @synthesize commonDescriptorIndexes=_commonDescriptorIndexes;
@property(retain) NSArray *diffDescriptors; // @synthesize diffDescriptors=_diffDescriptors;
@property(retain) DVTDiffContext *diffContext; // @synthesize diffContext=_diffContext;
- (void).cxx_destruct;
- (void)_incrementTimestamp;
- (void)refresh;
- (void)primitiveInvalidate;
@property(readonly) BOOL mergeIsDirty;
@property(readonly) NSDictionary *restoredState; // @dynamic restoredState;
@property(retain) NSArray *mergeDescriptors; // @synthesize mergeDescriptors=_mergeDescriptors;
@property(readonly) DVTDiffDescriptor *selectedMergeDescriptor;
@property(readonly) BOOL isThreeWayDiff;
- (void)_loadDataSourcesWithOriginalDataSource:(id)arg1 intermediateDataSource:(id)arg2 modifiedDataSource:(id)arg3 ancestorDataSource:(id)arg4 restoringState:(BOOL)arg5 enableCaching:(BOOL)arg6;
- (void)_fixToggledDiffDescriptorIndexes;
- (void)_updateLastToggledDiffDescriptorIndexes;
- (long long)compareDiffDescriptors:(id)arg1 rightDescriptor:(id)arg2;
- (void)removeToggledDiffDescriptorIndex:(unsigned long long)arg1;
- (void)addToggledDiffDescriptorIndex:(unsigned long long)arg1;
@property unsigned long long selectedDiffDescriptorIndex; // @synthesize selectedDiffDescriptorIndex=_selectedDiffDescriptorIndex;
- (void)revertDiffDescriptor:(id)arg1 line:(long long)arg2 withPrimaryTextStorage:(id)arg3 undoManager:(id)arg4;
- (void)revertDiffDescriptor:(id)arg1 withPrimaryTextStorage:(id)arg2 undoManager:(id)arg3;
- (void)revertDiffDescriptorIndex:(unsigned long long)arg1 line:(long long)arg2 withPrimaryTextStorage:(id)arg3 undoManager:(id)arg4;
- (void)revertDiffDescriptorIndex:(unsigned long long)arg1 withPrimaryTextStorage:(id)arg2 undoManager:(id)arg3;
- (void)_updateMergeDocumentForChangedDescriptor:(id)arg1;
- (id)_buildMergeStringAndDescriptors:(id *)arg1 withMergeTextDigest:(id *)arg2;
@property(readonly) NSIndexSet *visibleModifiedDescriptorIndexes;
- (void)diffContextDidUpdateDescriptorsSynchronously:(id)arg1 diffDescriptors:(id)arg2;
- (void)diffContextDidUpdateDescriptors:(id)arg1;
- (void)_scrapeResultsForContext:(id)arg1;
- (void)_oneShotDiffAndScrapeResults;
- (void)_updateConflictCount;
- (void)_loadPreviousMergeSession:(id)arg1;
- (void)_setupBinaryMergeSession;
- (void)cancelAllDiffOperations;
@property BOOL coalesceFineGrainEvents;
@property BOOL shouldGenerateDiffString;
@property BOOL synchronouslyAdjustDescriptorTokenRanges;
@property BOOL ignoreWhitespace;
- (id)initWithOriginalDataSource:(id)arg1 intermediateDataSource:(id)arg2 modifiedDataSource:(id)arg3 ancestorDataSource:(id)arg4 undoManager:(id)arg5 mergeTextStorage:(id)arg6 cachingModifiedDataSource:(BOOL)arg7 ignoringWhitespace:(BOOL)arg8 skipTokenizingNewlines:(BOOL)arg9 mergeState:(id)arg10;
- (id)initWithOriginalDataSource:(id)arg1 modifiedDataSource:(id)arg2 ancestorDataSource:(id)arg3 undoManager:(id)arg4 mergeTextStorage:(id)arg5 mergeState:(id)arg6;
- (id)initWithOriginalDataSource:(id)arg1 intermediateDataSource:(id)arg2 modifiedDataSource:(id)arg3 ancestorDataSource:(id)arg4 cachingModifiedDataSource:(BOOL)arg5 ignoringWhitespace:(BOOL)arg6 skipTokenizingNewlines:(BOOL)arg7;
- (id)initWithOriginalDataSource:(id)arg1 modifiedDataSource:(id)arg2 ancestorDataSource:(id)arg3 cachingModifiedDataSource:(BOOL)arg4 ignoringWhitespace:(BOOL)arg5 skipTokenizingNewlines:(BOOL)arg6;
- (id)initWithOriginalDataSource:(id)arg1 modifiedDataSource:(id)arg2 ancestorDataSource:(id)arg3 mergeState:(id)arg4;
- (id)initWithBinaryConflictResolutionMergeState:(id)arg1;
- (id)initWithOriginalBinaryDataSource:(id)arg1 modifiedBinaryDataSource:(id)arg2 ancestorBinaryDataSource:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

