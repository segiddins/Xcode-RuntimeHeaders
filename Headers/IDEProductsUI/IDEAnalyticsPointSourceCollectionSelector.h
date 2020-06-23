//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEProductsUI/DVTPathCellDelegate-Protocol.h>
#import <IDEProductsUI/NSPathControlDelegate-Protocol.h>

@class DVTAnalyticsPointSourceCollection, DVTObservingToken, DVTPathControl, DVTUserDefaultsLeastRecentlyUsedCache, IDENavigableItem, IDENavigableItemCoordinator, IDEProduct, NSArray, NSButton, NSError, NSLayoutConstraint, NSString;

@interface IDEAnalyticsPointSourceCollectionSelector : IDEViewController <NSPathControlDelegate, DVTPathCellDelegate>
{
    BOOL _busy;
    BOOL _restoringSelectedNavigableItem;
    IDEProduct *_product;
    NSError *_currentError;
    DVTPathControl *_pathControl;
    NSButton *_errorButton;
    NSLayoutConstraint *_pathControlLeadingConstraintWithError;
    NSArray *_rootNavigables;
    IDENavigableItem *_selectedNavigable;
    IDENavigableItemCoordinator *_navItemCoordinator;
    NSLayoutConstraint *_pathControlLeadingConstraint;
    long long _type;
    DVTObservingToken *_errorObserver;
    DVTUserDefaultsLeastRecentlyUsedCache *_selectedAnalyticsPointSourceCache;
}

+ (id)keyPathsForValuesAffectingSelectedAnalyticsPointSourceCollection;
- (void).cxx_destruct;
@property(nonatomic, getter=isRestoringSelectedNavigableItem) BOOL restoringSelectedNavigableItem; // @synthesize restoringSelectedNavigableItem=_restoringSelectedNavigableItem;
@property(retain, nonatomic) DVTUserDefaultsLeastRecentlyUsedCache *selectedAnalyticsPointSourceCache; // @synthesize selectedAnalyticsPointSourceCache=_selectedAnalyticsPointSourceCache;
@property(retain) DVTObservingToken *errorObserver; // @synthesize errorObserver=_errorObserver;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain) NSLayoutConstraint *pathControlLeadingConstraint; // @synthesize pathControlLeadingConstraint=_pathControlLeadingConstraint;
@property(retain, nonatomic) IDENavigableItemCoordinator *navItemCoordinator; // @synthesize navItemCoordinator=_navItemCoordinator;
@property(retain, nonatomic) IDENavigableItem *selectedNavigable; // @synthesize selectedNavigable=_selectedNavigable;
@property(retain, nonatomic) NSArray *rootNavigables; // @synthesize rootNavigables=_rootNavigables;
@property(retain) NSLayoutConstraint *pathControlLeadingConstraintWithError; // @synthesize pathControlLeadingConstraintWithError=_pathControlLeadingConstraintWithError;
@property __weak NSButton *errorButton; // @synthesize errorButton=_errorButton;
@property __weak DVTPathControl *pathControl; // @synthesize pathControl=_pathControl;
@property(nonatomic) BOOL busy; // @synthesize busy=_busy;
@property(retain) NSError *currentError; // @synthesize currentError=_currentError;
@property(retain, nonatomic) IDEProduct *product; // @synthesize product=_product;
- (void)saveAnalyticsPointSourceCollectionSelectionState;
- (void)restoreAnalyticsPointSourceCollectionSelectionState;
- (id)_navigableItemForAnalyticsPointSourceStringValue:(id)arg1 navigable:(id)arg2;
- (id)pathCell:(id)arg1 accessibilityDescriptionForPathComponentCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;
- (struct CGPoint)pathCell:(id)arg1 adjustPopupMenuLocation:(struct CGPoint)arg2;
- (long long)pathCell:(id)arg1 textAlignmentOfTitleForPathComponentCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)pathCellNoSelectionTitle;
- (void)primitiveInvalidate;
- (void)viewError:(id)arg1;
- (void)_showErrorButton:(BOOL)arg1;
- (void)_hideErrorButton;
- (void)_updateErrorPresentation;
- (void)_updateNavigables;
- (void)_invalidateRepresentedObjectsForNavigables:(id)arg1;
@property(readonly) DVTAnalyticsPointSourceCollection *selectedAnalyticsPointSourceCollection;
- (void)viewDidLoad;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

