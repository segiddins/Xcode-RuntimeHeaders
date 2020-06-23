//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDELocalizationHandler.h>

#import <IDEFoundation/IDELocalizationWorkProgress-Protocol.h>

@class DVTNotificationToken, NSArray, NSString, NSURL;

@interface IDELocalizationExporter : IDELocalizationHandler <IDELocalizationWorkProgress>
{
    long long _completedFiles;
    long long _totalFiles;
    DVTNotificationToken *_localizationPhaseObserver;
    DVTNotificationToken *_localizationDetectedFilesToProcessObserver;
    DVTNotificationToken *_localizationProcessedFilesObserver;
    DVTNotificationToken *_localizationExportFailedObserver;
    DVTNotificationToken *_localizationNonFatalErrorObserver;
    BOOL _complete;
    NSArray *_targetLanguages;
    NSString *_itsRulePath;
    NSURL *_destinationUrl;
    CDUnknownBlockType _onErrorBlock;
    CDUnknownBlockType _onCompletedBlock;
    long long _progress;
    NSString *_phase;
    NSString *_workTitle;
}

+ (void)initialize;
@property(copy) NSString *workTitle; // @synthesize workTitle=_workTitle;
@property(copy) NSString *phase; // @synthesize phase=_phase;
@property long long progress; // @synthesize progress=_progress;
@property BOOL complete; // @synthesize complete=_complete;
@property(copy) CDUnknownBlockType onCompletedBlock; // @synthesize onCompletedBlock=_onCompletedBlock;
@property(copy) CDUnknownBlockType onErrorBlock; // @synthesize onErrorBlock=_onErrorBlock;
@property(copy) NSURL *destinationUrl; // @synthesize destinationUrl=_destinationUrl;
@property(copy) NSString *itsRulePath; // @synthesize itsRulePath=_itsRulePath;
@property(copy) NSArray *targetLanguages; // @synthesize targetLanguages=_targetLanguages;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (void)exportLocalizations;
- (id)initWithWorkspace:(id)arg1 buildParameters:(id)arg2 container:(id)arg3 options:(id)arg4 sourceLocale:(id)arg5 testActivities:(id)arg6 targetLanguages:(id)arg7 destinationURL:(id)arg8;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

