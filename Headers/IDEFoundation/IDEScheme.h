//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDERunDestinationScheme-Protocol.h>

@class DVTCustomDataSpecifier, DVTDelayedInvocation, DVTObservingToken, DVTStackBacktrace, IDEAnalyzeSchemeAction, IDEArchiveSchemeAction, IDEBuildSchemeAction, IDEContainer, IDEEntityIdentifier, IDEInstallSchemeAction, IDEIntegrateSchemeAction, IDELaunchSchemeAction, IDEPreviewSchemeAction, IDEProfileSchemeAction, IDERunContextManager, IDERunDestination, IDERunnable, IDESchemeOrderedWorkspaceNotificationManager, IDETestSchemeAction, NSArray, NSData, NSError, NSNumber, NSString;
@protocol IDECustomDataStoring;

@interface IDEScheme : NSObject <IDERunDestinationScheme, DVTInvalidation>
{
    NSString *_lastUpgradeVersion;
    NSString *_cachedLastUpgradeVersion;
    BOOL _hasRunUpgradeCheck;
    BOOL _wasUpgraded;
    IDERunnable *_oldFormatArchivedRunnable;
    IDERunContextManager *_runContextManager;
    IDEContainer<IDECustomDataStoring> *_customDataStoreContainer;
    DVTCustomDataSpecifier *_customDataSpecifier;
    IDERunDestination *_lastChosenRunDestination;
    NSArray *_availableRunDestinations;
    BOOL _didResortToFallbackRunDestination;
    BOOL _isShown;
    unsigned long long _orderHint;
    BOOL _dataStoreClosed;
    BOOL _deferredSaveScheduled;
    BOOL _registeredForIsBuildableNotifications;
    NSNumber *_isArchivable;
    id _isArchivableNotificationToken;
    NSNumber *_isInstallable;
    id _isInstallableNotificationToken;
    id _buildablesToken;
    BOOL _hasUnsupportedArchiveData;
    DVTDelayedInvocation *_runDestinationInvalidationScheduler;
    BOOL _transient;
    BOOL _persisted;
    BOOL _wasCreatedForAppExtension;
    BOOL _schemeRunnableRunsDirectlyOnPairedProxyDevice;
    BOOL _runDestinationInvalidationSuspended;
    BOOL _runDestinationInvalidationPending;
    IDEBuildSchemeAction *_buildSchemeAction;
    IDELaunchSchemeAction *_launchSchemeAction;
    IDETestSchemeAction *_testSchemeAction;
    IDEProfileSchemeAction *_profileSchemeAction;
    IDEPreviewSchemeAction *_previewSchemeAction;
    IDEAnalyzeSchemeAction *_analyzeSchemeAction;
    IDEArchiveSchemeAction *_archiveSchemeAction;
    IDEIntegrateSchemeAction *_integrateSchemeAction;
    IDEInstallSchemeAction *_installSchemeAction;
    IDEEntityIdentifier *_schemeIdentifier;
    NSError *_loadError;
    DVTObservingToken *_workspaceReferenceContainersObservingToken;
    IDESchemeOrderedWorkspaceNotificationManager *_orderedWorkspaceNotificationManager;
}

