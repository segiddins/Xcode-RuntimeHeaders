//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerFoundation/DVTInvalidation-Protocol.h>

@class DBGApplicationObject, DBGDataCoordinator, DBGSnapshotManagerXcode, DBGViewDebuggerAssetManager, DBGViewObject, DVTStackBacktrace, DVTTimeSlicedMainThreadWorkQueue, IDEDebugSession, NSArray, NSMapTable, NSString;
@protocol DBGViewDescriber;

@interface DBGViewDebugger : NSObject <DVTInvalidation>
{
    DBGApplicationObject *_application;
    NSMapTable *_dataSourcesForViewObjectsMap;
    BOOL _usesDebugHierarchyInfrastructure;
    int _loadedState;
    IDEDebugSession *_debugSession;
    id <DBGViewDescriber> _viewDescriber;
    DBGSnapshotManagerXcode *_snapshotManager;
    DBGDataCoordinator *_dataCoordinator;
    DBGViewDebuggerAssetManager *_assetManager;
    double _percentLoaded;
    DVTTimeSlicedMainThreadWorkQueue *_snapshotRenderingWorkQueue;
}

+ (Class)dataSourceConnectionClassForPlatform:(id)arg1;
+ (id)fetchedDocumentForViewDebuggerObjectWithID:(id)arg1 inLaunchSessionWithReference:(id)arg2;
+ (Class)viewDescriberClassForLaunchSession:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) DVTTimeSlicedMainThreadWorkQueue *snapshotRenderingWorkQueue; // @synthesize snapshotRenderingWorkQueue=_snapshotRenderingWorkQueue;
@property int loadedState; // @synthesize loadedState=_loadedState;
@property double percentLoaded; // @synthesize percentLoaded=_percentLoaded;
@property(readonly) DBGViewDebuggerAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(readonly) __weak DBGDataCoordinator *dataCoordinator; // @synthesize dataCoordinator=_dataCoordinator;
@property(readonly) DBGSnapshotManagerXcode *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property(readonly) id <DBGViewDescriber> viewDescriber; // @synthesize viewDescriber=_viewDescriber;
@property(readonly, nonatomic) DBGApplicationObject *application; // @synthesize application=_application;
@property(readonly) BOOL usesDebugHierarchyInfrastructure; // @synthesize usesDebugHierarchyInfrastructure=_usesDebugHierarchyInfrastructure;
@property(retain) IDEDebugSession *debugSession; // @synthesize debugSession=_debugSession;
- (void)primitiveInvalidate;
- (BOOL)_shouldLogCaptureFailureDetails;
- (id)_environmentInfoToReportCaptureFailure;
- (id)_dataSourceConnectionForPlatform:(id)arg1 debugSession:(id)arg2;
@property(readonly, nonatomic) NSArray *rootObjects;
@property(readonly, nonatomic) NSArray *windows;
@property(readonly) DBGViewObject *primaryRootObject;
- (void)_updateViewObjectModelAfterRequest:(id)arg1 withLoadedState:(int)arg2;
- (void)_fetchRemainingUnfetchedPropertyValuesWithDataSourceVersion:(double)arg1;
- (void)_enqueueAdditionalRequest:(id)arg1 withDataSourceVersion:(double)arg2 lastIncrementalRequest:(BOOL)arg3;
- (void)_initiateTargetHubResetRequestWithDataSourceVersion:(double)arg1;
- (void)_initiateAdditionalRequestsWithDataSourceVersion:(double)arg1;
- (void)_initiateInitialRequestWithDataSourceVersion:(float)arg1;
- (void)updateDebugHierarchy;
- (id)_viewDescriberForPlatform:(id)arg1 debugSession:(id)arg2;
- (id)_allfetchedDocuments;
- (void)closeAllFetchedDocuments;
- (void)_initializeStructuresIfNecessary;
- (void)willFetchViewInfo;
- (void)fetchWindowsIfNecessary;
- (void)_updateViewDebuggingHierarchyWithApplication:(id)arg1 andLoadedState:(int)arg2;
- (id)_loadSnapshotDataTransformersFromExtensionPoints;
- (void)_loadSnapshotDataTransformersForCoordinator:(id)arg1;
- (void)_cleanUpOnViewDebuggingSessionEnd;
- (void)_commonInit;
- (id)initWithPlatform:(id)arg1 debugSession:(id)arg2 snapshot:(id)arg3;
- (id)initWithPlatform:(id)arg1 debugSession:(id)arg2 viewDescriber:(id)arg3;
- (id)initWithPlatform:(id)arg1 debugSession:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

