//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceEditor/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSArray, NSMutableArray, NSString;
@protocol IDEDiagnosticControllerDataSource;

@interface IDEDiagnosticController : NSObject <DVTInvalidation>
{
    id <IDEDiagnosticControllerDataSource> _dataSource;
    double _diagnosticsGenerationDelay;
    BOOL _hasScheduledDiagnosticsGeneration;
    BOOL _isDiagnosisEnabled;
    BOOL _needsDiagnosis;
}

+ (void)initialize;
+ (id)diagnosticControllerLogAspect;
@property(nonatomic) BOOL needsDiagnosis; // @synthesize needsDiagnosis=_needsDiagnosis;
@property(nonatomic, getter=isDiagnosisEnabled) BOOL diagnosisEnabled; // @synthesize diagnosisEnabled=_isDiagnosisEnabled;
@property BOOL hasScheduledDiagnosticsGeneration; // @synthesize hasScheduledDiagnosticsGeneration=_hasScheduledDiagnosticsGeneration;
@property double diagnosticsGenerationDelay; // @synthesize diagnosticsGenerationDelay=_diagnosticsGenerationDelay;
@property(readonly) id <IDEDiagnosticControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)cancelDiagnosticsGeneration;
- (void)scheduleDiagnosticsGeneration;
- (void)scheduleDiagnosticsGenerationWithDelay:(double)arg1;
- (void)diagnose;
@property(readonly, copy) NSMutableArray *mutableDiagnosticItems;
@property(copy) NSArray *diagnosticItems;
- (void)primitiveInvalidate;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