+ (id)_buildParametersForPurpose:(long long)arg1 schemeCommand:(id)arg2 configurationName:(id)arg3 workspaceArena:(id)arg4 overridingProperties:(id)arg5 activeRunDestination:(id)arg6 activeArchitecture:(id)arg7 collectBuildTimeStatistics:(BOOL)arg8 collectTimelineMetrics:(BOOL)arg9;
+ (BOOL)automaticallyNotifiesObserversOfOrderHint;
+ (BOOL)automaticallyNotifiesObserversOfIsShown;
+ (id)keyPathsForValuesAffectingDisambiguatedName;
+ (BOOL)automaticallyNotifiesObserversOfCustomDataStoreContainer;
+ (id)mainThreadCheckerPathForRunDestination:(id)arg1;
+ (id)keyPathsForValuesAffectingIntegratable;
+ (id)keyPathsForValuesAffectingAnalyzable;
+ (id)keyPathsForValuesAffectingPreviewable;
+ (id)keyPathsForValuesAffectingProfilable;
+ (id)keyPathsForValuesAffectingTestable;
+ (id)keyPathsForValuesAffectingRunnable;
+ (id)schemeFromXMLData:(id)arg1 withRunContextManager:(id)arg2 customDataStoreContainer:(id)arg3 customDataSpecifier:(id)arg4 isShown:(BOOL)arg5 orderHint:(unsigned long long)arg6 error:(id *)arg7;
+ (id)schemeWithRunContextManager:(id)arg1 customDataStoreContainer:(id)arg2 customDataSpecifier:(id)arg3;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) IDESchemeOrderedWorkspaceNotificationManager *orderedWorkspaceNotificationManager; // @synthesize orderedWorkspaceNotificationManager=_orderedWorkspaceNotificationManager;
@property(getter=isRunDestinationInvalidationPending) BOOL runDestinationInvalidationPending; // @synthesize runDestinationInvalidationPending=_runDestinationInvalidationPending;
@property(nonatomic, getter=isRunDestinationInvalidationSuspended) BOOL runDestinationInvalidationSuspended; // @synthesize runDestinationInvalidationSuspended=_runDestinationInvalidationSuspended;
@property(retain) DVTObservingToken *workspaceReferenceContainersObservingToken; // @synthesize workspaceReferenceContainersObservingToken=_workspaceReferenceContainersObservingToken;
@property(readonly) BOOL didResortToFallbackRunDestination; // @synthesize didResortToFallbackRunDestination=_didResortToFallbackRunDestination;
@property(readonly) BOOL schemeRunnableRunsDirectlyOnPairedProxyDevice; // @synthesize schemeRunnableRunsDirectlyOnPairedProxyDevice=_schemeRunnableRunsDirectlyOnPairedProxyDevice;
@property BOOL wasCreatedForAppExtension; // @synthesize wasCreatedForAppExtension=_wasCreatedForAppExtension;
@property(retain) NSError *loadError; // @synthesize loadError=_loadError;
@property(copy, nonatomic) IDEEntityIdentifier *schemeIdentifier; // @synthesize schemeIdentifier=_schemeIdentifier;
@property(readonly) DVTCustomDataSpecifier *customDataSpecifier; // @synthesize customDataSpecifier=_customDataSpecifier;
@property(retain, nonatomic) IDEContainer<IDECustomDataStoring> *customDataStoreContainer; // @synthesize customDataStoreContainer=_customDataStoreContainer;
@property(retain) IDERunContextManager *runContextManager; // @synthesize runContextManager=_runContextManager;
@property(retain) IDERunDestination *lastChosenRunDestination; // @synthesize lastChosenRunDestination=_lastChosenRunDestination;
@property(nonatomic, getter=isPersisted) BOOL persisted; // @synthesize persisted=_persisted;
@property(getter=isTransient) BOOL transient; // @synthesize transient=_transient;
@property BOOL wasUpgraded; // @synthesize wasUpgraded=_wasUpgraded;
@property BOOL hasRunUpgradeCheck; // @synthesize hasRunUpgradeCheck=_hasRunUpgradeCheck;
@property(copy) NSString *lastUpgradeVersion; // @synthesize lastUpgradeVersion=_lastUpgradeVersion;
@property(copy) NSString *cachedLastUpgradeVersion; // @synthesize cachedLastUpgradeVersion=_cachedLastUpgradeVersion;
@property(retain) IDEInstallSchemeAction *installSchemeAction; // @synthesize installSchemeAction=_installSchemeAction;
@property(retain) IDEIntegrateSchemeAction *integrateSchemeAction; // @synthesize integrateSchemeAction=_integrateSchemeAction;
@property(retain) IDEArchiveSchemeAction *archiveSchemeAction; // @synthesize archiveSchemeAction=_archiveSchemeAction;
@property(retain) IDEAnalyzeSchemeAction *analyzeSchemeAction; // @synthesize analyzeSchemeAction=_analyzeSchemeAction;
@property(retain) IDEPreviewSchemeAction *previewSchemeAction; // @synthesize previewSchemeAction=_previewSchemeAction;
@property(retain) IDEProfileSchemeAction *profileSchemeAction; // @synthesize profileSchemeAction=_profileSchemeAction;
@property(retain) IDETestSchemeAction *testSchemeAction; // @synthesize testSchemeAction=_testSchemeAction;
@property(retain) IDELaunchSchemeAction *launchSchemeAction; // @synthesize launchSchemeAction=_launchSchemeAction;
@property(retain) IDEBuildSchemeAction *buildSchemeAction; // @synthesize buildSchemeAction=_buildSchemeAction;
- (void)addBuildableProductRunnable:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addPathRunnable:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addLaunchPhase:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addTestPhase:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addBuildPhase:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addInstallAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addIntegrateAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addArchiveAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addAnalyzeAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addPreviewAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addProfileAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addTestAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addLaunchAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addBuildAction:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setWasCreatedForAppExtensionFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setLastUpgradeVersionFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
@property(readonly) NSData *xmlData;
- (BOOL)_executionActionsNeedCurrentArchiveVersion;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)_groupAndImposeDependenciesForOrderedOperations:(id)arg1;
- (id)_buildOperationGroupForSchemeOperationParameters:(id)arg1 primaryBuildParameters:(id)arg2 variantSpecifiers:(id)arg3 buildLog:(id)arg4 dontActuallyRunCommands:(BOOL)arg5 restorePersistedBuildResults:(BOOL)arg6 schemeActionRecord:(id)arg7 error:(id *)arg8;
- (id)_defaultVariantBuildLogForSchemeOperationParameters:(id)arg1 buildParameters:(id)arg2 subtitle:(id)arg3;
- (id)_defaultTopLevelBuildLogForSchemeOperationParameters:(id)arg1 buildParameters:(id)arg2;
- (id)_cleanOperationGroupForExecutionEnvironment:(id)arg1 orderedBuildables:(id)arg2 buildConfiguration:(id)arg3 buildLog:(id)arg4 overridingProperties:(id)arg5 activeRunDestination:(id)arg6 schemeActionRecord:(id)arg7 error:(id *)arg8;
- (CDUnknownBlockType)postActionEnvironmentPopulatorForBuildOperation:(id)arg1;
- (BOOL)_shouldRunPostBuildActionsForBuildResult:(long long)arg1;
- (id)_executionOperationForSchemeOperationParameters:(id)arg1 build:(BOOL)arg2 onlyBuild:(BOOL)arg3 buildParameters:(id)arg4 title:(id)arg5 buildLog:(id)arg6 dontActuallyRunCommands:(BOOL)arg7 restorePersistedBuildResults:(BOOL)arg8 deviceAvailableChecker:(CDUnknownBlockType)arg9 error:(id *)arg10 actionCallbackBlock:(CDUnknownBlockType)arg11;
- (id)_variantSpecifiersForTestingWithSchemeOperationParameters:(id)arg1 schemeCommand:(id)arg2 runDestination:(id)arg3 buildParameters:(id)arg4;
- (id)_variantBuildParametersFromBuildParameters:(id)arg1 directoryName:(id)arg2 overridingBuildSettings:(id)arg3;
- (id)buildParametersForTask:(long long)arg1 executionEnvironment:(id)arg2 buildPurpose:(long long)arg3 schemeCommand:(id)arg4 destination:(id)arg5 overridingProperties:(id)arg6 overridingBuildConfiguration:(id)arg7 overridingTestingSpecifiers:(id)arg8 collectBuildTimeStatistics:(BOOL)arg9 collectTimelineMetrics:(BOOL)arg10;
- (id)overridingBuildSettingsForSchemeCommand:(id)arg1 runDestination:(id)arg2 codeCoverageEnabled:(BOOL)arg3 sanitizerOptions:(unsigned long long)arg4;
- (id)overridingBuildSettingsForSchemeCommand:(id)arg1 runDestination:(id)arg2;
- (id)startedOperationForSchemeOperationParameters:(id)arg1 deviceAvailableChecker:(CDUnknownBlockType)arg2 error:(id *)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)schemeOperationForSchemeOperationParameters:(id)arg1 buildLog:(id)arg2 overridingProperties:(id)arg3 overridingBuildConfiguration:(id)arg4 dontActuallyRunCommands:(BOOL)arg5 restorePersistedBuildResults:(BOOL)arg6 error:(id *)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)schemeOperationForSchemeOperationParameters:(id)arg1 buildLog:(id)arg2 overridingProperties:(id)arg3 overridingBuildConfiguration:(id)arg4 dontActuallyRunCommands:(BOOL)arg5 restorePersistedBuildResults:(BOOL)arg6 deviceAvailableChecker:(CDUnknownBlockType)arg7 error:(id *)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (BOOL)_setOutError:(id *)arg1 schemeOperationParameters:(id)arg2;
- (id)computeNameForCommand:(id)arg1 task:(long long)arg2;
- (id)_cleanOperationWithExecutionContext:(id)arg1 destination:(id)arg2 overridingProperties:(id)arg3 schemeCommand:(id)arg4 invocationRecord:(id)arg5 error:(id *)arg6;
- (void)_reportExecutionOperationForParameters:(id)arg1 shouldBuild:(BOOL)arg2 onlyBuild:(BOOL)arg3;
- (id)_addActionRecordToInvocationRecord:(id)arg1 shouldBuild:(BOOL)arg2 onlyBuild:(BOOL)arg3 schemeCommand:(id)arg4 schemeCommandName:(id)arg5 runDestination:(id)arg6 title:(id)arg7;
- (void)_updateOrderHint:(unsigned long long)arg1;
@property unsigned long long orderHint;
- (void)_updateIsShown:(BOOL)arg1;
@property BOOL isShown;
@property BOOL isShared;
@property(readonly) NSString *disambiguatedName;
@property(copy) NSString *name;
- (void)_primitiveSetCustomDataStoreContainer:(id)arg1;
- (void)_updateCustomDataStoreContainer:(id)arg1 andSpecifier:(id)arg2;
@property(retain) NSArray *availableRunDestinations;
- (void)_actuallyInvalidateAvailableRunDestinations;
- (void)_invalidateAvailableRunDestinations;
- (void)immediatelyInvalidateAvailableRunDestinations;
@property(readonly) NSArray *nonFaultingAvailableRunDestinations;
- (BOOL)schemeRunnableRunsOnPairedProxyDevice;
@property(readonly) BOOL schemeRunnableRequiresPairedProxyDevice;
- (void)buildConfigurationDidChange:(id)arg1;
- (id)buildParametersForSchemeCommand:(id)arg1 destination:(id)arg2;
- (id)buildParametersForSchemeCommand:(id)arg1 buildable:(id)arg2 runDestination:(id)arg3;
- (id)buildParametersForSchemeCommand:(id)arg1 buildable:(id)arg2;
- (id)buildParametersForSchemeCommand:(id)arg1;
- (id)buildParametersForLaunchSchemeCommandAndBuildable:(id)arg1;
- (id)buildConfigurationForSchemeCommand:(id)arg1;
- (id)buildablesForSchemeCommand:(id)arg1 testingSpecifiers:(id)arg2 includingDependencies:(BOOL)arg3;
- (id)buildablesIncludingDependenciesForSchemeCommand:(id)arg1;
- (id)buildablesForSchemeCommand:(id)arg1;
- (id)primaryBuildablesForSchemeCommand:(id)arg1;
- (id)runnablePathForSchemeCommand:(id)arg1 destination:(id)arg2;
- (id)_runnableSchemeActionForSchemeCommand:(id)arg1;
- (id)schemeActionForSchemeCommand:(id)arg1;
- (BOOL)hasRunnableForBuildableProduct:(id)arg1;
@property(readonly, getter=isInstallable) BOOL installable;
@property(readonly, getter=isIntegratable) BOOL integratable;
@property(readonly, getter=isArchivable) BOOL archivable;
@property(readonly, getter=isAnalyzable) BOOL analyzable;
@property(readonly, getter=isPreviewable) BOOL previewable;
@property(readonly, getter=isProfilable) BOOL profilable;
@property(readonly, getter=isTestable) BOOL testable;
@property(readonly, getter=isRunnable) BOOL runnable;
- (BOOL)_isActionableForGoodRunnablePathInSchemeAction:(id)arg1;
@property(readonly, getter=isBuildable) BOOL buildable;
- (void)primitiveInvalidate;
@property(readonly) BOOL isClosed;
- (void)customDataStoreContainerClosing:(id)arg1;
- (void)performDelayedSave:(id)arg1;
- (void)markSchemeDirtyFromAutomaticChange;
- (void)markSchemeDirtyFromUserChange;
- (void)resolveBuildablesFromImport;
@property(readonly, copy) NSString *description;
- (id)initFromUnarchiver:(BOOL)arg1 runContextManager:(id)arg2 customDataStoreContainer:(id)arg3 customDataSpecifier:(id)arg4 isShown:(BOOL)arg5 orderHint:(unsigned long long)arg6;
- (void)_createDefaultSchemeActions;
- (id)buildDirectoriesForBuildParameters:(id)arg1;
- (id)runnableForSchemeCommand:(id)arg1;
- (BOOL)ideIndex_containsBlueprint:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) BOOL isTransient;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

