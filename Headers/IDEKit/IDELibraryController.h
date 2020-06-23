//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTLibraryKit/DVTLibraryController.h>

@class DVTObservingToken, IDEWorkspace, IDEWorkspaceDocument, IDEWorkspaceTabController;
@protocol IDELibraryContentDestination;

@interface IDELibraryController : DVTLibraryController
{
    DVTObservingToken *_activeEditorDocumentKVOToken;
    id <IDELibraryContentDestination> _contentDestination;
    IDEWorkspaceDocument *_workspaceDocument;
    IDEWorkspaceTabController *_contentDefiningWorkspaceTabController;
}

- (void).cxx_destruct;
@property(retain) IDEWorkspaceTabController *contentDefiningWorkspaceTabController; // @synthesize contentDefiningWorkspaceTabController=_contentDefiningWorkspaceTabController;
@property(retain) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
- (BOOL)depositAssets:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
@property(readonly) IDEWorkspace *workspace;
- (void)activeEditorDidChange:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspaceDocument:(id)arg1 andLibrary:(id)arg2;

@end

