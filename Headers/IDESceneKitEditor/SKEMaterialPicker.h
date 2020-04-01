//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTObservingToken, DVTScrollView, DVTSearchField, NSArray, NSButton, NSString, SKEMaterialPickerCollectionView;
@protocol SKEMaterialPickerDataSource;

@interface SKEMaterialPicker : DVTViewController
{
    CDUnknownBlockType _completionHandler;
    id <SKEMaterialPickerDataSource> _dataSource;
    SKEMaterialPickerCollectionView *_collectionView;
    DVTSearchField *_searchField;
    DVTScrollView *_scrollView;
    NSButton *_doneButton;
    NSArray *_cachedContents;
    NSArray *_displayedContents;
    DVTObservingToken *_selectionObservingToken;
    NSString *_filterString;
}

@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
- (void).cxx_destruct;
- (void)_discardPicker:(id)arg1;
- (void)_useSelectedMaterial:(id)arg1;
- (void)refreshContentsUI;
- (void)refreshDoneButtonState;
- (void)refreshContents;
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (id)initWithDataSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

