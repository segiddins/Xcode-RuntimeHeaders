//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XDBase/XDPMProperty.h>

#import <XDBase/XCDiffHashing-Protocol.h>

@class NSDictionary;

@interface XDPMRelationship : XDPMProperty <XCDiffHashing>
{
    NSDictionary *_deleteRuleDictionary;
}

+ (unsigned long long)deleteRuleValueForString:(id)arg1;
+ (id)allDeleteRuleDictionaries;
+ (id)deleteRuleDictionaryForValue:(unsigned long long)arg1;
+ (id)deleteRuleStringForValue:(unsigned long long)arg1;
- (id)propertyDifferencesRelativeToProperty:(id)arg1 versionHashDiffsOnly:(BOOL)arg2;
- (id)versionHash;
- (id)code_relationshipDestinationClass;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1;
- (id)possibleValuesForSharedKeyOne;
- (void)setSharedKeyOne:(id)arg1;
- (id)sharedKeyOne;
- (id)possibleInverseRelationships;
- (id)possibleDestinationEntities;
- (id)allDeleteRuleDictionaries;
- (void)setIsOptional:(BOOL)arg1;
- (void)setIsToMany:(BOOL)arg1;
- (BOOL)isToMany;
- (BOOL)isIndexed;
- (void)setInverseRelationship:(id)arg1;
- (id)inverseRelationship;
- (void)setDeleteRuleDictionary:(id)arg1;
- (id)deleteRuleDictionary;
- (id)deleteRuleAsString;
- (void)setDeleteRule:(unsigned long long)arg1;
- (unsigned long long)deleteRule;
- (void)setMaxCountNumber:(id)arg1;
- (id)maxCountNumber;
- (void)setMinCountNumber:(id)arg1;
- (id)minCountNumber;
- (void)setMaxCount:(long long)arg1;
- (long long)maxCount;
- (void)setMinCount:(long long)arg1;
- (long long)minCount;
- (void)setDestinationEntity:(id)arg1;
- (id)destinationEntity;
- (id)propertyKind;
- (void)dealloc;
- (id)addKeysToDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (id)childrenForRefactoring;
- (id)nameForRefactoring;
- (id)children;
- (unsigned long long)diffHashForDataSource:(id)arg1;
- (BOOL)isGroupItem;
- (BOOL)italicFont;
- (BOOL)boldFont;

@end

