//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

#import <DevToolsInterface/NSToolbarDelegate-Protocol.h>
#import <DevToolsInterface/NSWindowDelegate-Protocol.h>
#import <DevToolsInterface/PBXSelectionTarget-Protocol.h>

@class NSBox, NSMutableArray, NSMutableDictionary, NSString, NSView, PBXModule, PBXProjectDocument, XCBarModule, XCControlView, XCExtendedSegmentedControl, XCExtendedTabView, XCPerspectivesSpecification;

@interface XCPerspectiveModule : PBXProjectModule <NSWindowDelegate, NSToolbarDelegate, PBXSelectionTarget>
{
    NSBox *_perspectiveControl;
    NSBox *_perspectivePalette;
    XCControlView *_contentView;
    XCExtendedSegmentedControl *_perspectiveButtons;
    XCControlView *_perspectiveButtonsControlView;
    XCControlView *_paletteControlView;
    PBXModule *_activeNonRetainedModule;
    XCExtendedTabView *_perspectivesTabView;
    long long _activePerspective;
    XCPerspectivesSpecification *_specification;
    BOOL _respectUpdateNotifications;
    NSView *_sheetSourceView;
    PBXProjectDocument *_docToReleaseOnDealloc;
    NSMutableDictionary *_perspectiveToolbarItems;
    NSMutableDictionary *_previousToolbars;
    NSMutableDictionary *_perspectiveToolbarIdArrays;
    unsigned long long _toolbarDisplayMode;
    unsigned long long _toolbarSizeMode;
    BOOL _toolbarIsVisible;
    NSMutableArray *_preferredWidths;
    XCBarModule *_favoritesModule;
}

+ (void)setSheetSourceView:(id)arg1;
+ (void)initialize;
+ (void)_loadSpecificationsIfNeeded;
+ (void)openForProjectDocument:(id)arg1;
- (BOOL)perspectivesBarVisible;
- (void)setBottomPerspectivesBarVisible:(BOOL)arg1;
- (void)setPerspectivesBarVisible:(BOOL)arg1;
- (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)setAsDefaultLayout:(id)arg1;
- (id)moduleToolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)moduleToolbarDefaultItemIdentifiers;
- (id)moduleToolbarAllowedItemIdentifiers;
- (void)activateToolbarInWindow:(id)arg1 atIndex:(long long)arg2;
- (void)recordToolbarInWindow:(id)arg1 atIndex:(long long)arg2;
- (void)loadToolbarConfiguration:(id)arg1 atIndex:(long long)arg2;
- (id)_userDefaultsToolbarConfigIdentifier:(id)arg1;
- (void)configureToolbarOnWindow:(id)arg1;
- (void)_perspectiveChosen:(id)arg1;
- (id)moduleForAction:(SEL)arg1;
- (id)performAction:(id)arg1 withSelection:(id)arg2;
- (void)markActiveModules;
- (id)loadPerspectiveContainingService:(Class)arg1;
- (void)showModule:(id)arg1;
- (void)loadPerspectiveWithName:(id)arg1;
- (void)loadPerspectiveAtIndex:(long long)arg1;
- (void)activatePerspectiveWithName:(id)arg1;
- (void)activatePerspectiveAtIndex:(long long)arg1;
- (id)_sheetSourceView;
- (void)setSheetSourceView:(id)arg1;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (id)keyModules;
- (id)tabForModule:(id)arg1;
- (id)moduleForTab:(id)arg1;
- (id)activeTabModule;
- (BOOL)isMainModule;
- (unsigned long long)moduleWindowStyleMask;
- (id)mainEditor;
- (id)guid;
- (void)moduleDidChangeLabel:(id)arg1;
- (void)moduleWindowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)updateSpecification:(id)arg1;
- (void)_perspectiveSpecificationReadyForInfo:(id)arg1;
- (void)_modulesChanged:(id)arg1;
- (void)_activePerspectiveChanged:(id)arg1;
- (void)setWantsModuleWindow:(BOOL)arg1;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)becomeActive;
- (void)removeSubmodule:(id)arg1;
- (id)type:(Class)arg1 inPerspective:(id)arg2 matchingFunction:(CDUnknownFunctionPointerType)arg3 usingData:(void *)arg4;
- (id)type:(Class)arg1 inPerspective:(id)arg2;
- (BOOL)isModule:(id)arg1 inPerspectiveWithIdentifier:(id)arg2;
- (id)typeInActivePerspective:(Class)arg1;
- (BOOL)isModuleInSelectedPerspective:(id)arg1;
- (id)identifierForPerspectiveContainingModule:(id)arg1;
- (void)windowWillShow;
- (BOOL)wantsModuleWindow;
- (void)viewDidLoad;
- (void)markAsLastActive;
- (void)dealloc;
- (void)configureWithSpecification:(id)arg1;
- (void)_loadProjectPerspective;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

