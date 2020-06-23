//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IBCocoaTouchTargetRuntime;

@interface NSObject (IBCocoaTouchRuntimeMarshalling)
+ (void)registerMarshallingRecordHandlers;
+ (void)ibSwizzledCocoaTouchNSObject_ibPopulateAdditionalInspectorSlices:(id)arg1 forCategory:(id)arg2;
+ (id)keyPathsForValuesAffectingIbInspectedIsAccessibilityElement;
+ (id)keyPathsForValuesAffectingIbInspectedAccessibilityTraits;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
- (void)configureDiagnosticsHandler:(id)arg1 afterFailedMarshallingOperationNamed:(id)arg2;
- (id)configurableKeyPathForMarshalledDesignTimeToManyRelationship:(id)arg1;
- (id)marshalledTraitStorageCandidatesForDesignTimeToManyRelationship:(id)arg1 context:(id)arg2;
- (id)instantiationKeyPathForMarshalledRelatedObject:(id)arg1;
- (id)marshalSingleAttribute:(id)arg1 withContext:(id)arg2;
- (id)userDefinedRuntimeAttributesToMarshallWithContext:(id)arg1;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)localExtraMarshalledToManyRelationshipKeyPaths;
- (id)localExtraMarshalledToOneRelationshipKeyPaths;
- (id)localExtraMarshalledAttributesKeyPaths;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)ibSwizzledCocoaTouchNSObjectLocalLocalizableStringsAttributeKeyPaths;
- (id)ibSwizzledCocoaTouchNSObjectLocalAttributeKeyPaths;
- (void)setIbInspectedIsAccessibilityElement:(BOOL)arg1;
- (BOOL)ibInspectedIsAccessibilityElement;
- (BOOL)ibIsAccessibilityElementByDefault;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (id)ibInspectedAccessibilityTraits;
- (void)setIbInspectedAccessibilityTraits:(id)arg1;
- (id)ibCocoaTouchDefaultAccessibilityConfiguration;
- (id)ibCocoaTouchAccessibilityConfiguration;
- (BOOL)ibSupportsCocoaTouchAccessibility;
- (BOOL)ibShouldPropagateDesignFramesToCopiedViewForChild:(id)arg1;
- (void)ibCocoaTouchToolFontsDidChange;
- (void)ibPopulateAdditionalKeyValuePairs:(id)arg1 forCompilationWithMarshallingContext:(id)arg2;
- (BOOL)ibIsUIObjectUsingDarkAppearance;
- (id)ibPreviewingRegistrantSourceViewInDocument:(id)arg1;
- (BOOL)ibIsUISegmentedControlSelectedSegmentTintColorAvailable;
- (BOOL)ibIsUISpringLoadedInteractionSupportingAvailable;
- (void)ibInheritedTintColorDidChange;
- (void)ibInheritedTintColorWillChange;
- (void)ibVerifySimulatedMetricsWithDocument:(id)arg1;
- (id)ibMetricRepresentation;
- (id)effectiveSimulatedMetrics;
- (BOOL)ibPresentsSimulatedMetricsInDocument:(id)arg1;
- (BOOL)ibCanBeSourceOfForceTouchSegue;
- (BOOL)ibBackwardsDeployConstraintsFromSafeAreaOnChild:(id)arg1 osVersion:(id)arg2 forDocument:(id)arg3;
- (BOOL)ibInspectedSupportsPresentationSizeMetrics;
- (BOOL)ibInspectedSupportsBottomBarMetrics;
- (BOOL)ibInspectedSupportsTopBarMetrics;
- (BOOL)ibInspectedSupportsStatusBarMetrics;
- (BOOL)ibSupportsSimulatedMetrics;
- (BOOL)ibCanBePushedOnNavigationController;
- (void)ibSwizzledConfigureDiagnosticsHandler:(id)arg1 afterFailedMarshallingOperationNamed:(id)arg2;
- (void)ibConfigureDiagnosticsHandler:(id)arg1 afterFailedMarshallingOperationNamed:(id)arg2;
- (id)ibSwizzledSearchableStringValueForPrimitiveValue:(id)arg1 atLocation:(id)arg2 inDocument:(id)arg3;
- (long long)ibCompareConnectionSourcePriorityForCompilation:(id)arg1;
- (BOOL)ibWantsAddContentToExistCollectionForOriginatedOutletCollection:(id)arg1;
- (void)ibSwizzledCocoaTouchNSObject_ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibFlattenConnection:(id)arg1;
- (BOOL)ibRequiresConnectionFlattening;
- (BOOL)ibIsValidConnectionSourceForDestination:(id)arg1;
- (BOOL)ibRequiresLayoutInfoInCocoaTouchToolDuringCompilationOfDocument:(id)arg1;
- (void)ibPopulateCompilationMarshallingContext:(id)arg1 forDocument:(id)arg2;
- (BOOL)ibUserCanConfigureActionArgumentType;
- (id)ibActionArgumentClassName;
- (long long)ibPreferredActionArgumentType;
- (unsigned long long)ibPreferredActionEventType;
- (BOOL)ibTabBarShouldArchiveItems:(id)arg1;
- (BOOL)ibToolbarShouldArchiveItems:(id)arg1;
- (id)valueByTransitioningFromTargetRuntime:(id)arg1 toTargetRuntime:(id)arg2;
- (void)didChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (void)willChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (void)ibSwizzledCocoaTouchDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
@property(retain) IBCocoaTouchTargetRuntime *cocoaTouchTargetRuntime;
- (void)changeTargetRuntimeTo:(id)arg1 inDocument:(id)arg2 withContext:(id)arg3;
- (void)changeTargetRuntimeTo:(id)arg1 inDocument:(id)arg2;
@end

