//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCDependencyCommand.h>

@class NSMutableArray, NSString;

@interface XCFixLinkageCommand : XCDependencyCommand
{
    NSMutableArray *_additionalArguments;
    NSString *_compiledCodeFilePath;
    NSString *_outputFilePath;
}

- (id)description;
- (id)instantiatedCommandOutputParserWithLogSectionRecorder:(id)arg1;
- (id)descriptionForWorkQueueLog;
- (id)subprocessCommandLineForProcessing;
- (id)arguments;
- (id)commandPath;
- (id)ruleInfo;
- (id)directoryPathToCreateBeforeProcessing;
- (BOOL)isReadyForProcessing;
- (id)name;
- (id)outputFilePath;
- (id)compiledCodeFilePath;
- (id)commandToolPath;
- (id)additionalArguments;
- (void)addAdditionalArgument:(id)arg1;
- (void)dealloc;
- (id)initWithCommandPath:(id)arg1 compiledCodeFilePath:(id)arg2 outputFilePath:(id)arg3;

@end

