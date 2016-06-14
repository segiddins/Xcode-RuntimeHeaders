//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/NSCopying-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSThread, XCMutablePropertyConditionSet, XCPropertyDictionary;

@interface XCPropertyExpansionContext : NSObject <NSCopying>
{
    NSMutableArray *_propertyDictionaries;
    unsigned long long _propertyDictStartIndices[12];
    XCPropertyDictionary *_variables;
    NSMutableDictionary *_propNamesToPropValuesCache;
    NSMutableDictionary *_stringsToPropValuesCache;
    XCMutablePropertyConditionSet *_conditionSet;
    BOOL _updateConditionalDicts;
    BOOL _preserveUnresolvedRefs;
    NSThread *_accessorThread;
    NSString *_associatedConfigName;
}

- (id)localizedDescriptionsOfDefinitionsOfPropertyNamed:(id)arg1;
- (id)longDescription;
- (id)description;
- (void)removeAllDynamicSettings;
- (void)appendStringOrStringListValue:(id)arg1 toDynamicSetting:(id)arg2;
- (void)prependStringOrStringListValue:(id)arg1 toDynamicSetting:(id)arg2;
- (void)removeDynamicSetting:(id)arg1;
- (void)setStringValue:(id)arg1 forDynamicSetting:(id)arg2;
- (id)dynamicProperties;
- (void)removeAllConditions;
- (void)removeConditionFlavor:(id)arg1;
- (void)addConditionString:(id)arg1 forFlavor:(id)arg2;
- (void)addCondition:(id)arg1;
- (void)setConditionSet:(id)arg1;
- (id)conditionSet;
- (void)_updateConditionalPropertyDictionariesIfNecessary;
- (void)popPropertyDictionary;
- (void)pushPropertyDictionaries:(id)arg1;
- (id)propertyDictionaries;
- (id)propertyDictionariesAtTier:(int)arg1;
- (id)_propertyDictionariesAtTierNoUpdate:(int)arg1;
- (id)allPropertyNamesInAllDictionaries;
- (void)setPropertyDictionariesFromNSDictionariesInArray:(id)arg1 atTier:(int)arg2;
- (void)removePropertyDictionariesAtTier:(int)arg1;
- (void)popPropertyDictionaryAtTier:(int)arg1;
- (void)pushPropertyDictionaries:(id)arg1 atTier:(int)arg2;
- (void)pushPropertyDictionary:(id)arg1 atTier:(int)arg2;
- (void)popEnvironmentDictionary;
- (void)pushEnvironmentDictionary:(id)arg1;
- (void)popDefaultsDictionary;
- (void)pushDefaultsDictionary:(id)arg1;
- (void)popSDKDictionary;
- (void)pushSDKDictionary:(id)arg1;
- (void)popProductDictionary;
- (void)pushProductDictionary:(id)arg1;
- (void)popProjectDefaultsDictionary;
- (void)pushProjectDefaultsDictionary:(id)arg1;
- (void)popSettingsDictionary;
- (void)pushSettingsDictionary:(id)arg1;
- (void)popOverridesDictionary;
- (void)pushOverridesDictionary:(id)arg1;
- (void)setPermittedAccessorThread:(id)arg1;
- (void)appendValue:(id)arg1 toVariable:(id)arg2;
- (void)prependValue:(id)arg1 toVariable:(id)arg2;
- (id)expandedValueForString:(id)arg1;
- (void)setPreservesUnresolvedExpansionReferences:(BOOL)arg1;
- (BOOL)preservesUnresolvedExpansionReferences;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)expandedValueForProperty:(id)arg1;
- (void)setAssociatedConfigurationName:(id)arg1;
- (id)associatedConfigurationName;
- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)lookupValueForProperty:(id)arg1 startingAtLevel:(unsigned long long)arg2 levelFound:(unsigned long long *)arg3;

@end

