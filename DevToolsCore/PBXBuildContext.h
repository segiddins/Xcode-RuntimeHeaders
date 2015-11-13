//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, XCBuildOperation, XCPropertyExpansionContext;

@interface PBXBuildContext : NSObject
{
    XCBuildOperation *_currentBuildOperation;
    NSString *_baseDirectoryPath;
    XCPropertyExpansionContext *_propertyExpansionContext;
}

- (id)absoluteExpandedPathForString:(id)arg1;
- (id)dictionaryByExpandingEntriesInDictionary:(id)arg1;
- (id)arrayByExpandingEntriesInArray:(id)arg1;
- (BOOL)expandedBooleanValueForString:(id)arg1;
- (BOOL)expandedValueIsNonEmptyForString:(id)arg1;
- (id)expandedValueForString:(id)arg1;
- (void)setPropertyExpansionContext:(id)arg1;
- (id)propertyExpansionContext;
- (void)setLowestTierBuildSettingsDictionaries:(id)arg1;
- (void)setDefaultsTierBuildSettingsDictionaries:(id)arg1;
- (void)popDefaultsTierBuildSettingsDictionary;
- (void)pushDefaultsTierBuildSettingsDictionary:(id)arg1;
- (void)setCustomTierBuildSettingsDictionaries:(id)arg1;
- (void)popCustomTierBuildSettingsDictionary;
- (void)pushCustomTierBuildSettingsDictionary:(id)arg1;
- (void)setHighestTierBuildSettingsDictionaries:(id)arg1;
- (void)setToolParameterTierBuildSettingsDictionaries:(id)arg1;
- (void)popToolParameterTierBuildSettingsDictionary;
- (void)pushToolParameterTierBuildSettingsDictionary:(id)arg1;
- (void)removeAllDynamicSettings;
- (void)appendStringOrStringListValue:(id)arg1 toDynamicSetting:(id)arg2;
- (void)prependStringOrStringListValue:(id)arg1 toDynamicSetting:(id)arg2;
- (void)removeDynamicSetting:(id)arg1;
- (void)setStringValue:(id)arg1 forDynamicSetting:(id)arg2;
- (void)setBaseDirectoryPath:(id)arg1;
- (id)baseDirectoryPath;
- (void)setCurrentBuildOperation:(id)arg1;
- (id)currentBuildOperation;
- (void)dealloc;
- (id)init;
- (id)valueForUndefinedKey:(id)arg1;

@end

