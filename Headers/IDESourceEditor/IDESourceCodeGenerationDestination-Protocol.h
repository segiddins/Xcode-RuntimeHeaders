//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class IDESourceCodeGenerationCompositeResult, IDESourceCodeGenerator, NSSet;

@protocol IDESourceCodeGenerationDestination <NSObject>
- (IDESourceCodeGenerationCompositeResult *)sourceCodeGenerator:(IDESourceCodeGenerator *)arg1 commitInsertionOfSourceCodeForCompositeResult:(IDESourceCodeGenerationCompositeResult *)arg2 error:(id *)arg3;
- (NSSet *)supportedSourceCodeLanguagesForSourceCodeGeneration;
@end

