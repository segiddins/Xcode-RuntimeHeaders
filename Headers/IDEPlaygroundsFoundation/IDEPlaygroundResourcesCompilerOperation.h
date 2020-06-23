//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

@class DVTFilePath, DVTTask, IDEPlaygroundCommonSharedContext;

@interface IDEPlaygroundResourcesCompilerOperation : DVTOperation
{
    IDEPlaygroundCommonSharedContext *_context;
    DVTFilePath *_inputFilePath;
    DVTTask *_compilerTask;
}

- (void).cxx_destruct;
@property(retain) DVTTask *compilerTask; // @synthesize compilerTask=_compilerTask;
@property(readonly, copy) DVTFilePath *inputFilePath; // @synthesize inputFilePath=_inputFilePath;
@property __weak IDEPlaygroundCommonSharedContext *context; // @synthesize context=_context;
- (void)buildResourceForCoreML;
- (void)buildResourceForInterfaceBuilder;
- (void)main;
- (void)cancel;
- (void)makeHighestPriority;
- (void)makeDefaultPriority;
- (id)initWithContext:(id)arg1 input:(id)arg2;

@end

