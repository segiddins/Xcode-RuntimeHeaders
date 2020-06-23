//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3UI/IDEFilePickerViewDelegate-Protocol.h>

@class IDEFilePickerPanel, IDEWorkspace, NSArray, NSString, NSTimer, Xcode3Target;

@interface Xcode3AddFrameworksController : NSObject <IDEFilePickerViewDelegate>
{
    Xcode3Target *_target;
    IDEWorkspace *_workspace;
    NSArray *_libraryGroups;
    NSArray *_selectedItems;
    IDEFilePickerPanel *_panel;
    NSTimer *_progressIndicatorTimer;
    BOOL _showsProjectContent;
    BOOL _showsWorkspaceContent;
    BOOL _showsLocalPackageContent;
    BOOL _showsRemotePackageContent;
    BOOL _showsSDKContent;
    BOOL _showsDeveloperFrameworks;
    BOOL _showsLinkableContent;
    BOOL _showsEmbeddableContent;
    BOOL _showPlatformBadging;
}

- (void).cxx_destruct;
@property(readonly) NSArray *selectedItems; // @synthesize selectedItems=_selectedItems;
@property BOOL showPlatformBadging; // @synthesize showPlatformBadging=_showPlatformBadging;
@property BOOL showsEmbeddableContent; // @synthesize showsEmbeddableContent=_showsEmbeddableContent;
@property BOOL showsLinkableContent; // @synthesize showsLinkableContent=_showsLinkableContent;
@property BOOL showsDeveloperFrameworks; // @synthesize showsDeveloperFrameworks=_showsDeveloperFrameworks;
@property BOOL showsSDKContent; // @synthesize showsSDKContent=_showsSDKContent;
@property BOOL showsRemotePackageContent; // @synthesize showsRemotePackageContent=_showsRemotePackageContent;
@property BOOL showsLocalPackageContent; // @synthesize showsLocalPackageContent=_showsLocalPackageContent;
@property BOOL showsWorkspaceContent; // @synthesize showsWorkspaceContent=_showsWorkspaceContent;
@property BOOL showsProjectContent; // @synthesize showsProjectContent=_showsProjectContent;
- (id)filePickerView:(id)arg1 outlineView:(id)arg2 toolTipForCell:(id)arg3 rect:(struct CGRect *)arg4 tableColumn:(id)arg5 item:(id)arg6 mouseLocation:(struct CGPoint)arg7;
- (void)filePickerView:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4 item:(id)arg5;
- (void)populateLibraryGroupsInBackground;
- (id)findDeveloperLibraries;
- (id)findLibraries:(BOOL)arg1 embeddables:(BOOL)arg2 producedBySourcePackage:(id)arg3 packageReference:(id)arg4;
- (id)findLibraries:(BOOL)arg1 embeddables:(BOOL)arg2 producedByXcodeProject:(id)arg3;
- (void)endSheetWithReturnCode:(long long)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithTarget:(id)arg1 inWorkspace:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

