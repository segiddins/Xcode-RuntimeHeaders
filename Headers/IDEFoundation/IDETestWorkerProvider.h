//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDETestWorkerProvider-Protocol.h>

@class IDEExecutionEnvironment, IDETestDestination, IDETestRunSpecification, IDETestRunSpecificationGroup, NSURL;
@protocol IDETestingActivityGenerating;

@interface IDETestWorkerProvider : NSObject <IDETestWorkerProvider>
{
    IDETestRunSpecification *_testRunSpecification;
    IDETestRunSpecificationGroup *_testRunSpecificationGroup;
    IDEExecutionEnvironment *_executionEnvironment;
    CDUnknownBlockType _launchParametersBlock;
    IDETestDestination *_testDestination;
    NSURL *_artifactsDirectory;
    id <IDETestingActivityGenerating> _activityReporter;
}

@property(readonly) id <IDETestingActivityGenerating> activityReporter; // @synthesize activityReporter=_activityReporter;
@property(readonly) NSURL *artifactsDirectory; // @synthesize artifactsDirectory=_artifactsDirectory;
@property(retain) IDETestDestination *testDestination; // @synthesize testDestination=_testDestination;
@property(readonly, copy) CDUnknownBlockType launchParametersBlock; // @synthesize launchParametersBlock=_launchParametersBlock;
@property(readonly) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
@property(readonly) IDETestRunSpecificationGroup *testRunSpecificationGroup; // @synthesize testRunSpecificationGroup=_testRunSpecificationGroup;
@property(readonly) IDETestRunSpecification *testRunSpecification; // @synthesize testRunSpecification=_testRunSpecification;
- (void).cxx_destruct;
- (void)returnWorker:(id)arg1;
- (id)vendWorker;
- (id)initWithTestRunSpecification:(id)arg1 testRunSpecificationGroup:(id)arg2 testDestination:(id)arg3 executionEnvironment:(id)arg4 launchParametersBlock:(CDUnknownBlockType)arg5 artifactsDirectory:(id)arg6 activityReporter:(id)arg7;

@end

