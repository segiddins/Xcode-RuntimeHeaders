//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTInvalidation_NSObject.h>

#import <IDEKit/IDENavigableItemCoordinatorDelegate-Protocol.h>

@interface IDENavigableBridgingSource : DVTInvalidation_NSObject <IDENavigableItemCoordinatorDelegate>
{
    // Error parsing type: , name: synchronizationQueue
    // Error parsing type: , name: $__lazy_storage_$_rootIdentifier
    // Error parsing type: , name: rootAccessor
    // Error parsing type: , name: coordinator
    // Error parsing type: , name: workspace
    // Error parsing type: , name: broadcaster
    // Error parsing type: , name: identifierToItem
    // Error parsing type: , name: itemToIdentifier
    // Error parsing type: , name: observationTokensByIdentifier
    // Error parsing type: , name: childrenByIdentifier
}

- (void).cxx_destruct;
- (id)init;
- (id)navigableItemCoordinator:(id)arg1 editorDocumentForNavigableItem:(id)arg2;
- (void)navigableItemCoordinator:(id)arg1 willForgetItems:(id)arg2;
- (void)primitiveInvalidate;

@end

