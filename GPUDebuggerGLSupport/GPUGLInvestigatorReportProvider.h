//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerGLSupport/GPUInvestigatorReportProvider-Protocol.h>

@class DVTStackBacktrace, DYIntKeyedDictionary, GPUReportEditor, NSString;

__attribute__((visibility("hidden")))
@interface GPUGLInvestigatorReportProvider : NSObject <GPUInvestigatorReportProvider>
{
    GPUReportEditor *_reportEditor;
    int _dataAvailable;
    DYIntKeyedDictionary *_mapFindingToViewNeedingMCS;
}

- (void).cxx_destruct;
- (id)findingStatisticsKeyToResourceTypeMap;
- (void)showResource:(id)arg1;
- (void)updateDisplayedFindingsWithMCSInfo:(id)arg1;
- (void)updateReportWithAdditionalInfo;
- (id)createProgramCentricTreeForGroupedFindings:(id)arg1 investigatorFinding:(id)arg2;
- (void)addFindingToReport:(id)arg1;
- (void)addRedFlagsToReport:(id)arg1 withLevel:(int)arg2;
- (void)updateReportWithRedFlagAnalyzerFindings;
- (void)updateReportWithSessionInfo;
- (void)updateReportWithSectionForCaseData:(int)arg1;
- (void)updateReportWithCaseData:(int)arg1;
- (void)resetReportEditorStateThatDependsOnTheInvestigatorCase;
- (id)localizedStringWithKey:(id)arg1 andComment:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithReportEditor:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

