//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class DEContextSharedState, DEDataSource, NSMutableArray;

@interface DEContextOperation : NSOperation
{
    BOOL _isDeletion;
    BOOL _ignoresWhitespace;
    BOOL _ignoresCase;
    BOOL _shouldGenerateSubdiffDescriptors;
    BOOL _shouldGenerateDiffString;
    BOOL _skipTokenizingNewlines;
    DEDataSource *_unsafeOriginalDataSource;
    DEDataSource *_unsafeModifiedDataSource;
    DEContextSharedState *_sharedState;
    DEDataSource *_originalDataSource;
    DEDataSource *_modifiedDataSource;
    NSMutableArray *_tmpDiffDescriptors;
    NSMutableArray *_mutableDiffDescriptors;
    unsigned long long _diffCachingMode;
    long long _defaultDiffMergeDirection;
    CDUnknownBlockType _shouldCommence;
    CDUnknownBlockType _completion;
    struct _NSRange _lineRange;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType shouldCommence; // @synthesize shouldCommence=_shouldCommence;
@property(nonatomic) long long defaultDiffMergeDirection; // @synthesize defaultDiffMergeDirection=_defaultDiffMergeDirection;
@property(nonatomic) unsigned long long diffCachingMode; // @synthesize diffCachingMode=_diffCachingMode;
@property(retain, nonatomic) NSMutableArray *mutableDiffDescriptors; // @synthesize mutableDiffDescriptors=_mutableDiffDescriptors;
@property(retain, nonatomic) NSMutableArray *tmpDiffDescriptors; // @synthesize tmpDiffDescriptors=_tmpDiffDescriptors;
@property(nonatomic) BOOL skipTokenizingNewlines; // @synthesize skipTokenizingNewlines=_skipTokenizingNewlines;
@property(nonatomic) BOOL shouldGenerateDiffString; // @synthesize shouldGenerateDiffString=_shouldGenerateDiffString;
@property(nonatomic) BOOL shouldGenerateSubdiffDescriptors; // @synthesize shouldGenerateSubdiffDescriptors=_shouldGenerateSubdiffDescriptors;
@property(nonatomic) BOOL ignoresCase; // @synthesize ignoresCase=_ignoresCase;
@property(nonatomic) BOOL ignoresWhitespace; // @synthesize ignoresWhitespace=_ignoresWhitespace;
@property(nonatomic) BOOL isDeletion; // @synthesize isDeletion=_isDeletion;
@property(nonatomic) struct _NSRange lineRange; // @synthesize lineRange=_lineRange;
@property(retain, nonatomic) DEDataSource *modifiedDataSource; // @synthesize modifiedDataSource=_modifiedDataSource;
@property(retain, nonatomic) DEDataSource *originalDataSource; // @synthesize originalDataSource=_originalDataSource;
@property(retain, nonatomic) DEContextSharedState *sharedState; // @synthesize sharedState=_sharedState;
@property(retain, nonatomic) DEDataSource *unsafeModifiedDataSource; // @synthesize unsafeModifiedDataSource=_unsafeModifiedDataSource;
@property(retain, nonatomic) DEDataSource *unsafeOriginalDataSource; // @synthesize unsafeOriginalDataSource=_unsafeOriginalDataSource;
- (id)modifiedDescriptorIndexes;
- (long long)numberOfModifiedDescriptors;
- (long long)numberOfDiffDescriptors;
- (id)modifiedDescriptorIndexesForDiffDescriptors:(id)arg1;
- (id)diffDescriptors;
- (id)_buildDiffString;
- (id)diffStringForDescriptorInRange:(struct _NSRange)arg1;
- (id)diffStringForDescriptorInRange:(struct _NSRange)arg1 options:(id)arg2;
- (id)diffStringForDescriptors:(id)arg1 options:(id)arg2;
- (void)_buildSubdescriptors;
- (void)_buildDiffDescriptors;
- (void)main;
- (id)initWithContext:(id)arg1 lineRange:(struct _NSRange)arg2 isDeletion:(BOOL)arg3 shouldCommence:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;

@end

