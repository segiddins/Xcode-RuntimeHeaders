//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTObservingToken, NSMutableArray;

@interface IDETestsActivityLogBuilderWorkerState : NSObject
{
    NSMutableArray *_recorderStack;
    DVTObservingToken *_runnablePIDObservationToken;
}

- (void).cxx_destruct;
@property(readonly) DVTObservingToken *runnablePIDObservationToken; // @synthesize runnablePIDObservationToken=_runnablePIDObservationToken;
@property(readonly) NSMutableArray *recorderStack; // @synthesize recorderStack=_recorderStack;
- (void)popRecorderWithAbnormalFinishMessageForReason:(id)arg1 error:(id)arg2;
- (void)popRecorder;
- (void)finishSubSectionRecordersWithReason:(id)arg1 error:(id)arg2;
- (void)appendAndPropagateUpText:(id)arg1 startingWithRecorder:(id)arg2;
- (void)addDiagnosticLogInfoMessageToRecorder:(id)arg1 logPath:(id)arg2;
- (void)dealloc;
- (id)initWithWorker:(id)arg1 forTestTargetRunner:(id)arg2 diagnosticLogPath:(id)arg3;

@end

