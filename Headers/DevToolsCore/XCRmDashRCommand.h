//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/XCWorkQueueCommand.h>

@class NSString, PBXTargetBuildContext;

@interface XCRmDashRCommand : XCWorkQueueCommand
{
    NSString *_path;
    PBXTargetBuildContext *_buildContext;
}

- (void).cxx_destruct;
- (id)description;
- (id)progressDescription;
- (id)executionDescription;
- (id)createStartedCommandInvocationWithParameters:(id)arg1;
- (id)instantiatedCommandOutputParserWithLogSectionRecorder:(id)arg1;
- (id)descriptionForWorkQueueLog;
- (id)subprocessCommandLineForProcessing;
- (id)ruleInfo;
- (id)buildContext;
- (void)setMacroExpansionScope:(id)arg1;
- (id)name;
- (id)path;
- (id)initWithPath:(id)arg1;

@end

