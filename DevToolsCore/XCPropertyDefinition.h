//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString, TSPropertyListDictionary, XCPropertyDomainSpecification, XCPropertyMacroExpression;
@protocol XCPropertyTypes;

@interface XCPropertyDefinition : NSObject
{
    NSString *_name;
    _Bool _isUserDefined;
    _Bool _hasResolvedFileTypes;
    _Bool _uiShouldRemoveIfEmpty;
    _Bool _isAppleInternalOnly;
    id <XCPropertyTypes> _uiType;
    NSArray *_allowedValues;
    id _defaultValue;
    NSSet *_supportedArchs;
    NSSet *_supportedFileTypes;
    XCPropertyDomainSpecification *_domain;
    NSSet *_conditionFlavors;
    id _commandLineArgs;
    XCPropertyMacroExpression *_conditionExpression;
    NSDictionary *_additionalLinkerArgs;
    NSDictionary *_additionalLibrarianArgs;
    NSString *_categoryName;
    NSString *_nameOfOptionToPrecedeOnCL;
    NSString *_nameOfOptionToSucceedOnCL;
    NSString *_nameOfOptionToPrecedeInUI;
    NSString *_nameOfOptionToSucceedInUI;
    NSDictionary *_additionalBuildSettings;
    NSString *_localizedName;
    NSString *_localizedDescription;
    NSArray *_localizedAllowedValues;
    NSString *_defLocDesc;
    TSPropertyListDictionary *_properties;
}

+ (id)stringRepresentationFromPropertyValue:(id)arg1 error:(id *)arg2;
+ (id)propertyValueFromStringRepresentation:(id)arg1 error:(id *)arg2;
+ (BOOL)isListType;
+ (id)identifier;
+ (BOOL)unregisterPropertyTypeForPropertyNamed:(id)arg1;
+ (BOOL)registerPropertyType:(id)arg1 forPropertyNamed:(id)arg2;
+ (id)typeOfPropertyNamed:(id)arg1;
+ (id)enumerationPropertyDefinitionWithName:(id)arg1 allowedValues:(id)arg2 defaultValue:(id)arg3;
+ (id)booleanPropertyDefinitionWithName:(id)arg1 defaultValue:(id)arg2;
+ (id)stringListPropertyDefinitionWithName:(id)arg1 defaultValue:(id)arg2;
+ (id)pathListPropertyDefinitionWithName:(id)arg1 defaultValue:(id)arg2;
+ (id)stringPropertyDefinitionWithName:(id)arg1 defaultValue:(id)arg2;
+ (id)propertyDefinitionFromPListDictionary:(id)arg1;
+ (void)initialize;
+ (id)dbgAllPropertyDefinitions;
- (void)printToStdout;
- (id)description;
- (id)generateArgumentsForCommand:(id)arg1 inBuildContext:(id)arg2;
- (id)argumentGenerationInfoProvidersForValue:(id)arg1;
- (id)generatedCommandLineArgumentsForValue:(id)arg1 inTargetBuildContext:(id)arg2;
- (id)_generatedCommandLineArgumentsFromInstrux:(void *)arg1 forValue:(id)arg2 inContext:(id)arg3;
- (BOOL)propertyIsEnabledInPropertyExpansionContext:(id)arg1;
- (id)localizedAllowedValues;
- (id)localizedDescription;
- (id)localizedName;
- (void)setDefinitionLocationDescription:(id)arg1;
- (id)definitionLocationDescription;
- (id)valueForUndefinedKey:(id)arg1;
- (id)properties;
- (void)setUserDefined:(BOOL)arg1;
- (BOOL)isUserDefined;
- (BOOL)uiShouldRemoveIfEmptyValue;
- (id)nameOfOptionToSucceedInUserInterface;
- (id)nameOfOptionToPrecedeInUserInterface;
- (id)nameOfOptionToSucceedOnCommandLine;
- (id)nameOfOptionToPrecedeOnCommandLine;
- (id)categoryNameForUserInterface;
- (void)setCategory:(id)arg1;
- (id)category;
- (BOOL)isAppleInternalOnly;
- (id)conditionExpression;
- (id)commandArgumentGenerationInfo;
- (BOOL)canGenerateCommandLineArguments;
- (id)conditionFlavors;
- (void)setPropertyDomain:(id)arg1;
- (id)propertyDomain;
- (BOOL)supportsFileType:(id)arg1;
- (id)supportedFileTypes;
- (BOOL)supportsArchitecture:(id)arg1;
- (id)supportedArchitectures;
- (id)additionalBuildSettings;
- (id)defaultValue;
- (id)allowedValues;
- (id)uiTypeString;
- (id)uiType;
- (BOOL)isListType;
- (id)typeString;
- (id)type;
- (id)name;
- (void)dealloc;
- (id)init;
- (id)initFromPListDictionary:(id)arg1;
- (void)_loadLocalizationsFromPropertyListDictionary:(id)arg1 stringsDictionary:(id)arg2;
- (id)initWithName:(id)arg1 allowedValues:(id)arg2 defaultValue:(id)arg3 isAppleInternalOnly:(BOOL)arg4 commandLineArguments:(void *)arg5;
- (id)initWithName:(id)arg1 uiType:(id)arg2 allowedValues:(id)arg3 defaultValue:(id)arg4 isAppleInternalOnly:(BOOL)arg5 commandLineArguments:(void *)arg6;

@end

