//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBObjectLibraryAssetProvider.h>

@class IBCocoaTouchObjectLibraryAsset;

@interface IBCocoaTouchObjectLibraryAssetProvider : IBObjectLibraryAssetProvider
{
    IBCocoaTouchObjectLibraryAsset *_viewAsset;
    IBCocoaTouchObjectLibraryAsset *_scrollViewAsset;
    IBCocoaTouchObjectLibraryAsset *_tabBarControllerAsset;
    IBCocoaTouchObjectLibraryAsset *_viewControllerAsset;
    IBCocoaTouchObjectLibraryAsset *_navigationControllerAsset;
    IBCocoaTouchObjectLibraryAsset *_tableViewControllerAsset;
    IBCocoaTouchObjectLibraryAsset *_collectionViewControllerAsset;
    IBCocoaTouchObjectLibraryAsset *_datePickerAsset;
    IBCocoaTouchObjectLibraryAsset *_searchBarWithSearchDisplayControllerAsset;
    IBCocoaTouchObjectLibraryAsset *_glkViewControllerAsset;
    IBCocoaTouchObjectLibraryAsset *_windowAsset;
    IBCocoaTouchObjectLibraryAsset *_splitViewControllerAsset;
    IBCocoaTouchObjectLibraryAsset *_containerViewAsset;
    IBCocoaTouchObjectLibraryAsset *_labelAsset;
    IBCocoaTouchObjectLibraryAsset *_switchAsset;
    IBCocoaTouchObjectLibraryAsset *_activityIndicatorAsset;
    IBCocoaTouchObjectLibraryAsset *_progressViewAsset;
    IBCocoaTouchObjectLibraryAsset *_stepperAsset;
    IBCocoaTouchObjectLibraryAsset *_imageViewAsset;
}

- (void).cxx_destruct;
@property(retain) IBCocoaTouchObjectLibraryAsset *imageViewAsset; // @synthesize imageViewAsset=_imageViewAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *stepperAsset; // @synthesize stepperAsset=_stepperAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *progressViewAsset; // @synthesize progressViewAsset=_progressViewAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *activityIndicatorAsset; // @synthesize activityIndicatorAsset=_activityIndicatorAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *switchAsset; // @synthesize switchAsset=_switchAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *labelAsset; // @synthesize labelAsset=_labelAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *containerViewAsset; // @synthesize containerViewAsset=_containerViewAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *splitViewControllerAsset; // @synthesize splitViewControllerAsset=_splitViewControllerAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *windowAsset; // @synthesize windowAsset=_windowAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *glkViewControllerAsset; // @synthesize glkViewControllerAsset=_glkViewControllerAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *searchBarWithSearchDisplayControllerAsset; // @synthesize searchBarWithSearchDisplayControllerAsset=_searchBarWithSearchDisplayControllerAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *datePickerAsset; // @synthesize datePickerAsset=_datePickerAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *collectionViewControllerAsset; // @synthesize collectionViewControllerAsset=_collectionViewControllerAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *tableViewControllerAsset; // @synthesize tableViewControllerAsset=_tableViewControllerAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *navigationControllerAsset; // @synthesize navigationControllerAsset=_navigationControllerAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *viewControllerAsset; // @synthesize viewControllerAsset=_viewControllerAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *tabBarControllerAsset; // @synthesize tabBarControllerAsset=_tabBarControllerAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *scrollViewAsset; // @synthesize scrollViewAsset=_scrollViewAsset;
@property(retain) IBCocoaTouchObjectLibraryAsset *viewAsset; // @synthesize viewAsset=_viewAsset;
- (void)document:(id)arg1 didAddDraggedObjects:(id)arg2 fromDraggedObjectLibraryAsset:(id)arg3;
- (void)markObjects:(id)arg1 draggedToDocument:(id)arg2 asHavingHorizontal:(id)arg3 andVerticalHuggingPriority:(id)arg4;
- (void)didAddContainerViewAssetProducts:(id)arg1 toDocument:(id)arg2;
- (void)didAddSearchBarWithSearchDisplayControllerAssetProducts:(id)arg1 toDocument:(id)arg2;

@end

