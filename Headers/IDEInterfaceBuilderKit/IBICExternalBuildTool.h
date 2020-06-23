//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBICExternalBuildTool : NSObject
{
    NSString *_executablePath;
    BOOL _attemptedToFindExecutable;
    NSString *_platformIdentifier;
}

- (void).cxx_destruct;
@property(readonly) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
- (BOOL)processContentAtPath:(id)arg1 outputPath:(id)arg2 error:(id *)arg3;
- (id)errorForInputFile:(id)arg1 codeType:(id)arg2 code:(long long)arg3 standardError:(id)arg4 standardOutput:(id)arg5;
- (id)taskForProcessingContentAtPath:(id)arg1 withOutputPath:(id)arg2 error:(id *)arg3;
- (id)pathForPlatformToolReturningDiagnostics:(id *)arg1;
- (id)toolName;
- (id)initWithPlatformIdentifier:(id)arg1;

@end

