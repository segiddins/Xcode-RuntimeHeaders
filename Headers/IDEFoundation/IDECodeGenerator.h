//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSDictionary, NSString;

@interface IDECodeGenerator : NSObject <DVTInvalidation>
{
    NSDictionary *_userInfo;
}

+ (long long)executeCommandLineMainWithIdentifier:(id)arg1;
+ (id)codeGeneratorWithIdentifier:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (long long)commandLineMain;
- (long long)executeCommandLineEquivalent:(id)arg1 returningStandardOutput:(id *)arg2 standardError:(id *)arg3;
- (Class)toolClassForCommandLineEquivalent;
- (void)generateCodeForInputFile:(id)arg1 outputFilePath:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)generatedFilePathsForInputFilePath:(id)arg1 outputFilePath:(id)arg2 error:(id *)arg3;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

