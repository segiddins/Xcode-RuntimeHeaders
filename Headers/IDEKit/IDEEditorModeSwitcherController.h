//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>

@class DVTDelayedMenuGradientImageButton, DVTStackBacktrace, IDEEditorContext, NSImage, NSString;

@interface IDEEditorModeSwitcherController : NSObject <DVTInvalidation, NSMenuDelegate>
{
    IDEEditorContext *_editorContext;
    DVTDelayedMenuGradientImageButton *_button;
    NSImage *_cachedDefaultButtonImage;
    BOOL _editorContextDidInstall;
    BOOL _editorModeSwitcherHasMenu;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL editorModeSwitcherHasMenu; // @synthesize editorModeSwitcherHasMenu=_editorModeSwitcherHasMenu;
- (id)_imageForMenuItemTag:(unsigned long long)arg1;
- (unsigned long long)_menuItemTagForEditorAreaSplit:(id)arg1;
- (void)_setTarget:(id)arg1 forMenuItems:(id)arg2;
- (id)_menu;
- (id)_menuForKey:(id)arg1 extension:(id)arg2 editorSplitMenuItems:(id)arg3 editorMenuItems:(id)arg4;
- (id)_menuForExtension:(id)arg1 editorSplitMenuItems:(id)arg2 editorMenuItems:(id)arg3;
- (BOOL)_menuHasEditorSplitMenuItemIDs;
- (BOOL)_menuHasMenuItems;
- (id)_defaultButtonImage;
- (void)_updateButton;
- (id)editorModeSwitcherView;
- (void)editorContextDidInstall;
- (void)primitiveInvalidate;
- (id)initWithEditorContext:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

