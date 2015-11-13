//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DebuggerUI/NSObject-Protocol.h>

@class DVTTextDocumentLocation, IDEDebugSession, IDELaunchSession, IDENavigableItem, IDEWorkspaceDocument;

@protocol IDEDebugSessionController <NSObject>
+ (IDENavigableItem *)descendantItemForRepresentedObject:(id)arg1 inRootNavigableItem:(IDENavigableItem *)arg2;
@property(readonly) IDEDebugSession *debugSession;
- (void)openMemoryBrowser;
- (void)setSelectedNavigableItemFromUserInterface:(IDENavigableItem *)arg1;
- (void)mouseExitedSidebarLineArea;
- (void)mouseOverSidebarAtLocation:(DVTTextDocumentLocation *)arg1 withinBlockAtRange:(struct _NSRange)arg2 withScreenFrame:(struct CGRect)arg3;
- (id)initWithLaunchSession:(IDELaunchSession *)arg1 workspaceDocument:(IDEWorkspaceDocument *)arg2;
@end

