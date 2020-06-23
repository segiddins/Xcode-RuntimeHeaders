//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, IDEArchiveSchemeAction, IDEScheme, IDEWorkspace, NSBox, NSMenuItem, NSPopUpButton, NSString, NSTextField;

@interface IDEArchiveRunPhaseSheetController : IDEViewController
{
    IDEScheme *_scheme;
    IDEWorkspace *_workspace;
    IDEArchiveSchemeAction *_schemeAction;
    NSTextField *_archiveNameTextField;
    NSPopUpButton *_packagingPopUp;
    NSPopUpButton *_identityPopUp;
    NSBox *_box;
    NSMenuItem *_packagingPopUpItemToRemove;
    DVTObservingToken *_customArchiveNameObservingToken;
}

+ (void)initialize;
@property(retain) IDEArchiveSchemeAction *schemeAction; // @synthesize schemeAction=_schemeAction;
@property(retain) IDEScheme *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
@property(retain) IDEWorkspace *workspace;
- (void)primitiveInvalidate;
- (void)loadView;
@property(copy) NSString *customArchiveName;
- (void)updateBoundContent;
- (void)updateBoundIDEWorkspaceBinding;
- (void)updateBoundIDERunContextBinding;
- (id)dvt_extraBindings;

@end

