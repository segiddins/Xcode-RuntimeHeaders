//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBViewDropTargetResolver.h>

@class IBOrderedRelationshipDragAndDropPolicy;

@interface IBUIViewControllerDropTargetResolver : IBViewDropTargetResolver
{
    IBOrderedRelationshipDragAndDropPolicy *toolbarInsertionPolicy;
}

- (void).cxx_destruct;
- (struct CGRect)insertionPolicy:(id)arg1 confinementRectForRepresentedObject:(id)arg2;
- (void)populatePolicies:(id)arg1;
- (id)editorView;
- (id)parentDropTargetResolver;
- (id)displayedNavigationBar;
- (id)displayedToolbar;
- (id)displayedTabBar;
- (id)editedView;
- (id)editedViewController;

@end

