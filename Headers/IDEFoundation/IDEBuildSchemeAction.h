//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDESchemeAction.h>

#import <IDEFoundation/IDECodeCoverageBuildableResolving-Protocol.h>

@class DVTObservingToken, IDEBuildActionEntry, NSArray, NSMapTable, NSMutableArray, NSString;

@interface IDEBuildSchemeAction : IDESchemeAction <IDECodeCoverageBuildableResolving>
{
    NSMutableArray *_legacyBuildableReferences;
    BOOL _parallelizeBuildables;
    BOOL _buildImplicitDependencies;
    BOOL _enableAddressSanitizer;
    NSString *_legacyBuildConfiguration;
    NSMutableArray *_buildActionEntries;
    IDEBuildActionEntry *_launchRunnableEntry;
    IDEBuildActionEntry *_profileRunnableEntry;
    BOOL _buildablesDidChangeNotificationEnabled;
    BOOL _isBuildablesDidChangeNotificationPending;
    DVTObservingToken *_launchActionRunnableObservingToken;
    DVTObservingToken *_profileActionRunnableObservingToken;
    DVTObservingToken *_testPlanReferencesObservingToken;
    DVTObservingToken *_testBuildableReferencesObservingToken;
    DVTObservingToken *_testHostBuildableReferencesObservingToken;
    BOOL _collectBuildTimelineMetrics;
    BOOL _runPostActionsOnFailure;
    NSMapTable *_overridingBuildPropertiesForBuildable;
}

+ (id)resolveDependenciesForBuildables:(id)arg1 buildParameters:(id)arg2 executionEnvironment:(id)arg3 includeImplicitDependencies:(BOOL)arg4;
+ (id)_uniquedBuildablesForBuildables:(id)arg1 includingDependencies:(BOOL)arg2 includingPackages:(BOOL)arg3;
+ (id)buildablesForTestingSpecifiers:(id)arg1 includingDependencies:(BOOL)arg2;
+ (id)keyPathsForValuesAffectingAvailableBuildConfigurations;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) NSMapTable *overridingBuildPropertiesForBuildable; // @synthesize overridingBuildPropertiesForBuildable=_overridingBuildPropertiesForBuildable;
@property BOOL runPostActionsOnFailure; // @synthesize runPostActionsOnFailure=_runPostActionsOnFailure;
@property BOOL collectBuildTimelineMetrics; // @synthesize collectBuildTimelineMetrics=_collectBuildTimelineMetrics;
@property(nonatomic, getter=isBuildablesDidChangeNotificationEnabled) BOOL buildablesDidChangeNotificationEnabled; // @synthesize buildablesDidChangeNotificationEnabled=_buildablesDidChangeNotificationEnabled;
@property BOOL buildImplicitDependencies; // @synthesize buildImplicitDependencies=_buildImplicitDependencies;
@property BOOL parallelizeBuildables; // @synthesize parallelizeBuildables=_parallelizeBuildables;
- (void)setBuildConfigurationFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addBuildRoles:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addBuildActionEntries:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addBuildableProductReferences:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildImplicitDependenciesFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setCollectBuildTimelineMetricsFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setRunPostActionsOnFailureFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setParallelizeBuildablesFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
@property(readonly) BOOL needsNewSchemeVersionForExplicitTestPlanEntries;
- (void)setOverridingBuildProperties:(id)arg1 forBuildable:(id)arg2;
- (void)postBuildablesDidChangeNotification;
- (CDUnknownBlockType)_matcherBlockForCommand:(id)arg1 operationParameters:(id)arg2;
- (id)buildablesByConfiguration;
- (id)buildableReferencesForSchemeCommand:(id)arg1;
- (id)buildableReferences;
- (id)extensionTypesOfBuildablesForSchemeCommand:(id)arg1 includingDependencies:(BOOL)arg2;
- (id)buildablesForSchemeCommand:(id)arg1 operationParameters:(id)arg2 includingDependencies:(BOOL)arg3;
- (id)buildablesForSchemeCommand:(id)arg1 operationParameters:(id)arg2 includingDependencies:(BOOL)arg3 includingPackages:(BOOL)arg4;
- (id)buildablesForSchemeCommand:(id)arg1 includingDependencies:(BOOL)arg2;
- (id)buildablesForSchemeCommand:(id)arg1 includingDependencies:(BOOL)arg2 includingPackages:(BOOL)arg3;
- (id)buildablesForAllSchemeCommandsIncludingDependencies:(BOOL)arg1;
- (id)buildablesForAllSchemeCommandsIncludingDependencies:(BOOL)arg1 includingPackages:(BOOL)arg2;
- (id)buildablesForShowingIssues;
- (id)resolveImplicitDependenciesIfEnabledForBuildables:(id)arg1;
- (id)_buildablesIncludingDependencies:(BOOL)arg1 includingPackages:(BOOL)arg2 restrictToSchemeCommand:(id)arg3 operationParameters:(id)arg4;
- (id)buildableReferenceForBuildable:(id)arg1;
@property(readonly) NSArray *availableBuildConfigurations;
- (id)buildDirectoryPathsForBuildParameters:(id)arg1 schemeCommand:(id)arg2;
- (id)buildDirectoryPathsForBuildParameters:(id)arg1 schemeCommand:(id)arg2 buildableProductFilter:(CDUnknownBlockType)arg3;
- (void)moveBuildActionEntriesAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)addBuildActionEntryForBuildableReference:(id)arg1;
- (void)removeBuildActionEntries:(id)arg1;
- (void)removeBuildActionEntryAtIndex:(unsigned long long)arg1;
- (void)forceOffBuildForPreviewingForBuildActionEntry:(id)arg1;
- (void)forceOffBuildForProfilingForBuildActionEntry:(id)arg1;
- (void)forceOffBuildForTestingForBuildActionEntry:(id)arg1;
- (void)forceOffBuildForRunningForBuildActionEntry:(id)arg1;
- (void)_setupImplicitBuildActionEntries;
- (BOOL)doesNonActionWork;
- (id)subtitle;
- (id)name;
- (id)buildFolderPathForCodeCoverage;
- (id)buildFolderPathForPGO;
- (void)setRunContext:(id)arg1;
- (void)primitiveInvalidate;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)init;
- (void)_commonInit;

// Remaining properties
@property(readonly) NSArray *buildActionEntries; // @dynamic buildActionEntries;
@property(readonly) NSMutableArray *mutableBuildActionEntries; // @dynamic mutableBuildActionEntries;

@end

