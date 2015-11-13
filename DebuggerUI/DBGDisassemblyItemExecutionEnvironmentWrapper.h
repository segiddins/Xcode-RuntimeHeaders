//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDENavigableItemDomainProvider.h>

#import <DebuggerUI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTObservingToken, IDEFileReference, IDEWorkspace, NSArray, NSImage, NSMapTable, NSMutableArray, NSString;

@interface DBGDisassemblyItemExecutionEnvironmentWrapper : IDENavigableItemDomainProvider <IDEKeyDrivenNavigableItemRepresentedObject>
{
    IDEWorkspace *_workspace;
    NSMutableArray *_processWrappers;
    NSMapTable *_launchSessionsProcessToObserverTokens;
    DVTObservingToken *_launchSessionObserver;
    DVTObservingToken *_workspacesLaunchSessionsObserver;
    DVTObservingToken *_workspaceValidObserver;
}

+ (id)domainObjectForWorkspace:(id)arg1;
+ (id)providerForWorkspace:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) NSString *navigableItem_name;
- (id)geniusDisassemblyItemForStackFrame:(id)arg1;
- (void)_handleProcessRemoved:(id)arg1;
- (void)_handleProcessChanged:(id)arg1;
- (void)_handleLaunchSessionsAdded:(id)arg1;
- (void)_handleLaunchSessionsRemoved:(id)arg1;
- (void)_handleLaunchSessionsChanged:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableProcessWrappers; // @dynamic mutableProcessWrappers;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) NSArray *processWrappers; // @dynamic processWrappers;
@property(readonly) Class superclass;

@end

