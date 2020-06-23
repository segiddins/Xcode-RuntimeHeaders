//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEModelFoundation/CDMProperty.h>

@class NSArray, NSExpression, NSString;

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
    BOOL _preserveAfterDeletion;
    BOOL _derived;
    NSExpression *_derivationExpression;
    long long _preferredType;
}

+ (id)keyPathsForValuesAffectingUsesScalarValueType;
+ (id)keyPathsForValuesAffectingMaxValueObject;
+ (id)keyPathsForValuesAffectingMinValueObject;
+ (id)keyPathsForValuesAffectingDefaultValueObject;
+ (id)keyPathsForValuesAffectingHasDefaultValueObject;
+ (id)keyPathsForValuesAffectingInspectedCanChangeTransient;
+ (id)keyPathsForValuesAffectingInspectedShouldShowDefaultValue;
+ (id)keyPathsForValuesAffectingInspectedShouldShowValidation;
+ (id)keyPathsForValuesAffectingInspectedCanChangeModuleName;
+ (id)keyPathsForValuesAffectingInspectedCanChangeClassName;
+ (id)keyPathsForValuesAffectingInspectedCanChangeScalarValueType;
+ (id)keyPathsForValuesAffectingInspectedShouldShowTransformableContent;
+ (id)keyPathsForValuesAffectingInspectedShouldShowURIContent;
+ (id)keyPathsForValuesAffectingInspectedShouldShowUUIDContent;
+ (id)keyPathsForValuesAffectingInspectedShouldShowBinaryDataContent;
+ (id)keyPathsForValuesAffectingInspectedShouldShowDateContent;
+ (id)keyPathsForValuesAffectingInspectedShouldShowBooleanContent;
+ (id)keyPathsForValuesAffectingInspectedShouldShowStringContent;
+ (id)keyPathsForValuesAffectingInspectedShouldShowDecimalContent;
+ (id)keyPathsForValuesAffectingInspectedShouldShowIntegerContent;
+ (id)keyPathsForValuesAffectingInspectedShouldShowUndefinedContent;
+ (id)keyPathsForValuesAffectingInspectedDerived;
+ (id)keyPathsForValuesAffectingInspectedDefaultValuePlaceholder;
+ (id)keyPathsForValuesAffectingInspectedAttributeType;
+ (id)keyPathsForValuesAffectingInspectedClassName;
+ (id)keyPathsForValuesAffectingInspectedModuleName;
@property long long preferredType; // @synthesize preferredType=_preferredType;
@property(copy, nonatomic) NSString *valueTransformerName; // @synthesize valueTransformerName=_valueTransformerName;
@property(copy, nonatomic) NSString *regularExpressionString; // @synthesize regularExpressionString=_regularExpressionString;
@property(copy, nonatomic) NSString *maxValueString; // @synthesize maxValueString=_maxValueString;
@property(copy, nonatomic) NSString *minValueString; // @synthesize minValueString=_minValueString;
@property(copy, nonatomic) NSString *defaultValueString; // @synthesize defaultValueString=_defaultValueString;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)encodeXMLElement;
- (void)awakeAfterXMLDecoding;
- (id)xmlElementAttributes;
- (id)initWithXMLElement:(id)arg1 owner:(id)arg2 error:(id *)arg3;
@property(readonly) NSString *attributeTypeString;
- (id)addKeysToDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 inModel:(id)arg2;
- (void)generateDerivedAttributeErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
- (void)generateCloudKitErrorsAndWarningsForConfigurations:(id)arg1 withCallback:(id)arg2 forDocumentAtURL:(id)arg3;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
- (void)createWarningsWithCallback:(id)arg1 forDocumentVersionRequirement:(struct NSString *)arg2 featureName:(id)arg3 category:(int)arg4 element:(id)arg5 documentURL:(id)arg6;
- (id)undoManager;
- (BOOL)mapsDirectlyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)syncable;
@property(copy, nonatomic) NSExpression *derivationExpression; // @synthesize derivationExpression=_derivationExpression;
@property(nonatomic, getter=isDerived) BOOL derived; // @synthesize derived=_derived;
@property BOOL preserveAfterDeletion; // @synthesize preserveAfterDeletion=_preserveAfterDeletion;
@property(copy, nonatomic) NSString *customClassName; // @synthesize customClassName=_customClassName;
@property BOOL allowsExternalBinaryDataStorage; // @synthesize allowsExternalBinaryDataStorage=_allowsExternalBinaryDataStorage;
@property BOOL usesScalarValueType;
@property(nonatomic) long long attributeType; // @synthesize attributeType=_attributeType;
@property(readonly, copy) id maxValueObjectNonNilValue;
@property(copy, nonatomic) id maxValueObject;
@property(nonatomic) BOOL hasMaxValueObject;
@property(readonly, copy) id minValueObjectNonNilValue;
@property(copy, nonatomic) id minValueObject;
@property(nonatomic) BOOL hasMinValueObject;
@property(readonly, copy) id defaultValueObjectNonNilValue;
@property(retain) id defaultValueObject;
@property(nonatomic) BOOL hasDefaultValueObject;
- (id)stringForValueObject:(id)arg1 withType:(long long)arg2;
- (id)valueObjectForString:(id)arg1 withType:(long long)arg2;
- (id)_dateFormatter;
- (void)cascadeChangesToLegacyAttribute:(id)arg1;
- (id)initWithLegacyAttribute:(id)arg1 belongingToEntity:(id)arg2 inModel:(id)arg3;
- (id)initInModel:(id)arg1;
- (void)_registerUndoBlockForFoundAttribute:(CDUnknownBlockType)arg1;
- (BOOL)inspectedCanChangeTransient;
- (BOOL)inspectedShouldShowDefaultValue;
- (BOOL)inspectedShouldShowValidation;
- (BOOL)inspectedCanChangeModuleName;
- (BOOL)inspectedCanChangeClassName;
- (BOOL)inspectedCanChangeScalarValueType;
- (BOOL)inspectedShouldShowTransformableContent;
- (BOOL)inspectedShouldShowURIContent;
- (BOOL)inspectedShouldShowUUIDContent;
- (BOOL)inspectedShouldShowBinaryDataContent;
- (BOOL)inspectedShouldShowDateContent;
- (BOOL)inspectedShouldShowBooleanContent;
- (BOOL)inspectedShouldShowStringContent;
- (BOOL)inspectedShouldShowDecimalContent;
- (BOOL)inspectedShouldShowIntegerContent;
- (BOOL)inspectedShouldShowUndefinedContent;
@property(nonatomic) BOOL inspectedDerived;
- (id)inspectedDefaultValuePlaceholder;
- (void)setAttributeTypeIndex:(long long)arg1;
- (long long)attributeTypeIndex;
@property long long inspectedAttributeType;
@property(copy) NSString *inspectedClassName;
@property(copy) NSString *inspectedModuleName;
@property(readonly, copy) NSArray *possibleModuleDisplayValues;
@property(readonly, copy) NSArray *possibleModuleNameObjects;
- (id)validateStringValue:(id)arg1 asType:(unsigned long long)arg2;
- (id)code_effectiveCustomClassModuleName;
- (id)code_effectiveCustomClassName;
- (id)code_propertyParameter;
- (id)code_propertyTypeScalarSwift;
- (id)code_propertyTypeScalarObjC;
- (id)code_propertyTypeSwift;
- (id)code_propertyTypeObjC;
- (id)code_propertyType;

@end

