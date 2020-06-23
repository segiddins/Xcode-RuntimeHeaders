//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBCIFilterEffectsInspector.h>

@class DVTBindingToken, DVTBorderedView, DVTObservingToken, DVTStackView_ML, DVTTableView, IBToManyCIFilterEffectsInspectorContainerView, IDEControlGroup, IDEInspectorContentView, NSArrayController, NSIndexSet;

@interface IBToManyCIFilterEffectsInspector : IBCIFilterEffectsInspector
{
    IDEInspectorContentView *_inspectedFilterView;
    DVTObservingToken *_filtersArrayControllerSelectionIndexesObservingToken;
    DVTBindingToken *_filtersArraySelectedIndexBindingToken;
    DVTBindingToken *_filtersArrayContentBindingToken;
    DVTObservingToken *_filtersObservingToken;
    NSIndexSet *_lastKnownIndexes;
    BOOL _canEditSelectedFilter;
    NSArrayController *_filtersArrayController;
    IBToManyCIFilterEffectsInspectorContainerView *_filterListContainerView;
    DVTTableView *_filtersTableView;
    IDEControlGroup *_controlGroup;
    DVTBorderedView *_controlBar;
    DVTStackView_ML *_stackView;
}

- (void).cxx_destruct;
@property(retain) DVTStackView_ML *stackView; // @synthesize stackView=_stackView;
@property(retain) DVTBorderedView *controlBar; // @synthesize controlBar=_controlBar;
@property(retain) IDEControlGroup *controlGroup; // @synthesize controlGroup=_controlGroup;
@property(retain) DVTTableView *filtersTableView; // @synthesize filtersTableView=_filtersTableView;
@property(retain) IBToManyCIFilterEffectsInspectorContainerView *filterListContainerView; // @synthesize filterListContainerView=_filterListContainerView;
@property(retain) NSArrayController *filtersArrayController; // @synthesize filtersArrayController=_filtersArrayController;
@property BOOL canEditSelectedFilter; // @synthesize canEditSelectedFilter=_canEditSelectedFilter;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)removeSelectedFilters:(id)arg1;
- (void)addNewFilter:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)setupFilterInspectorViewAfterLoading;
- (void)setupFiltersTableViewAfterLoading;
- (void)setupControlBarAfterLoading;
- (id)localDragPasteboardType;
- (void)updateCanEditSelectedFilter;
- (id)filterChoices;
- (id)excludedFilterNamesForFilterChoices;
- (id)excludedCategoriesForFilterChoices;
- (void)setContent:(id)arg1;
- (void)updateTableViewContentString;
- (id)filters;
- (id)defaultFilterName;
- (id)inspectedFilterIndexesKeyPath;
- (id)inspectedFilterNameKeyPath;
- (id)noFiltersDisplayString;
- (id)bindableFiltersKeyPath;
- (void)primitiveInvalidate;

@end

