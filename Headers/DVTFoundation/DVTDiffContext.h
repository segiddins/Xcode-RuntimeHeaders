//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTFineGrainDiffObserver-Protocol.h>
#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTDiffContextCoalescing, DVTDiffContextSharedState, DVTDiffDataSource, DVTObservingToken, DVTStackBacktrace, NSArray, NSIndexSet, NSOperationQueue, NSString;
@protocol DVTDiffContextDelegate;

@interface DVTDiffContext : NSObject <DVTFineGrainDiffObserver, DVTInvalidation>
{
    DVTDiffDataSource *_originalDataSource;
    DVTDiffDataSource *_modifiedDataSource;
    DVTObservingToken *_originalDataSourceObserver;
    DVTObservingToken *_modifiedDataSourceObserver;
    long long _defaultDiffMergeDirection;
    BOOL _isRestoringState;
    BOOL _updatingChangedDescriptor;
    _Atomic int _needsUpdate;
    NSOperationQueue *_diffQueue;
    struct _DVTDiffContextFlags _dcFlags;
    BOOL _shouldGenerateSubdiffDescriptors;
    BOOL _synchronouslyAdjustDescriptorTokenRanges;
    BOOL _skipTokenizingNewlines;
    BOOL _shouldGenerateDiffString;
    BOOL _coalesceFineGrainEvents;
    BOOL _preventAsynchronicity;
    id <DVTDiffContextDelegate> _delegate;
    NSString *_diffString;
    DVTDiffContextSharedState *_sharedState;
    DVTDiffContextCoalescing *_insertionCoalescing;
    DVTDiffContextCoalescing *_deletionCoalescing;
    NSArray *_diffDescriptors;
    NSArray *_synchronouslyAdjustedDescriptors;
    unsigned long long _diffCachingMode;
}

+ (id)modifiedDescriptorIndexesForDiffDescriptors:(id)arg1;
+ (id)commonDescriptorIndexesForDiffDescriptors:(id)arg1;
+ (Class)_sharedStateClass;
+ (Class)_diffOperationClass;
+ (void)initialize;
@property BOOL preventAsynchronicity; // @synthesize preventAsynchronicity=_preventAsynchronicity;
@property BOOL isRestoringState; // @synthesize isRestoringState=_isRestoringState;
@property unsigned long long diffCachingMode; // @synthesize diffCachingMode=_diffCachingMode;
@property(retain) NSArray *synchronouslyAdjustedDescriptors; // @synthesize synchronouslyAdjustedDescriptors=_synchronouslyAdjustedDescriptors;
@property(retain) NSArray *diffDescriptors; // @synthesize diffDescriptors=_diffDescriptors;
@property(retain) DVTDiffContextCoalescing *deletionCoalescing; // @synthesize deletionCoalescing=_deletionCoalescing;
@property(retain) DVTDiffContextCoalescing *insertionCoalescing; // @synthesize insertionCoalescing=_insertionCoalescing;
@property(retain) DVTDiffContextSharedState *sharedState; // @synthesize sharedState=_sharedState;
@property(copy) NSString *diffString; // @synthesize diffString=_diffString;
@property BOOL coalesceFineGrainEvents; // @synthesize coalesceFineGrainEvents=_coalesceFineGrainEvents;
@property BOOL shouldGenerateDiffString; // @synthesize shouldGenerateDiffString=_shouldGenerateDiffString;
@property BOOL skipTokenizingNewlines; // @synthesize skipTokenizingNewlines=_skipTokenizingNewlines;
@property BOOL synchronouslyAdjustDescriptorTokenRanges; // @synthesize synchronouslyAdjustDescriptorTokenRanges=_synchronouslyAdjustDescriptorTokenRanges;
@property __weak id <DVTDiffContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
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
@property(retain) DVTDiffDataSource *modifiedDataSource;
- (BOOL)_setModifiedDataSource:(id)arg1;
@property(retain) DVTDiffDataSource *originalDataSource;
- (BOOL)_setOriginalDataSource:(id)arg1;
- (void)setUpdatingChangedDescriptor:(BOOL)arg1;
- (BOOL)updatingChangedDescriptor;
- (id)_observeDataSource:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;
- (id)initWithOriginalDataSource:(id)arg1 modifiedDataSource:(id)arg2;
- (id)initWithOriginalDataSource:(id)arg1 modifiedDataSource:(id)arg2 updatesDescriptorsImmediately:(BOOL)arg3 cachingMode:(unsigned long long)arg4;
- (id)initWithOriginalDataSource:(id)arg1 modifiedDataSource:(id)arg2 updatesDescriptorsImmediately:(BOOL)arg3 cachingMode:(unsigned long long)arg4 diffQueue:(id)arg5;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

