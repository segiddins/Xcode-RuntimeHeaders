//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEEditorDocument, IDENavigableItem, IDENavigableItemCoordinator, NSArray;

@protocol IDENavigableItemCoordinatorDelegate <NSObject>

@optional
- (NSArray *)navigableItem:(IDENavigableItem *)arg1 childRepresentedObjectsForArray:(NSArray *)arg2;
- (IDEEditorDocument *)navigableItemCoordinator:(IDENavigableItemCoordinator *)arg1 editorDocumentForNavigableItem:(IDENavigableItem *)arg2;
@end

