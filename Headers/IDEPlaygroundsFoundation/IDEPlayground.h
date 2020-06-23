//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEPlaygroundsFoundation/IDEPlaygroundCommon.h>

#import <IDEPlaygroundsFoundation/IDEBlueprintProvider-Protocol.h>
#import <IDEPlaygroundsFoundation/IDECustomDataStoring-Protocol.h>
#import <IDEPlaygroundsFoundation/IDEIndexableProvider-Protocol.h>
#import <IDEPlaygroundsFoundation/IDEPlaygroundAnyContextDelegate-Protocol.h>
#import <IDEPlaygroundsFoundation/_TtP24IDEPlaygroundsFoundation29PlaygroundBuildStatusObserver_-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, IDEDirectoryBasedCustomDataStore, IDEPIFGUID, IDEPlaygroundSharedContext, NSArray, NSString, _TtC24IDEPlaygroundsFoundation17PlaygroundBuilder;
@protocol IDETestableProvider;

@interface IDEPlayground : IDEPlaygroundCommon <IDEBlueprintProvider, IDEIndexableProvider, IDEPlaygroundAnyContextDelegate, _TtP24IDEPlaygroundsFoundation29PlaygroundBuildStatusObserver_, IDECustomDataStoring>
{
    DVTNotificationToken *_customDataStoreWillCloseNotificationToken;
    DVTObservingToken *_workspaceFinishedLoadingObserverToken;
    DVTObservingToken *_workspaceArenaFinishedLoadingObserverToken;
    DVTObservingToken *_runContextManagerFinishedLoadingObserverToken;
    DVTObservingToken *_activeSchemeObserverToken;
    DVTNotificationToken *_buildablesToken;
    BOOL _workspaceDidFinishLoading;
    BOOL _hasPerformedInitialBuild;
    BOOL _attemptedBuildDuringBlockedBuildOperations;
    IDEPlaygroundSharedContext *_playgroundContext;
    _TtC24IDEPlaygroundsFoundation17PlaygroundBuilder *_builder;
    IDEDirectoryBasedCustomDataStore *_customDataStore;
}

+ (BOOL)isSourcesDirectorySubPath:(id)arg1;
+ (id)containerTypeDisplayName;
+ (id)containerFileDataType;
+ (id)availableSwiftVersions;
+ (id)keyPathsForValuesAffectingIndexables;
+ (id)pifObjectTypeName;
- (void).cxx_destruct;
@property BOOL attemptedBuildDuringBlockedBuildOperations; // @synthesize attemptedBuildDuringBlockedBuildOperations=_attemptedBuildDuringBlockedBuildOperations;
@property BOOL hasPerformedInitialBuild; // @synthesize hasPerformedInitialBuild=_hasPerformedInitialBuild;
@property(retain, nonatomic) IDEDirectoryBasedCustomDataStore *customDataStore; // @synthesize customDataStore=_customDataStore;
@property BOOL workspaceDidFinishLoading; // @synthesize workspaceDidFinishLoading=_workspaceDidFinishLoading;
@property(readonly) _TtC24IDEPlaygroundsFoundation17PlaygroundBuilder *builder; // @synthesize builder=_builder;
@property(retain, nonatomic) IDEPlaygroundSharedContext *playgroundContext; // @synthesize playgroundContext=_playgroundContext;
- (void)contextDidUpdateSourceDirectorySwiftFiles:(id)arg1;
- (void)contextDidUpdateResourceDirectoryFiles:(id)arg1;
- (void)notifyOpenDocumentsOfContentChange;
- (void)builderSettingsWillChange:(id)arg1;
- (void)builderSettingsDidChange:(id)arg1;
- (void)builderDidBuild:(id)arg1 error:(id)arg2;
- (void)builderWillBuild:(id)arg1;
- (BOOL)_hasPlaygroundDocumentCurrentlyExecutingInController:(id)arg1;
- (id)currentlyOpenEditorDocumentsInController:(id)arg1;
- (BOOL)_hasOpenEditorDocumentInController:(id)arg1;
- (BOOL)shouldBuild;
- (BOOL)buildIfAllowed;
- (void)performInitialBuildIfNecessary;
- (void)_removePlaygroundDirectoriesObservation;
- (void)_addPlaygroundDirectoriesObservation;
- (void)_customDataStoreContainerClosing:(id)arg1;
- (BOOL)supportsCustomDataForOwnership:(id)arg1;
- (void)moveCustomDataWithSpecifier:(id)arg1 toSpecifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeCustomDataWithSpecifier:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)writeCustomData:(id)arg1 withSpecifier:(id)arg2 forceOverwrite:(BOOL)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)readCustomDataWithSpecifier:(id)arg1 error:(id *)arg2;
- (id)customDataOwnershipsForGrouping:(id)arg1;
- (id)customDataSpecifiersForGrouping:(id)arg1 ownership:(id)arg2;
- (void)addSpecifier:(id)arg1 inWorkspace:(id)arg2 toSCMWithCompletionBlock:(CDUnknownBlockType)arg3;
- (void)scmStatusForSpecifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)computedChildItemSubpathsFixed;
- (id)computedChildItemSubpathsEditable;
- (id)context;
- (id)displayImage;
@property(readonly) NSString *displayName;
- (void)_didChangeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (void)_willChangeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (id)createRootGroup;
- (void)_setupActiveSchemeObserver;
- (void)_setupRebuildTriggeringObservers;
- (void)_workspaceLoadingStateDidChange;
- (void)_setupWorkspaceLoadingObservers;
- (void)overrideWorkspaceNameIfNecessary;
- (void)primitiveInvalidate;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 options:(id)arg4 error:(id *)arg5;
@property(nonatomic, readonly) BOOL supportsSourceFolders;
@property(nonatomic, readonly) id <IDETestableProvider> testableProvider;
- (id)blueprintForName:(id)arg1;
- (id)blueprintForIdentifier:(id)arg1;
@property(nonatomic, readonly) NSString *classPrefix;
@property(nonatomic, readonly) NSString *organizationName;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSArray *blueprints;
@property(nonatomic, readonly) NSArray *indexables;
- (id)pifRepresentation:(id)arg1;
@property(nonatomic, readonly) NSArray *pifSubobjects;
- (id)pifInfoForSerializer:(id)arg1;
@property(nonatomic, readonly) IDEPIFGUID *PIFGUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

