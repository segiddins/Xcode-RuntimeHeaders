//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDECodeGenerator.h>

@interface IDEIntentBuilderCodeGenerator : IDECodeGenerator
{
}

+ (id)codeGeneratorExtensionIdentifierForFileDataType:(id)arg1;
+ (void)_registerCodeGeneratorExtensionIdentifier:(id)arg1 forFileDataType:(id)arg2;
+ (id)_codeGeneratorIdentifierRegistry;
- (Class)toolClassForCommandLineEquivalent;
- (id)_loadModelForInputFile:(id)arg1 error:(id *)arg2;
- (void)generateCodeForInputFile:(id)arg1 outputFilePath:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)generatedFilePathsForInputFilePath:(id)arg1 outputFilePath:(id)arg2 error:(id *)arg3;
- (void)primitiveInvalidate;
- (id)init;

@end

