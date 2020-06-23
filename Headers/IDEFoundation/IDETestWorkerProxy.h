//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/XCTTestSchedulerWorker-Protocol.h>

@class IDETestTargetRunner, NSError, NSString;
@protocol IDETestRunner;

@interface IDETestWorkerProxy : NSObject <XCTTestSchedulerWorker>
{
    id <IDETestRunner> _worker;
    IDETestTargetRunner *_testTargetRunner;
    unsigned long long _state;
    NSError *_overridingError;
}

- (void).cxx_destruct;
@property(copy) NSError *overridingError; // @synthesize overridingError=_overridingError;
@property unsigned long long state; // @synthesize state=_state;
@property __weak IDETestTargetRunner *testTargetRunner; // @synthesize testTargetRunner=_testTargetRunner;
@property(readonly) id <IDETestRunner> worker; // @synthesize worker=_worker;
@property(readonly, copy) NSString *description;
- (void)logMessage:(id)arg1;
- (void)executeTestIdentifiers:(id)arg1 skippingTestIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)shutdown;
- (void)intentionallyCancelWithError:(id)arg1;
- (id)initWithWorker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
