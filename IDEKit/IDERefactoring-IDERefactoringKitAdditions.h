//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDERefactoring.h>

@interface IDERefactoring (IDERefactoringKitAdditions)
+ (id)currentExpressionSource;
+ (id)performanceLogAspect;
+ (id)logAspect;
- (id)symbolFromSourceExpression:(id)arg1;
- (id)mainFileForSelectionFilePath:(id)arg1 buildSettings:(id *)arg2;
- (id)sessionWithTransformation:(id)arg1 sourceExpression:(id)arg2;
- (BOOL)isRefactoringAllowedForSelectionValidationClass:(Class)arg1 sourceExpression:(id)arg2 error:(id *)arg3;
- (BOOL)isRefactoringAllowedPerIndexing:(id *)arg1;
@end

