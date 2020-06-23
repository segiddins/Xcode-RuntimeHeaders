//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBStoryboardAbstractTriggeredSegue.h>

@class NSString;

@interface IBUIStoryboardAbstractTriggeredSegue : IBStoryboardAbstractTriggeredSegue
{
    BOOL _animates;
    unsigned long long _triggerMode;
    IBUIStoryboardAbstractTriggeredSegue *_preview;
    IBUIStoryboardAbstractTriggeredSegue *_commit;
    IBUIStoryboardAbstractTriggeredSegue *_parent;
    IBUIStoryboardAbstractTriggeredSegue *_inheritsFrom;
    unsigned long long _phase;
    NSString *_customSegueClassName;
    NSString *_customSegueClassModuleProvider;
}

+ (id)modalPresentationOverStyleValuesForPlatform:(id)arg1;
+ (id)modalPresentationOverStyleTitlesForPlatform:(id)arg1;
+ (id)keyPathsForValuesAffectingIbInspectedTriggerMode;
+ (id)keyPathsForValuesAffectingIbInspectedDoesNotInherit;
+ (id)keyPathsForValuesAffectingIbInspectedPreviewInheritanceMode;
+ (id)keyPathsForValuesAffectingIbInspectedPreview;
+ (id)keyPathsForValuesAffectingIbInspectetCommitInheritanceModeTitles;
+ (id)keyPathsForValuesAffectingIbInspectedCommitInheritanceModeValues;
+ (id)keyPathsForValuesAffectingIbInspectedPreviewInheritanceModeTitles;
+ (id)keyPathsForValuesAffectingIbInspectedPreviewInheritanceModeValues;
+ (id)keyPathsForValuesAffectingIbInspectedCommitInheritanceMode;
+ (id)keyPathsForValuesAffectingIbInspectedCommit;
+ (id)keyPathsForValuesAffectingIbInspectedAction;
+ (id)keyPathsForValuesAffectingIdentifier;
+ (id)keyPathsForValuesAffectingIbInspectedDestination;
+ (id)ibKeyPathsAcceptingModuleNameBackfill;
+ (BOOL)isAdaptiveSegue;
+ (BOOL)isDeprecatedInDocument:(id)arg1;
+ (BOOL)shouldBeUserVisibleInDocument:(id)arg1;
+ (BOOL)isLegacySegue;
+ (id)keyPathsForValuesAffectingCustomSegueClassModule;
+ (id)keyPathsForValuesAffectingCustomSegueFormattedClassSymbol;
+ (BOOL)wantsDefaultAnimatesCompatibilityWarning;
+ (BOOL)wantsDefaultCustomClassCompatibilityWarning;
+ (BOOL)isAbstractType;
@property(copy) NSString *customSegueClassModuleProvider; // @synthesize customSegueClassModuleProvider=_customSegueClassModuleProvider;
@property(copy) NSString *customSegueClassName; // @synthesize customSegueClassName=_customSegueClassName;
@property(nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(retain, nonatomic) IBUIStoryboardAbstractTriggeredSegue *inheritsFrom; // @synthesize inheritsFrom=_inheritsFrom;
@property(nonatomic) __weak IBUIStoryboardAbstractTriggeredSegue *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) IBUIStoryboardAbstractTriggeredSegue *commit; // @synthesize commit=_commit;
@property(retain, nonatomic) IBUIStoryboardAbstractTriggeredSegue *preview; // @synthesize preview=_preview;
@property(nonatomic) unsigned long long triggerMode; // @synthesize triggerMode=_triggerMode;
@property(nonatomic) BOOL animates; // @synthesize animates=_animates;
- (void).cxx_destruct;
- (id)ibInspectedModalPresentationOverStyleValues;
- (id)ibInspectedModalPresentationOverStyleTitles;
@property unsigned long long ibInspectedTriggerMode;
- (void)setIbInspectedSegueClassName:(id)arg1;
- (void)_updateDocument:(id)arg1 forOldSegue:(id)arg2 toNewSegue:(id)arg3;
- (id)_createChildSegueWithClass:(Class)arg1 forParent:(id)arg2 propertiesFromSegue:(id)arg3 destinationOverride:(id)arg4;
- (void)_replaceWithAction:(id)arg1 preview:(id)arg2 previewInheritance:(id)arg3 commit:(id)arg4 commitInheritance:(id)arg5;
- (void)_replacementActionSegueWithClass:(Class)arg1 previewInheritance:(id)arg2 commitInheritance:(id)arg3 commitClass:(Class)arg4 commitPropertiesFromSegue:(id)arg5 destinationOverride:(id)arg6;
- (void)replaceIfNecessaryAfterEnablingOrDisablingConfigurationsInDocument:(id)arg1 segueReachabilityContext:(id)arg2;
- (id)_copyWithCommonInstanceState;
- (BOOL)ibInspectedDoesNotInherit;
@property(nonatomic) unsigned long long ibInspectedPreviewInheritanceMode;
- (id)ibInspectedPreview;
- (id)ibInspectedCommitInheritanceModeTitles;
- (id)ibInspectedCommitInheritanceModeValues;
- (id)ibInspectedPreviewInheritanceModeTitles;
- (id)ibInspectedPreviewInheritanceModeValues;
- (id)_displayIdentifierForSegue:(id)arg1;
@property(nonatomic) unsigned long long ibInspectedCommitInheritanceMode;
- (id)ibInspectedCommit;
- (id)ibInspectedAction;
- (void)populateSegueTemplates:(id)arg1 andOutletsForCompiledDocument:(id)arg2;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (id)identifier;
- (id)destination;
- (id)source;
- (BOOL)shouldBeArchivedByEndPoint;
- (BOOL)shouldArchiveKind;
- (void)objectContainer:(id)arg1 didRemoveConnectionWithContext:(id)arg2;
- (void)objectContainer:(id)arg1 willRemoveObject:(id)arg2 context:(id)arg3;
- (void)_disable3DTouchAndReplaceSelf:(BOOL)arg1;
- (id)instantiateSegueTemplate;
- (BOOL)ibInspectedInheritsPropertyValues;
- (BOOL)ibInspectedCanChangeTriggerMode;
- (BOOL)ibInspectedCanChangePropertyValues;
- (BOOL)ibInspectedCanChangeKind;
- (BOOL)ibInspectedCanChangeDestination;
- (BOOL)ibInspectedCanChangeCustomSegueClassName;
- (BOOL)ibInspectedCanChangeAnimates;
- (id)metricChainSucceedingMetric:(id)arg1;
- (id)segueForInheritableMetrics;
- (BOOL)canvasLinkShouldDrawPath;
- (BOOL)representsMultipleSegues;
- (BOOL)pathShouldBeDashed;
- (BOOL)_isPreviewPhase;
- (BOOL)_isCommitPhase;
- (BOOL)_isActionPhase;
- (BOOL)_documentSupportsForceTouchSegues;
- (id)_descriptionSubstringForDestination;
- (id)effectiveSegueForSelection;
- (BOOL)shouldShowInDocumentStructure;
- (void)setIbInspectedDestination:(id)arg1;
- (id)ibInspectedDestination;
- (id)destinationCandidateObjectFilterPredicate;
- (BOOL)isExclusiveTo:(id)arg1 inObjectContainer:(id)arg2;
@property(copy) NSString *customSegueClassModule;
- (void)setCustomSegueFormattedClassSymbol:(id)arg1;
- (id)customSegueFormattedClassSymbol;
- (void)copyCommonInstanceStateToTriggeredSegue:(id)arg1;
- (void)decodeInheritsFrom:(id)arg1;
- (void)_initializeInheritsFromAfterDecoding;
- (void)encodeInheritsFrom:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)_setInheritsFromSourceString:(id)arg1;
- (id)_inheritsFromSourceString;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)attributesInspectorSliceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 label:(id)arg2 destination:(id)arg3;

@end

