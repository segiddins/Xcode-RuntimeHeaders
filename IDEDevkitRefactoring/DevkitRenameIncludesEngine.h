//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEDevkitRefactoring/DevkitTransformationEngine.h>

@class NSMutableArray;

@interface DevkitRenameIncludesEngine : DevkitTransformationEngine
{
    NSMutableArray *_includeSitesChanged;
}

- (void).cxx_destruct;
- (BOOL)checkFinal;
- (BOOL)performPerFile;
- (BOOL)checkPerFile;
- (BOOL)checkFirstFile;
- (BOOL)checkValidateInputs;
- (id)transformRelatedNames;
- (id)requiredParamDictKeys;
- (id)initWithTransformInstance:(id)arg1 declaration:(id)arg2 paramDict:(id)arg3;

@end

