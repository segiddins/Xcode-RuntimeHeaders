//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Declaration;

@interface BaseType : NSObject
{
    Declaration *_userType;
    int _builtinType;
    unsigned int _isEmptyType:1;
    unsigned int _isBuiltinType:1;
    unsigned int _isStruct:1;
    unsigned int _isUnion:1;
    unsigned int _isConst:1;
    unsigned int _isRestrict:1;
    unsigned int _isVolatile:1;
    unsigned int _isStrong:1;
    unsigned int _isUnsigned:1;
    unsigned int _isTypedefClass:1;
    unsigned int _isAutoClass:1;
    unsigned int _isStaticClass:1;
    unsigned int _isExternClass:1;
    unsigned int _isRegisterClass:1;
    unsigned int _isBlockByref:1;
    unsigned int _isCallablePtr:1;
}

- (id)baseTypeWithoutStorageClass;
- (id)description;
- (id)cleanDescription;
- (BOOL)isUnsigned;
- (BOOL)isStrong;
- (BOOL)isRestrict;
- (BOOL)isVolatile;
- (BOOL)isBlockByref;
- (BOOL)isRegister;
- (BOOL)isConst;
- (BOOL)isRegisterClass;
- (BOOL)isStaticClass;
- (BOOL)isAutoClass;
- (BOOL)isExternClass;
- (BOOL)isTypedefClass;
- (void)addBlockByrefQualifier;
- (void)addRegisterClass;
- (void)addExternClass;
- (void)addStaticClass;
- (void)addAutoClass;
- (void)addTypedefClass;
- (void)addUnsignedQualifier;
- (void)addStrongQualifier;
- (void)addVolatileQualifier;
- (void)addRestrictQualifier;
- (void)addConstQualifier;
- (void)setIsCallablePtr;
- (BOOL)isCallablePtr;
- (void)setIsUnion:(BOOL)arg1;
- (BOOL)isUnion;
- (void)setIsStruct:(BOOL)arg1;
- (BOOL)isStruct;
- (id)userType;
- (void)setUserType:(id)arg1;
- (BOOL)isUserType:(id)arg1;
- (int)basicType;
- (void)setBuiltinType:(int)arg1;
- (BOOL)isBuiltinType;
- (void)dealloc;
- (id)copy;
- (id)initWithBasicType:(int)arg1;
- (id)initWithUserType:(id)arg1;
- (id)init;

@end

