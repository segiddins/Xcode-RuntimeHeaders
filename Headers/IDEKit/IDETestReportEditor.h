//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEResultBundleEditor.h>

#import <IDEKit/IDETestReport_RootObject-Protocol.h>

@class DVTObservingToken, DVTReplacementView, IDESchemeActionsInvocationRecord, NSArray, NSString;
@protocol IDEResultBundleURLRedirecting;

@interface IDETestReportEditor : IDEResultBundleEditor <IDETestReport_RootObject>
{
    DVTReplacementView *_replacementView;
    NSArray *_performanceMetricsForDisplay;
    NSArray *_currentSelectedDocumentLocations;
    NSArray *_currentSelectedItems;
    double _totalDuration;
    DVTObservingToken *_invocationFinishedObserver;
    id <IDEResultBundleURLRedirecting> _urlRedirector;
}

+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
- (void).cxx_destruct;
@property(retain) id <IDEResultBundleURLRedirecting> urlRedirector; // @synthesize urlRedirector=_urlRedirector;
@property(retain) DVTObservingToken *invocationFinishedObserver; // @synthesize invocationFinishedObserver=_invocationFinishedObserver;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(copy, nonatomic) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(copy, nonatomic) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
@property(copy, nonatomic) NSArray *performanceMetricsForDisplay; // @synthesize performanceMetricsForDisplay=_performanceMetricsForDisplay;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void)selectDocumentLocations:(id)arg1;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *ide_testReport_rootObject_schemeActionsInvocationRecord;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_attachmentsHaveBeenPruned;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_canRevealActivityAssetsLocally;
@property(readonly, nonatomic) BOOL ide_testReport_test_fetchesTestRunsLazily;
- (BOOL)ide_testReport_shouldEnableBaselineUpdatingUIForWorkspace:(id)arg1;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_supportsDurationColumn;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_allTestClasses;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_perfMetricNames;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_devices;
@property(readonly, copy, nonatomic) NSString *ide_testReport_rootObject_identifier;
@property(readonly, nonatomic) double ide_testReport_rootObject_duration;
- (void)_installURLRedirector;
- (void)installReport;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (id)testReport;
- (id)reportDocument;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

