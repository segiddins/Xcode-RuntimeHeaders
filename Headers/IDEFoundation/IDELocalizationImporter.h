//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDELocalizationHandler.h>

#import <IDEFoundation/IDELocalizationWorkProgress-Protocol.h>

@class DVTNotificationToken, NSString, NSURL;

@interface IDELocalizationImporter : IDELocalizationHandler <IDELocalizationWorkProgress>
{
    long long _completedFiles;
    long long _totalFiles;
    DVTNotificationToken *_localizationPhaseObserver;
    DVTNotificationToken *_localizationDetectedFilesObserver;
    DVTNotificationToken *_localizationProcessedFilesObserver;
    DVTNotificationToken *_localizationImportFailedObserver;
    DVTNotificationToken *_localizationNonFatalErrorObserver;
    BOOL _complete;
    BOOL _allowProjectChanges;
    CDUnknownBlockType _onErrorBlock;
    CDUnknownBlockType _onCompletedBlock;
    CDUnknownBlockType _onNeedsReviewBlock;
    long long _progress;
    NSString *_phase;
    NSString *_workTitle;
    NSString *_itsRulePath;
    NSURL *_sourceUrl;
}

+ (void)initialize;
- (void).cxx_destruct;
@property BOOL allowProjectChanges; // @synthesize allowProjectChanges=_allowProjectChanges;
@property(copy) NSURL *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(copy) NSString *itsRulePath; // @synthesize itsRulePath=_itsRulePath;
@property(copy) NSString *workTitle; // @synthesize workTitle=_workTitle;
@property(copy) NSString *phase; // @synthesize phase=_phase;
@property long long progress; // @synthesize progress=_progress;
@property BOOL complete; // @synthesize complete=_complete;
@property(copy) CDUnknownBlockType onNeedsReviewBlock; // @synthesize onNeedsReviewBlock=_onNeedsReviewBlock;
@property(copy) CDUnknownBlockType onCompletedBlock; // @synthesize onCompletedBlock=_onCompletedBlock;
@property(copy) CDUnknownBlockType onErrorBlock; // @synthesize onErrorBlock=_onErrorBlock;
- (void)cancel;
- (void)start;
- (void)processImportedFileDescriptions:(id)arg1;
- (id)_variantGroupForImportedFileDescription:(id)arg1 relativeToProjDir:(id)arg2;
- (id)_blueprintsForImportedFileDescription:(id)arg1 relativeToProjDir:(id)arg2;
- (id)_bestSuperitemForImportedFilePath:(id)arg1 associatedWithBlueprints:(id)arg2 bestPosition:(unsigned long long *)arg3 withVariantGroupsForName:(id)arg4;
- (id)_fileReferenceForFilePath:(id)arg1;
- (void)importLocalizationWithGroup:(id)arg1;
- (void)compareAndImportLocalization;
- (id)_computedLocalizedContentsDirectoryForImportAtURL:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1 buildParameters:(id)arg2 container:(id)arg3 options:(id)arg4 sourceLocale:(id)arg5 sourceURL:(id)arg6 allowProjectChanges:(BOOL)arg7 onNeedsReviewBlock:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

