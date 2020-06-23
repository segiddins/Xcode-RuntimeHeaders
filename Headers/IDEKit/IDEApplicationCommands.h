//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDECommandHandler-Protocol.h>
#import <IDEKit/IDECommandHandlerVendor-Protocol.h>

@class NSString;
@protocol IDESelectionSource;

@interface IDEApplicationCommands : NSObject <IDECommandHandler, IDECommandHandlerVendor>
{
    id <IDESelectionSource> _selectionSource;
}

+ (id)xcodeServerPrefencePaneIdentifier;
+ (id)_frontMostTabbedWindow;
+ (BOOL)workspaceContainsBlueprintProvider:(id)arg1;
+ (void)newWorkspaceDocument:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
+ (BOOL)_validateOrCloseOtherWindows:(BOOL)arg1;
+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (BOOL)_isValidForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (BOOL)_isValidForRevealInDebugNavigator:(id)arg1;
+ (id)_activeWorkspaceTabController:(id)arg1;
+ (id)_applicationURLForDocumentURL:(id)arg1;
+ (id)_fileURLsInSelectionSource:(id)arg1 useContextualMenuSelection:(BOOL)arg2 includeChildrenOfGroups:(BOOL)arg3;
+ (id)_fileURLsInSelectionSource:(id)arg1 useContextualMenuSelection:(BOOL)arg2;
- (void).cxx_destruct;
@property(readonly) id <IDESelectionSource> selectionSource; // @synthesize selectionSource=_selectionSource;
- (void)mirrorDeviceScreen:(id)arg1;
- (void)showTutorialWindow:(id)arg1;
- (void)showAllBezels:(id)arg1;
- (void)showSuddenTerminationCount:(id)arg1;
- (void)updateSuddenTerminationCount:(id)arg1;
- (void)triggerCollectionChecking:(id)arg1;
- (void)showXcodeServerPrefencePane:(id)arg1;
- (void)showDevicesWindow:(id)arg1;
- (void)makeWindowFirstResponder:(id)arg1;
- (void)showWelcomeToXcode:(id)arg1;
- (void)contextMenu_openWithExternalEditor:(id)arg1;
- (void)openWithExternalEditor:(id)arg1;
- (void)openWithExternalEditorUsingContextualMenuSelection:(BOOL)arg1;
- (void)contextMenu_revealInProjectNavigator:(id)arg1;
- (void)_revealArchivedItemsInNavigator:(id)arg1;
- (void)revealInDebugNavigator:(id)arg1;
- (void)revealInProjectNavigator:(id)arg1;
- (void)contextMenu_showInFinder:(id)arg1;
- (void)showInFinder:(id)arg1;
- (void)showInFinderUsingContextualMenuSelection:(BOOL)arg1;
- (void)contextMenu_openInEditorTabs:(id)arg1;
- (void)_openDocumentURLsInEditorTabs:(id)arg1;
- (void)contextMenu_openInNewWindow:(id)arg1;
- (void)openInNewWindow:(id)arg1;
- (void)openInNewWindowUsingContextualMenuSelection:(BOOL)arg1;
- (void)contextMenu_openInNewWindowTab:(id)arg1;
- (void)openInNewWindowTab:(id)arg1;
- (void)openInNewWindowTabUsingContextualMenuSelection:(BOOL)arg1;
- (void)openQuickly:(id)arg1;
- (void)scmDownload:(id)arg1;
- (void)newPackage:(id)arg1;
- (void)newProject:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)newTarget:(id)arg1;
- (void)newPlayground:(id)arg1;
- (void)newDocument:(id)arg1;
- (void)newWindow:(id)arg1;
- (void)newWindowForTab:(id)arg1;
- (void)newTab:(id)arg1;
- (void)newTemplateForTemplateKind:(id)arg1 template:(id)arg2 inWorkspaceTabController:(id)arg3 createdDocument:(id)arg4;
- (void)newTemplateForTemplateKind:(id)arg1 template:(id)arg2;
- (void)newTemplateSkippingChooserIfPossibleForTemplateKind:(id)arg1;
- (void)showTemplateChooserForTemplateKind:(id)arg1;
- (void)newWorkspace:(id)arg1;
- (void)closeOtherWindows:(id)arg1;
- (void)closeAllWindows:(id)arg1;
- (void)finishLoggingPowerConsumption:(id)arg1;
- (void)logPowerConsumption:(id)arg1;
- (void)triggerFailedAssertion:(id)arg1;
- (void)reportWorkspaceMetrics:(id)arg1;
- (void)countViewHierarchy:(id)arg1;
- (void)showIconDebuggingWindow:(id)arg1;
- (void)showPreferencesPanel:(id)arg1;
- (void)showXcodeExtensions:(id)arg1;
- (void)orderFrontAboutPanel:(id)arg1;
- (void)reportIssueToApple:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)_initWithSelectionSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

