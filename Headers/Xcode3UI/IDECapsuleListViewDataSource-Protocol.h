//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/NSObject-Protocol.h>

@class IDECapsuleListView, IDEViewController;
@protocol IDECapsuleViewController, NSDraggingInfo;

@protocol IDECapsuleListViewDataSource <NSObject>
- (IDEViewController<IDECapsuleViewController> *)capsuleListView:(IDECapsuleListView *)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(IDECapsuleListView *)arg1;

@optional
- (void)capsuleListViewDidCompleteLayout:(IDECapsuleListView *)arg1;
- (void)capsuleListView:(IDECapsuleListView *)arg1 didExpandRow:(long long)arg2;
- (void)capsuleListView:(IDECapsuleListView *)arg1 didCollapseRow:(long long)arg2;
- (BOOL)capsuleListView:(IDECapsuleListView *)arg1 allowDragOfRowAtIndex:(unsigned long long)arg2;
- (unsigned long long)capsuleListView:(IDECapsuleListView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedRow:(long long)arg3;
- (BOOL)capsuleListView:(IDECapsuleListView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 draggedRow:(unsigned long long)arg3 destinationRow:(unsigned long long)arg4;
- (BOOL)isCollapsedSavedStateForRow:(long long)arg1;
@end

