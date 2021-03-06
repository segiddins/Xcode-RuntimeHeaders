//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeltaFoundation/DEDataSourceDelegate-Protocol.h>
#import <DeltaFoundation/DEFineGrainDiffObserver-Protocol.h>

@class DEContextCoalescing, DEContextSharedState, DEDataSource, NSArray, NSIndexSet, NSOperationQueue, NSString;
@protocol DEContextDelegate;

@interface DEContext : NSObject <DEFineGrainDiffObserver, DEDataSourceDelegate>
{
    DEDataSource *_originalDataSource;
    DEDataSource *_modifiedDataSource;
    long long _defaultDiffMergeDirection;
    BOOL _isRestoringState;
    BOOL _updatingChangedDescriptor;
    NSOperationQueue *_diffQueue;
    struct _DEContextFlags _options;
    BOOL _shouldGenerateSubdiffDescriptors;
    BOOL _synchronouslyAdjustDescriptorTokenRanges;
    BOOL _skipTokenizingNewlines;
    BOOL _shouldGenerateDiffString;
    BOOL _coalesceFineGrainEvents;
    BOOL _preventAsynchronicity;
    _Atomic int _needsUpdate;
    id <DEContextDelegate> _delegate;
    NSString *_diffString;
    DEContextSharedState *_sharedState;
    DEContextCoalescing *_insertionCoalescing;
    DEContextCoalescing *_deletionCoalescing;
    NSArray *_diffDescriptors;
    NSArray *_synchronouslyAdjustedDescriptors;
    unsigned long long _diffCachingMode;
}

+ (id)modifiedDescriptorIndexesForDiffDescriptors:(id)arg1;
+ (id)commonDescriptorIndexesForDiffDescriptors:(id)arg1;
+ (Class)_sharedStateClass;
+ (Class)_diffOperationClass;
- (void).cxx_destruct;
@property _Atomic int needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property BOOL preventAsynchronicity; // @synthesize preventAsynchronicity=_preventAsynchronicity;
@property BOOL isRestoringState; // @synthesize isRestoringState=_isRestoringState;
@property unsigned long long diffCachingMode; // @synthesize diffCachingMode=_diffCachingMode;
@property(retain) NSArray *synchronouslyAdjustedDescriptors; // @synthesize synchronouslyAdjustedDescriptors=_synchronouslyAdjustedDescriptors;
@property(retain) NSArray *diffDescriptors; // @synthesize diffDescriptors=_diffDescriptors;
@property(retain) DEContextCoalescing *deletionCoalescing; // @synthesize deletionCoalescing=_deletionCoalescing;
@property(retain) DEContextCoalescing *insertionCoalescing; // @synthesize insertionCoalescing=_insertionCoalescing;
@property(retain) DEContextSharedState *sharedState; // @synthesize sharedState=_sharedState;
@property BOOL coalesceFineGrainEvents; // @synthesize coalesceFineGrainEvents=_coalesceFineGrainEvents;
@property BOOL shouldGenerateDiffString; // @synthesize shouldGenerateDiffString=_shouldGenerateDiffString;
@property BOOL skipTokenizingNewlines; // @synthesize skipTokenizingNewlines=_skipTokenizingNewlines;
@property BOOL synchronouslyAdjustDescriptorTokenRanges; // @synthesize synchronouslyAdjustDescriptorTokenRanges=_synchronouslyAdjustDescriptorTokenRanges;
@property(copy) NSString *diffString; // @synthesize diffString=_diffString;
@property __weak id <DEContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_dumpDataSources;
- (id)diffDescriptorIndexesForModifiedTokenRange:(struct _NSRange)arg1;
- (id)diffDescriptorIndexesForOriginalTokenRange:(struct _NSRange)arg1;
- (long long)numberOfModifiedDescriptors;
- (long long)numberOfCommonDescriptors;
@property(readonly) NSIndexSet *modifiedDescriptorIndexes;
@property(readonly) NSIndexSet *commonDescriptorIndexes;
- (void)setNeedsUpdateDiffDescriptors:(BOOL)arg1;
- (void)configureSynchronously:(CDUnknownBlockType)arg1;
- (void)cancelAllDiffOperations;
- (void)_adjustDescriptorsForStartLine:(long long)arg1 endLine:(long long)arg2 isDeletion:(BOOL)arg3;
- (void)deletedTextAtStartLine:(long long)arg1 endLine:(long long)arg2;
- (void)insertedTextAtStartLine:(long long)arg1 endLine:(long long)arg2;
- (void)_enqueueDiffOperationWithLineRange:(struct _NSRange)arg1 isDeletion:(BOOL)arg2 shouldCommence:(CDUnknownBlockType)arg3;
- (BOOL)_shouldEnqueueLineRange:(struct _NSRange)arg1 isDeletion:(BOOL)arg2;
- (BOOL)_isCurrentlyCoalescing;
- (void)_synchronouslyBuildDiffDescriptorsForLineRange:(struct _NSRange)arg1 isDeletion:(BOOL)arg2;
- (void)_synchronouslyBuildDiffDescriptors;
@property(readonly, copy) NSString *description;
@property long long defaultDiffMergeDirection;
@property BOOL shouldGenerateSubdiffDescriptors;
@property BOOL ignoresLineEnds;
@property BOOL ignoresWhitespace;
@property BOOL ignoresCase;
@property(retain) DEDataSource *modifiedDataSource;
- (BOOL)_setModifiedDataSource:(id)arg1;
@property(retain) DEDataSource *originalDataSource;
- (BOOL)_setOriginalDataSource:(id)arg1;
- (void)setUpdatingChangedDescriptor:(BOOL)arg1;
- (BOOL)updatingChangedDescriptor;
- (void)dataSourceContentsDidChange:(id)arg1;
- (void)_observeDataSource:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithOriginalDataSource:(id)arg1 modifiedDataSource:(id)arg2;
- (id)initWithOriginalDataSource:(id)arg1 modifiedDataSource:(id)arg2 updatesDescriptorsImmediately:(BOOL)arg3 cachingMode:(unsigned long long)arg4;
- (id)initWithOriginalDataSource:(id)arg1 modifiedDataSource:(id)arg2 updatesDescriptorsImmediately:(BOOL)arg3 cachingMode:(unsigned long long)arg4 diffQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

