//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESceneKitEditor/SKEInspectorViewController.h>

#import <IDESceneKitEditor/DVTInvalidation-Protocol.h>
#import <IDESceneKitEditor/NSTableViewDataSource-Protocol.h>

@class DVTGradientImageButton, DVTObservingToken, DVTScopeBarView, DVTScrollView, DVTStackBacktrace, DVTTableView, NSArrayController, NSMutableDictionary, NSString;

@interface SKEMaterialCustomPropertiesInspector : SKEInspectorViewController <NSTableViewDataSource, DVTInvalidation>
{
    DVTTableView *_tableView;
    DVTScrollView *_scrollView;
    DVTScopeBarView *_scopeBarView;
    DVTObservingToken *_arrayControllerContentObservingToken;
    DVTObservingToken *_arrayMaterialPropertiesObservingToken;
    DVTObservingToken *_arrayMaterialObservingToken;
    NSMutableDictionary *_propertyValueViewForMaterialProperty;
    NSString *_emptyContentString;
    DVTGradientImageButton *_deleteButton;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_toolsButton;
    NSArrayController *_arrayController;
}

+ (id)tableColumnTitles;
+ (struct _NSRange)visibleRowCountRange;
+ (BOOL)wantsEditionBar;
- (void).cxx_destruct;
@property(readonly) DVTScopeBarView *scopeBarView; // @synthesize scopeBarView=_scopeBarView;
@property(readonly) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(retain) DVTTableView *tableView; // @synthesize tableView=_tableView;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)customMaterialPropertyForRow:(long long)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)userChangedType:(id)arg1;
- (void)userChangedValue:(id)arg1;
- (void)doubleClickedTableView:(id)arg1;
- (void)titleChanged:(id)arg1;
- (void)viewDidInstall;
- (void)addPropertyAction:(id)arg1;
- (id)material;
- (void)deletePropertyAction:(id)arg1;
- (void)configureEditionBar;
- (void)updateConstraintsAccordingToControlViewVisibilityAndNumberOfRows;
- (id)makeProtoptypeTextField;
@property(copy, nonatomic) NSString *emptyContentString;
- (void)primitiveInvalidate;
- (void)didSetInspectedObjects:(id)arg1;
- (void)invalidateCustomPropertiesObservers;
- (void)setupViewData;
- (void)updateArrayControllerObserver;
- (void)loadView;
- (void)setContent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

