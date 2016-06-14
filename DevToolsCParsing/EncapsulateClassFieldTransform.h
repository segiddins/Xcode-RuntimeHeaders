//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCParsing/Transform.h>

@class NSString;

@interface EncapsulateClassFieldTransform : Transform
{
    BOOL _addedFunctionsToImplementation;
    BOOL _addedFunctionsToInterface;
    NSString *_setterFunctionText;
    NSString *_setterPrototypeText;
    NSString *_getterFunctionText;
    NSString *_getterPrototypeText;
    NSString *_setterName;
    NSString *_getterName;
}

- (BOOL)performPerFile;
- (void)convertIvarReference:(id)arg1;
- (void)convertMemberReference:(id)arg1 forIdentifier:(id)arg2;
- (void)makeFieldGetterExprFor:(id)arg1 identifier:(id)arg2 priority:(long long)arg3;
- (void)makeFieldSetterExprFor:(id)arg1 identifier:(id)arg2 priority:(long long)arg3;
- (void)makeGetterExprFor:(id)arg1;
- (void)makeSetterExprFor:(id)arg1;
- (BOOL)performFirstFile;
- (BOOL)checkFinal;
- (BOOL)checkPerFile;
- (BOOL)checkFirstFile;
- (BOOL)checkValidateInputs;
- (id)transformRelatedNames;
- (id)getterMethodName;
- (id)setterMethodName;
- (void)dealloc;
- (id)initWithTransformInstance:(id)arg1 declaration:(id)arg2 paramDict:(id)arg3;

@end

