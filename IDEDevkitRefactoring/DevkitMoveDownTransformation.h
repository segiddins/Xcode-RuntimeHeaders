//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEDevkitRefactoring/DevkitRefactoringTransformation.h>

@interface DevkitMoveDownTransformation : DevkitRefactoringTransformation
{
}

- (id)snapshotDescription;
- (id)transformParamDict;
- (BOOL)getEngineClass:(Class *)arg1 declaration:(id *)arg2 fromASTNode:(id)arg3 mainThreadArguments:(id)arg4 error:(id *)arg5;
- (id)preliminaryRelatedNames;
- (BOOL)isSymbolValidForTransformation:(id)arg1 error:(id *)arg2;
- (id)localizedSymbolKindPhrase;
- (id)capitalizedLocalizedName;

@end

