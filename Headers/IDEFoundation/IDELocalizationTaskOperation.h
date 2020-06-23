//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

@class DVTDisallowFinishToken, DVTFilePath, DVTTask, NSArray, NSDictionary, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface IDELocalizationTaskOperation : DVTOperation
{
    DVTTask *_task;
    NSObject<OS_dispatch_queue> *_queue;
    DVTDisallowFinishToken *_finishToken;
    DVTFilePath *_launchPath;
    NSArray *_arguments;
    NSDictionary *_environment;
    NSNumber *_exitStatus;
    NSNumber *_signalStatus;
}

@property(copy) NSNumber *signalStatus; // @synthesize signalStatus=_signalStatus;
@property(copy) NSNumber *exitStatus; // @synthesize exitStatus=_exitStatus;
@property(readonly, copy) NSDictionary *environment; // @synthesize environment=_environment;
@property(readonly, copy) NSArray *arguments; // @synthesize arguments=_arguments;
@property(readonly, copy) DVTFilePath *launchPath; // @synthesize launchPath=_launchPath;
- (void).cxx_destruct;
- (void)taskDidFinish;
- (BOOL)startTask:(id *)arg1;
- (void)main;
- (id)initWithLaunchPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3;

@end

