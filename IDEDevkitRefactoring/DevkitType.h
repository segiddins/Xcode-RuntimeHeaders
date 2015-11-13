//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DevkitBaseType, DevkitDeclaration;

@interface DevkitType : NSObject
{
    DevkitBaseType *_baseType;
    DevkitDeclaration *_complexDeclaration;
    BOOL _ownsComplexDeclaration;
    DevkitDeclaration *_parentDeclaration;
    char _declaratorModifiers[8];
    unsigned char _numberOfModifiers;
    unsigned char _bitfieldWidth;
}

+ (id)typeWithPointerToDeclaration:(id)arg1;
+ (id)typeWithPointerToBasicType:(int)arg1;
+ (id)typeWithDeclaration:(id)arg1;
+ (id)typeWithBasicType:(int)arg1;
- (void).cxx_destruct;
- (id)typeWithoutStorageClass;
- (id)reducedType;
- (BOOL)compareRoot:(id)arg1;
- (BOOL)compare:(id)arg1;
- (BOOL)compareExact:(id)arg1;
- (id)prettyPrintComplex:(BOOL)arg1;
- (id)prettyPrint;
- (id)description;
- (BOOL)isExternClass;
- (BOOL)isTypedefClass;
- (BOOL)isBlockByref;
- (void)addRegisterClass;
- (void)addExternClass;
- (void)addStaticClass;
- (void)addAutoClass;
- (void)addTypedefClass;
- (void)addBlockByrefQualifier;
- (void)addStrongQualifier;
- (void)addVolatileQualifier;
- (void)addRestrictQualifier;
- (void)addConstQualifier;
- (id)returnStringLeftSide:(id *)arg1 rightSide:(id *)arg2;
- (id)rawDescriptionPrettyPrint:(BOOL)arg1 complex:(BOOL)arg2;
- (id)rawDescriptionPrettyPrint:(BOOL)arg1;
- (id)castString;
- (id)castStringNoSpaces;
- (id)castStringWithSpaces:(BOOL)arg1;
- (void)incrementIndirectionsInside;
- (void)addBlockPtrInside;
- (void)addFunctionInside;
- (void)addArrayInside;
- (void)addFunction;
- (void)removeArray;
- (void)addArray;
- (void)dereferenceType;
- (void)addIndirectionsFromType:(id)arg1;
- (void)incrementIndirections;
- (BOOL)isPointerToPointerToThing;
- (BOOL)isPointerToThing;
- (BOOL)isThing;
- (BOOL)isBlockPointer;
- (BOOL)isComplexType;
- (BOOL)isFunctionType;
- (BOOL)isArrayType;
- (BOOL)isPointerType;
- (BOOL)isObjcObjectType;
- (BOOL)isScalarNumberType;
- (BOOL)isUnion;
- (BOOL)isStruct;
- (id)parentDeclaration;
- (void)setParentDeclaration:(id)arg1;
- (id)complexDeclaration;
- (void)setComplexDeclaration:(id)arg1 asOwner:(BOOL)arg2;
- (void)setComplexDeclaration:(id)arg1;
- (id)baseType;
- (void)setBaseType:(id)arg1;
- (BOOL)isBitfield;
- (void)setBitfieldWidth:(unsigned char)arg1;
- (id)initWithBuiltinType:(int)arg1;
- (id)copy;
- (id)initWithBaseType:(id)arg1;
- (id)init;

@end

