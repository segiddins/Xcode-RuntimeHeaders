//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>

@class IBDocument, NSMutableDictionary, NSSet;

@interface IBMemberPropertyStorage : NSObject <NSCopying, NSCoding>
{
    NSMutableDictionary *_propertyValues;
    NSMutableDictionary *_toManyRelationshipCandidates;
    NSSet *_cachedToManyRelationshipKeyPaths;
    NSMutableDictionary *_observers;
    long long _nextObserverKey;
    NSObject *_documentObject;
}

+ (SEL)selectorForLazilyBoundSetter:(CDUnknownFunctionPointerType)arg1 withIdentifier:(id)arg2 forConfiguration:(id)arg3;
+ (void)enumerateValuesForAttributeKeyPath:(id)arg1 withUnarchiver:(id)arg2 during:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSObject *documentObject; // @synthesize documentObject=_documentObject;
- (void).cxx_destruct;
- (void)enumerateObservers:(CDUnknownBlockType)arg1;
- (id)addPropertyStorageObserver:(id)arg1;
- (void)unarchivePropertyValuesWithUnarchiver:(id)arg1;
- (void)archivePropertyValuesWithArchiver:(id)arg1;
- (BOOL)shouldArchiveOrderedProperties:(id)arg1 forConfiguration:(id)arg2;
- (void)unarchiveBitsForToManyRelationship:(id)arg1 inConfiguration:(id)arg2 withUnarchiver:(id)arg3;
- (void)archiveBitsForToManyRelationship:(id)arg1 inConfiguration:(id)arg2 withArchiver:(id)arg3;
- (id)debugDescription;
- (id)debugDescriptionWithIndent:(long long)arg1;
- (void)setMask:(id)arg1 forObjects:(id)arg2 inToManyRelationship:(id)arg3 inConfiguration:(id)arg4;
- (BOOL)isObjectTurnedOn:(id)arg1 inAnyConfigurationByRelationship:(id)arg2;
- (BOOL)isObjectTurnedOn:(id)arg1 inRelationship:(id)arg2 inConfiguration:(id)arg3;
- (void)flattenAllDataWithEffectiveValuesFromConfiguration:(id)arg1;
- (BOOL)anyNonEmptyConfigurationsHaveExplicitValuesForProperty:(id)arg1;
- (BOOL)anyNonEmptyConfigurationsHaveExplicitValues;
- (BOOL)allExplicitValuesAreForEmptyConfiguration;
- (void)enumerateArchivingOrderedPropertiesGroupedByArchivingOrderedConfigurations:(CDUnknownBlockType)arg1;
- (BOOL)isToManyRelationship:(id)arg1;
- (id)effectiveObjectsForToManyRelationship:(id)arg1 inConfiguration:(id)arg2;
- (id)effectiveBitsForToManyRelationship:(id)arg1 inConfiguration:(id)arg2;
- (id)leastToMostSpecificContributingConfigurationsForProperty:(id)arg1 inConfiguration:(id)arg2;
- (CDUnknownBlockType)configurationPrecedenceComparator;
- (id)candidatesForToManyRelationship:(id)arg1;
- (BOOL)isObject:(id)arg1 inCandidateSetForToManyRelationship:(id)arg2;
- (void)removeCandidatesFromAllToManyRelationships:(id)arg1;
- (void)insertCandidates:(id)arg1 atIndex:(long long)arg2 inToManyRelationship:(id)arg3;
- (void)addCandidates:(id)arg1 toToManyRelationship:(id)arg2;
- (void)addCandidates:(id)arg1 toToManyRelationship:(id)arg2 andTurnOnInConfiguration:(id)arg3;
- (void)setMask:(id)arg1 forObject:(id)arg2 inToManyRelationship:(id)arg3 inConfiguration:(id)arg4;
- (id)effectiveMaskForObject:(id)arg1 inToManyRelationship:(id)arg2 inConfiguration:(id)arg3;
- (void)moveCandidates:(id)arg1 fromToManyRelationship:(id)arg2 toRelationship:(id)arg3 inStorage:(id)arg4 atIndex:(long long)arg5;
- (void)turnOffObjects:(id)arg1 forToManyRelationship:(id)arg2 inConfiguration:(id)arg3;
- (void)turnOnObjects:(id)arg1 forToManyRelationship:(id)arg2 inConfiguration:(id)arg3;
- (void)turnObjects:(id)arg1 inToManyRelationship:(id)arg2 offInEmptyConfigurationAndOnInConfiguration:(id)arg3;
- (void)removeConfigurationsContainingAnyVariableInSet:(id)arg1;
- (void)clearAllMasksForToManyRelationship:(id)arg1;
- (void)setCandidates:(id)arg1 forToManyRelationship:(id)arg2;
- (void)didChangeCandidatesForRelationship:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 context:(id)arg4;
- (void)willChangeCandidatesForRelationship:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 context:(id)arg4;
- (void)intersectMasksForToManyRelationship:(id)arg1 toObjects:(id)arg2;
- (BOOL)isObject:(id)arg1 explicitlyIncludedInAnyMaskForToManyRelationship:(id)arg2;
- (void)enumerateExplicitPropertyValues:(CDUnknownBlockType)arg1;
- (void)enumerateExplicitValuesForProperty:(id)arg1 withMutatingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateExplicitValuesForProperty:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setBits:(id)arg1 forToManyRelationship:(id)arg2 inConfiguration:(id)arg3;
- (void)setEvaluatedValueInEmptyConfigurationByClearingInAllOtherConfigurations:(id)arg1 forAttribute:(id)arg2;
- (void)removeAllOverridesForAttribute:(id)arg1;
- (void)setEvaluatedValueInEmptyConfiguration:(id)arg1 forAttribute:(id)arg2;
- (void)setEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3;
- (void)promoteEffectiveValueToExplicitForProperty:(id)arg1 inConfiguration:(id)arg2;
- (void)setEvaluatedValue:(id)arg1 forProperty:(id)arg2 inConfiguration:(id)arg3;
- (void)setValue:(id)arg1 forProperty:(id)arg2 inConfiguration:(id)arg3;
- (void)didChangeValueForProperty:(id)arg1 inConfiguration:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)willChangeValueForProperty:(id)arg1 inConfiguration:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (id)effectiveEvaluatedValueForAttribute:(id)arg1 inConfiguration:(id)arg2;
- (id)explicitEvaluatedValueForAttributeInEmptyConfiguration:(id)arg1;
- (id)explicitEvaluatedValueForAttribute:(id)arg1 inConfiguration:(id)arg2;
- (id)effectiveValueForProperty:(id)arg1 inConfiguration:(id)arg2;
- (id)configurationsWithExplicitValuesForProperty:(id)arg1;
- (id)allValuesPerConfigurationForProperty:(id)arg1;
- (id)explicitValueForProperty:(id)arg1 inConfiguration:(id)arg2;
- (id)explicitBitsForToManyRelationship:(id)arg1 inConfiguration:(id)arg2;
- (id)definingConfigurationForCandidate:(id)arg1 inRelationshipProperty:(id)arg2 startingAtConfiguration:(id)arg3;
- (void)valueAndDefiningConfigurationForProperty:(id)arg1 startingAtConfiguration:(id)arg2 returningDefiningConfiguration:(id *)arg3 returningValue:(id *)arg4;
- (void)_definingConfigurationStartingAtConfiguration:(id)arg1 forProperty:(id)arg2 candidateForRelationship:(id)arg3 returningDefiningConfiguration:(id *)arg4 returningValue:(id *)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) IBDocument *document;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

