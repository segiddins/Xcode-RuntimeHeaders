//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IDETestRunSpecification;
@protocol IDETestRunner;

@protocol IDETestWorkerProvider
- (BOOL)supportsMultipleWorkersFor:(IDETestRunSpecification *)arg1;
- (void)returnWorker:(id <IDETestRunner>)arg1;
- (id)vendWorker;
@end
