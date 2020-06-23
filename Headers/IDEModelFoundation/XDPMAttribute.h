//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEModelFoundation/XDPMProperty.h>

@class NSDictionary;

@interface XDPMAttribute : XDPMProperty
{
    NSDictionary *_attributeTypeDictionary;
}

+ (id)attributeTypeDictionaryForTypeString:(id)arg1;
+ (id)allAttributeTypeDictionaries;
+ (unsigned long long)attributeTypeForObjCTypeName:(id)arg1;
- (void).cxx_destruct;
- (id)propertyDifferencesRelativeToProperty:(id)arg1 versionHashDiffsOnly:(BOOL)arg2;
- (id)code_propertyTypeSwift;
- (id)code_propertyTypePointer;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
- (void)setAllowsExternalBinaryDataStorage:(BOOL)arg1;
- (BOOL)allowsExternalBinaryDataStorage;
- (id)possibleValuesForSharedKeyOne;
- (void)setSharedKeyOne:(id)arg1;
- (id)sharedKeyOne;
- (void)setValueTransformerName:(id)arg1;
- (id)valueTransformerName;
- (void)setRegularExpressionString:(id)arg1;
- (id)regularExpressionString;
- (void)setMaxValueString:(id)arg1;
- (id)maxValueString;
- (void)setMinValueString:(id)arg1;
- (id)minValueString;
- (void)setDefaultValueAsString:(id)arg1;
- (id)defaultValueAsString;
- (id)allAttributeTypeDictionaries;
- (void)setAttributeTypeDictionary:(id)arg1;
- (id)attributeTypeDictionary;
- (void)setAttributeTypeIndex:(long long)arg1;
- (long long)attributeTypeIndex;
- (void)_createAttributeTypesArray;
- (id)attributeTypeAsString;
- (void)setName:(id)arg1;
- (void)setAttributeType:(unsigned long long)arg1;
- (unsigned long long)attributeType;
- (id)propertyKind;
- (void)dealloc;
- (id)addKeysToDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

