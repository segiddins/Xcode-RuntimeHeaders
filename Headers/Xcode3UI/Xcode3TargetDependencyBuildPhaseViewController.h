//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Xcode3UI/Xcode3FileBuildPhaseViewController.h>

@interface Xcode3TargetDependencyBuildPhaseViewController : Xcode3FileBuildPhaseViewController
{
}

- (BOOL)validateMenuItem:(id)arg1;
- (id)_tableMenu;
- (BOOL)_acceptDrop:(id)arg1 onGroup:(id)arg2 proposedRow:(unsigned long long)arg3;
- (unsigned long long)_validateDrop:(id)arg1 proposedGroup:(id)arg2;
- (id)_draggedItemsForDropOperation:(id)arg1;
- (id)referencesToAddForContainerItems:(id)arg1;
- (id)filePickerItemFilter;
- (id)rootItemsForFilePickerPanel;
- (void)configureFilePickerPanel:(id)arg1;
- (id)supportedDragTypes;
- (BOOL)isSyntheticBuildPhase;
- (void)addItems:(id)arg1;

@end

