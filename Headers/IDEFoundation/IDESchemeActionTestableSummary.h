//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDESchemeActionAbstractTestSummaryObject.h>

#import <IDEFoundation/IDESchemeActionTestContainer-Protocol.h>
#import <IDEFoundation/IDESchemeActionTestSummaryContainer-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSString;

@interface IDESchemeActionTestableSummary : IDESchemeActionAbstractTestSummaryObject <IDESchemeActionTestSummaryContainer, IDESchemeActionTestContainer>
{
    NSMutableArray *_tests;
    BOOL _successfullyBootstrapped;
    BOOL _isUITestBundle;
    BOOL _parallelized;
    NSString *_blueprintProviderRelativePath;
    NSString *_blueprintName;
    NSArray *_diagnosticLogPaths;
    NSString *_diagnosticsDirectory;
    NSDate *_bootstrappedDate;
    long long _testExecutionOrdering;
    NSString *_testLanguage;
    NSString *_testRegion;
    NSString *_testKind;
    NSMutableArray *_mutableFailureSummaries;
}

+ (id)sparseTestableSummaries:(id)arg1 testIdentifiers:(id)arg2;
+ (void)_countOfSuccessfulTests:(unsigned long long *)arg1 failingTests:(unsigned long long *)arg2 mixedTests:(unsigned long long *)arg3 inSummaryContainer:(id)arg4;
+ (void)countOfSuccessfulTests:(unsigned long long *)arg1 failingTests:(unsigned long long *)arg2 mixedTests:(unsigned long long *)arg3 inSummaries:(id)arg4;
+ (void)_coalesceTestSummariesInContainers:(id)arg1 intoAggregateContainer:(id)arg2;
+ (id)coalescedTestableSummaryForTestableSummariesForSameTestable:(id)arg1;
+ (BOOL)includeDummyTestSummaryInTestableSummary;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSMutableArray *mutableFailureSummaries; // @synthesize mutableFailureSummaries=_mutableFailureSummaries;
@property(copy) NSString *testKind; // @synthesize testKind=_testKind;
@property(readonly, copy) NSString *testRegion; // @synthesize testRegion=_testRegion;
@property(readonly, copy) NSString *testLanguage; // @synthesize testLanguage=_testLanguage;
@property BOOL parallelized; // @synthesize parallelized=_parallelized;
@property long long testExecutionOrdering; // @synthesize testExecutionOrdering=_testExecutionOrdering;
@property BOOL isUITestBundle; // @synthesize isUITestBundle=_isUITestBundle;
@property(retain) NSDate *bootstrappedDate; // @synthesize bootstrappedDate=_bootstrappedDate;
@property BOOL successfullyBootstrapped; // @synthesize successfullyBootstrapped=_successfullyBootstrapped;
@property(copy) NSString *diagnosticsDirectory; // @synthesize diagnosticsDirectory=_diagnosticsDirectory;
@property(copy) NSArray *diagnosticLogPaths; // @synthesize diagnosticLogPaths=_diagnosticLogPaths;
@property(copy) NSString *blueprintName; // @synthesize blueprintName=_blueprintName;
@property(copy) NSString *blueprintProviderRelativePath; // @synthesize blueprintProviderRelativePath=_blueprintProviderRelativePath;
- (id)sparseTestableSummaryForTestIdentifiers:(id)arg1;
- (void)enumerateTestsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)isSummaryForSameTestableAsSummary:(id)arg1;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
@property(readonly) NSMutableArray *mutableContainedTestSummaries;
@property(readonly) NSArray *containedTestSummaries;
- (id)dictionaryRepresentation;
- (id)addNewTestSummaryGroupWithName:(id)arg1 identifier:(id)arg2;
- (void)addFailureSummary:(id)arg1;
- (void)addTestSummary:(id)arg1;
@property(readonly, copy) NSArray *failureSummaries;
- (unsigned long long)status;
- (void)loadDiagnosticsFromFilePromise:(id)arg1;
- (id)validDiagnosticTypes;
- (id)allAttachments;
- (void)loadAttachmentsFromDirectory:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 blueprintProviderRelativePath:(id)arg2 blueprintName:(id)arg3 diagnosticsDirectory:(id)arg4 testKind:(id)arg5 testLanguage:(id)arg6 testRegion:(id)arg7 tests:(id)arg8 failureSummaries:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) NSMutableArray *mutableTests; // @dynamic mutableTests;
@property(readonly) Class superclass;
@property(copy) NSArray *tests; // @dynamic tests;

@end

