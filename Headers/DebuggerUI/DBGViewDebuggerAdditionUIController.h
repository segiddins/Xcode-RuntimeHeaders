//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerUI/DVTStatefulObject-Protocol.h>
#import <DebuggerUI/IDEDebuggingAdditionUIController-Protocol.h>

@class DBGHierarchyNavigationCoordinator, DBGViewDebuggerAddition, DBGViewObject, DVTExtension, DVTObservingToken, DVTStackBacktrace, DVTStateToken, IDEWorkspaceTabController, NSLock, NSString;
@protocol DBGFocusableViewObject;

@interface DBGViewDebuggerAdditionUIController : NSObject <DVTStatefulObject, IDEDebuggingAdditionUIController>
{
    NSLock *_nodesRenderingLock;
    long long _nodesRendering;
    BOOL _userHasRequestedViewDebugging;
    BOOL _shouldAutoSwitchDebugNavigatorContentMode;
    BOOL _showsOnlyVisibleViewObjects;
    BOOL _showsLayers;
    IDEWorkspaceTabController *_workspaceTabController;
    DBGViewDebuggerAddition *_debuggingAddition;
    long long _userInterfaceState;
    DBGHierarchyNavigationCoordinator *_hierarchyNavigationCoordinator;
    DBGViewObject<DBGFocusableViewObject> *_focusedHierarchyRootObject;
    DVTExtension *_extension;
    DVTStateToken *_stateToken;
    DVTObservingToken *_viewDebuggerApplicationObservingToken;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) DVTObservingToken *viewDebuggerApplicationObservingToken; // @synthesize viewDebuggerApplicationObservingToken=_viewDebuggerApplicationObservingToken;
@property(retain) DVTStateToken *stateToken; // @synthesize stateToken=_stateToken;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) DBGViewObject<DBGFocusableViewObject> *focusedHierarchyRootObject; // @synthesize focusedHierarchyRootObject=_focusedHierarchyRootObject;
@property(retain) DBGHierarchyNavigationCoordinator *hierarchyNavigationCoordinator; // @synthesize hierarchyNavigationCoordinator=_hierarchyNavigationCoordinator;
@property(nonatomic) BOOL showsLayers; // @synthesize showsLayers=_showsLayers;
@property(nonatomic) BOOL showsOnlyVisibleViewObjects; // @synthesize showsOnlyVisibleViewObjects=_showsOnlyVisibleViewObjects;
@property(nonatomic) BOOL shouldAutoSwitchDebugNavigatorContentMode; // @synthesize shouldAutoSwitchDebugNavigatorContentMode=_shouldAutoSwitchDebugNavigatorContentMode;
@property(nonatomic) long long userInterfaceState; // @synthesize userInterfaceState=_userInterfaceState;
@property(nonatomic) BOOL userHasRequestedViewDebugging; // @synthesize userHasRequestedViewDebugging=_userHasRequestedViewDebugging;
@property(readonly) DBGViewDebuggerAddition *debuggingAddition; // @synthesize debuggingAddition=_debuggingAddition;
@property(readonly) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
- (void)primitiveInvalidate;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)focusOnNode:(id)arg1;
- (void)revealInDebugNavigator:(id)arg1;
- (void)printDescription:(id)arg1;
- (void)updateMenu:(id)arg1 forViewObject:(id)arg2;
- (void)proceedToReady:(id)arg1;
- (void)delayReady:(id)arg1;
- (void)resetToLoading:(id)arg1;
- (id)initWithWorkspaceTabController:(id)arg1 withDebuggingAddition:(id)arg2 forExtension:(id)arg3;

// Remaining properties
@property(readonly) BOOL canRevertWithEmptyStateDictionary;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

