//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeltaFoundation/DEContextDelegate-Protocol.h>
#import <DeltaFoundation/DEDescriptorDelegate-Protocol.h>

@class DEContext, DEDataSource, DEDescriptor, NSArray, NSData, NSDictionary, NSHashTable, NSIndexSet, NSMapTable, NSMutableArray, NSMutableIndexSet, NSString, NSUndoManager;
@protocol DESessionTextEditBuffer;

@interface DESession : NSObject <DEContextDelegate, DEDescriptorDelegate>
{
    NSMutableIndexSet *_toggledDiffDescriptorIndexes;
    BOOL _diffDescriptorsShouldAppearAsDisabled;
    BOOL _diffDescriptorsShouldAppearAsInactive;
    BOOL _isBinaryConflictResolution;
    BOOL _enableDiffToggles;
    BOOL _isCalculatingInitialDiffs;
    BOOL _inMergeEdit;
    unsigned long long _selectedDiffDescriptorIndex;
    NSArray *_mergeDescriptors;
    DEDataSource *_originalDataSource;
    DEDataSource *_modifiedDataSource;
    DEDataSource *_intermediateDataSource;
    DEDataSource *_ancestorDataSource;
    NSUndoManager *_undoManager;
    id <DESessionTextEditBuffer> _mergeTextStorage;
    NSData *_mergeTextDigest;
    unsigned long long _conflictCount;
    NSIndexSet *_hiddenDiffDescriptorIndexes;
    NSArray *_diffDescriptors;
    NSIndexSet *_commonDescriptorIndexes;
    NSIndexSet *_modifiedDescriptorIndexes;
    NSString *_diffString;
    DEContext *_diffContext;
    NSMutableArray *_lastToggledDiffDescriptors;
    NSMapTable *_descriptorMap;
    NSHashTable *_observers;
    unsigned long long _lastNumberOfModifiedDescriptors;
}

