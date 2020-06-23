//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDENavigableItemFilteringCoordinator.h>

@class DVTDelayedInvocation;

@interface IDENavigableItemSyncFilteringCoordinator : IDENavigableItemFilteringCoordinator
{
    DVTDelayedInvocation *_scheduledFilteringRestart;
}

- (void).cxx_destruct;
@property(readonly) DVTDelayedInvocation *scheduledFilteringRestart; // @synthesize scheduledFilteringRestart=_scheduledFilteringRestart;
- (void)_invalidateArrangedChildrenOfItems:(id)arg1;
- (void)_handleObjectGraphDidChange:(id)arg1;
- (void)_handleItemsPropertiesDidChange:(id)arg1;
- (id)_arrangeItems:(id)arg1 ofItem:(id)arg2;
- (void)_filterDidChange;
- (void)primitiveInvalidate;
- (id)init;

@end

