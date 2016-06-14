//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelFoundation/CDMProperty.h>

@class NSString;

@interface CDMAttribute : CDMProperty
{
    long long _attributeType;
    NSString *_defaultValueString;
    NSString *_minValueString;
    NSString *_maxValueString;
    NSString *_regularExpressionString;
    NSString *_valueTransformerName;
    BOOL _allowsExternalBinaryDataStorage;
    NSString *_customClassName;
    long long _preferredType;
}

+ (id)keyPathsForValuesAffectingUsesScalarValueType;
+ (id)keyPathsForValuesAffectingInspectedAttributeType;
+ (id)keyPathsForValuesAffectingMaxValueObject;
+ (id)keyPathsForValuesAffectingMinValueObject;
+ (id)keyPathsForValuesAffectingDefaultValueObject;
@property long long preferredType; // @synthesize preferredType=_preferredType;
@property(copy, nonatomic) NSString *valueTransformerName; // @synthesize valueTransformerName=_valueTransformerName;
@property(copy, nonatomic) NSString *regularExpressionString; // @synthesize regularExpressionString=_regularExpressionString;
@property(copy, nonatomic) NSString *maxValueString; // @synthesize maxValueString=_maxValueString;
@property(copy, nonatomic) NSString *minValueString; // @synthesize minValueString=_minValueString;
@property(copy, nonatomic) NSString *defaultValueString; // @synthesize defaultValueString=_defaultValueString;
@property(nonatomic) long long attributeType; // @synthesize attributeType=_attributeType;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)xmlElementDescription;
- (id)xmlElementAttributes;
- (id)initWithXMLElementDescription:(id)arg1 belongingToModel:(id)arg2;
@property(readonly) NSString *attributeTypeString;
- (void)setAttributeTypeIndex:(long long)arg1;
- (long long)attributeTypeIndex;
- (id)addKeysToDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 inModel:(id)arg2;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
- (id)undoManager;
- (BOOL)mapsDirectlyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(copy, nonatomic) NSString *customClassName; // @synthesize customClassName=_customClassName;
@property BOOL allowsExternalBinaryDataStorage; // @synthesize allowsExternalBinaryDataStorage=_allowsExternalBinaryDataStorage;
@property BOOL usesScalarValueType;
@property long long inspectedAttributeType;
- (id)maxValueObjectNonNilValue;
@property(copy, nonatomic) id maxValueObject;
@property(nonatomic) BOOL hasMaxValueObject;
- (id)minValueObjectNonNilValue;
@property(copy, nonatomic) id minValueObject;
@property(nonatomic) BOOL hasMinValueObject;
- (id)defaultValueObjectNonNilValue;
@property(retain) id defaultValueObject;
@property(nonatomic) BOOL hasDefaultValueObject;
- (id)stringForValueObject:(id)arg1 withType:(long long)arg2;
- (id)valueObjectForString:(id)arg1 withType:(long long)arg2;
- (id)_dateFormatter;
- (void)cascadeChangesToLegacyAttribute:(id)arg1;
- (id)initWithLegacyAttribute:(id)arg1 belongingToEntity:(id)arg2 inModel:(id)arg3;
- (id)initInModel:(id)arg1;
- (void)_registerUndoBlockForFoundAttribute:(CDUnknownBlockType)arg1;
- (id)validateStringValue:(id)arg1 asType:(unsigned long long)arg2;
- (id)code_propertyParameter;
- (id)code_propertyTypePrimitiveSwift;
- (id)code_propertyTypePrimitive;
- (id)code_propertyTypeSwift;
- (id)code_propertyType;

@end

