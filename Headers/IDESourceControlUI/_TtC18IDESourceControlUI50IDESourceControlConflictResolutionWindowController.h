//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class DVTBorderedView, IDENavigableItem, IDEWorkspace, MISSING_TYPE, NSButton, NSString;

@interface _TtC18IDESourceControlUI50IDESourceControlConflictResolutionWindowController : NSWindowController
{
    MISSING_TYPE *rootFlatNavigableItem;
    MISSING_TYPE *rootSystemNavigableItem;
    MISSING_TYPE *flatRootNodeRepresentedObject;
    MISSING_TYPE *structuredRootNodeRepresentedObject;
    MISSING_TYPE *cancelButton;
    MISSING_TYPE *resolveButton;
    MISSING_TYPE *reviewFilesView;
    MISSING_TYPE *reviewFilesViewController;
    MISSING_TYPE *workspace;
    MISSING_TYPE *workingCopy;
    MISSING_TYPE *actionTitle;
    MISSING_TYPE *resolveActionTitle;
    MISSING_TYPE *forcedUpstreamRevision;
    MISSING_TYPE *parentWindow;
    MISSING_TYPE *currentOperation;
    MISSING_TYPE *localRevision;
    MISSING_TYPE *upstreamRevision;
    MISSING_TYPE *ancestorRevision;
    MISSING_TYPE *resolveInProgress;
    MISSING_TYPE *itemsWithConflicts;
    MISSING_TYPE *conflictCountObservationToken;
    MISSING_TYPE *filterStringObservingToken;
}

- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)resolve:(id)arg1;
- (void)windowDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
@property(nonatomic, readonly) NSString *windowNibName;
@property(nonatomic, retain) IDEWorkspace *workspace; // @synthesize workspace;
@property(nonatomic) __weak DVTBorderedView *reviewFilesView; // @synthesize reviewFilesView;
@property(nonatomic) __weak NSButton *resolveButton; // @synthesize resolveButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic, retain) IDENavigableItem *rootSystemNavigableItem; // @synthesize rootSystemNavigableItem;
@property(nonatomic, retain) IDENavigableItem *rootFlatNavigableItem; // @synthesize rootFlatNavigableItem;

@end

