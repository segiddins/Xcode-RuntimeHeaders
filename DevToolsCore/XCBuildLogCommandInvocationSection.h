//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCBuildLogSection.h>

@class NSString, XCBuildCommandState;

@interface XCBuildLogCommandInvocationSection : XCBuildLogSection
{
    NSString *_inputFilePath;
    double _inputFileModTime;
    NSString *_ruleInfoDesc;
    NSString *_commandDetailDesc;
    XCBuildCommandState *_commandState;
    long long _resultCode;
}

+ (id)sectionByDeserializingData:(id)arg1 ruleInfo:(id)arg2 error:(id *)arg3;
+ (Class)logRecorderClass;
- (void)writeToSerializer:(id)arg1;
- (id)initFromDeserializer:(id)arg1;
- (void)logRecorder:(id)arg1 didStopRecordingWithInfo:(id)arg2;
- (long long)resultCode;
- (void)setCommandState:(id)arg1;
- (id)commandState;
- (id)emittedOutputText;
- (void)logRecorder:(id)arg1 setCommandDetailDescription:(id)arg2;
- (id)commandDetailDescription;
- (id)ruleInfoDescription;
- (double)inputFileModificationTime;
- (id)inputFilePath;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 ruleInfoDescription:(id)arg2 detailDescription:(id)arg3 inputFilePath:(id)arg4 commandState:(id)arg5;
- (BOOL)isCommandInvocationSection;
- (BOOL)isRuleInvocation;
- (id)filePath;

@end