+ (id)binaryConflictDetectionForOriginalDataSource:(id)arg1 modifiedDataSource:(id)arg2 ancestorDataSource:(id)arg3;
+ (BOOL)hasToggledDiffDescriptorsInMergeState:(id)arg1;
+ (BOOL)isMultiDiffSelectionMergeState:(id)arg1;
+ (long long)binaryConflictMergeDirection:(id)arg1;
+ (BOOL)isBinaryConflictResolutionMergeState:(id)arg1;
+ (void)_validateRestoredState:(id)arg1;
+ (id)keyPathsForValuesAffectingVisibleModifiedDescriptorIndexes;
+ (id)keyPathsForValuesAffectingSelectedMergeDescriptor;
+ (id)keyPathsForValuesAffectingIsThreeWayDiff;
- (void).cxx_destruct;
@property BOOL inMergeEdit; // @synthesize inMergeEdit=_inMergeEdit;
@property unsigned long long lastNumberOfModifiedDescriptors; // @synthesize lastNumberOfModifiedDescriptors=_lastNumberOfModifiedDescriptors;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSMapTable *descriptorMap; // @synthesize descriptorMap=_descriptorMap;
@property(retain) NSMutableArray *lastToggledDiffDescriptors; // @synthesize lastToggledDiffDescriptors=_lastToggledDiffDescriptors;
@property(retain) DEContext *diffContext; // @synthesize diffContext=_diffContext;
@property(retain) NSString *diffString; // @synthesize diffString=_diffString;
@property(retain) NSIndexSet *modifiedDescriptorIndexes; // @synthesize modifiedDescriptorIndexes=_modifiedDescriptorIndexes;
@property(retain) NSIndexSet *commonDescriptorIndexes; // @synthesize commonDescriptorIndexes=_commonDescriptorIndexes;
@property(retain) NSArray *diffDescriptors; // @synthesize diffDescriptors=_diffDescriptors;
@property BOOL isCalculatingInitialDiffs; // @synthesize isCalculatingInitialDiffs=_isCalculatingInitialDiffs;
@property(retain) NSIndexSet *hiddenDiffDescriptorIndexes; // @synthesize hiddenDiffDescriptorIndexes=_hiddenDiffDescriptorIndexes;
@property BOOL enableDiffToggles; // @synthesize enableDiffToggles=_enableDiffToggles;
@property BOOL isBinaryConflictResolution; // @synthesize isBinaryConflictResolution=_isBinaryConflictResolution;
@property unsigned long long conflictCount; // @synthesize conflictCount=_conflictCount;
@property(retain) NSData *mergeTextDigest; // @synthesize mergeTextDigest=_mergeTextDigest;
@property(retain) id <DESessionTextEditBuffer> mergeTextStorage; // @synthesize mergeTextStorage=_mergeTextStorage;
@property(retain) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(readonly) DEDataSource *ancestorDataSource; // @synthesize ancestorDataSource=_ancestorDataSource;
@property(readonly) DEDataSource *intermediateDataSource; // @synthesize intermediateDataSource=_intermediateDataSource;
@property(readonly) DEDataSource *modifiedDataSource; // @synthesize modifiedDataSource=_modifiedDataSource;
@property(readonly) DEDataSource *originalDataSource; // @synthesize originalDataSource=_originalDataSource;
@property BOOL diffDescriptorsShouldAppearAsInactive; // @synthesize diffDescriptorsShouldAppearAsInactive=_diffDescriptorsShouldAppearAsInactive;
@property BOOL diffDescriptorsShouldAppearAsUnfocused; // @synthesize diffDescriptorsShouldAppearAsUnfocused=_diffDescriptorsShouldAppearAsDisabled;
@property(readonly, nonatomic) NSIndexSet *toggledDiffDescriptorIndexes; // @synthesize toggledDiffDescriptorIndexes=_toggledDiffDescriptorIndexes;
- (void)refresh;
@property(readonly) BOOL mergeIsDirty;
@property(readonly) NSDictionary *restoredState; // @dynamic restoredState;
- (void)descriptorDidUpdateResolvedState:(id)arg1;
- (void)descriptorDidUpdateMergeDirection:(id)arg1;
@property(retain) NSArray *mergeDescriptors; // @synthesize mergeDescriptors=_mergeDescriptors;
@property(readonly) DEDescriptor *selectedMergeDescriptor;
@property(readonly) BOOL isThreeWayDiff;
- (void)_loadDataSourcesWithOriginalDataSource:(id)arg1 intermediateDataSource:(id)arg2 modifiedDataSource:(id)arg3 ancestorDataSource:(id)arg4 restoringState:(BOOL)arg5 enableCaching:(BOOL)arg6;
- (void)_fixToggledDiffDescriptorIndexes;
- (void)_updateLastToggledDiffDescriptorIndexes;
- (long long)compareDiffDescriptors:(id)arg1 rightDescriptor:(id)arg2;
- (void)removeToggledDiffDescriptorIndex:(unsigned long long)arg1;
- (void)addToggledDiffDescriptorIndex:(unsigned long long)arg1;
- (void)setToggledDiffDescriptorIndexes:(id)arg1;
@property unsigned long long selectedDiffDescriptorIndex; // @synthesize selectedDiffDescriptorIndex=_selectedDiffDescriptorIndex;
- (void)revertDiffDescriptor:(id)arg1 line:(long long)arg2 withPrimaryTextStorage:(id)arg3 undoManager:(id)arg4;
- (void)revertDiffDescriptor:(id)arg1 withPrimaryTextStorage:(id)arg2 undoManager:(id)arg3;
- (void)revertDiffDescriptorIndex:(unsigned long long)arg1 line:(long long)arg2 withPrimaryTextStorage:(id)arg3 undoManager:(id)arg4;
- (void)revertDiffDescriptorIndex:(unsigned long long)arg1 withPrimaryTextStorage:(id)arg2 undoManager:(id)arg3;
- (void)revertDiffDescriptorIndex:(unsigned long long)arg1 withSourceEditorView:(id)arg2 undoManager:(id)arg3;
- (void)_updateMergeDocumentForChangedDescriptor:(id)arg1;
- (id)_buildMergeStringAndDescriptors:(id *)arg1 withMergeTextDigest:(id *)arg2;
- (id)modifiedDiffDescriptors;
@property(readonly) NSIndexSet *visibleModifiedDescriptorIndexes;
- (void)_notifySessionDidScrape;
- (void)_notifySessionWillScrape;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)diffContextDidUpdateDescriptorsSynchronously:(id)arg1 diffDescriptors:(id)arg2;
- (void)diffContextDidUpdateDescriptors:(id)arg1;
- (void)_scrapeResultsForContext:(id)arg1;
- (void)_oneShotDiffAndScrapeResults;
- (void)_updateConflictCount;
- (void)_loadPreviousMergeSession:(id)arg1;
- (void)_setupBinaryMergeSession;
- (void)cancelAllDiffOperations;
@property BOOL ignoresWhitespace;
- (void)dealloc;
- (id)initWithOriginalDataSource:(id)arg1 intermediateDataSource:(id)arg2 modifiedDataSource:(id)arg3 ancestorDataSource:(id)arg4 undoManager:(id)arg5 mergeTextStorage:(id)arg6 mergeState:(id)arg7 cachingModifiedDataSource:(BOOL)arg8 options:(struct _DEContextFlags)arg9;
- (id)initWithBinaryConflictResolutionMergeState:(id)arg1;
- (id)initWithOriginalBinaryDataSource:(id)arg1 modifiedBinaryDataSource:(id)arg2 ancestorBinaryDataSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

