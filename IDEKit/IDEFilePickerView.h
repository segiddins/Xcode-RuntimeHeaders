//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class DVTBindingToken, DVTObservingToken, DVTStackBacktrace, IDENavigableItemAsyncFilteringCoordinator, IDENavigatorOutlineView, NSArray, NSButton, NSMutableArray, NSPredicate, NSProgressIndicator, NSScrollView, NSSearchField, NSString, NSTextField;
@protocol IDEFilePickerViewDelegate;

@interface IDEFilePickerView : NSView <NSOutlineViewDelegate, NSOutlineViewDataSource, DVTInvalidation>
{
    NSTextField *_messageTextField;
    IDENavigatorOutlineView *_navigatorOutlineView;
    NSButton *_addButton;
    NSButton *_alternateAddButton;
    NSButton *_cancelButton;
    NSSearchField *_searchField;
    NSArray *_rootNavigableItems;
    IDENavigableItemAsyncFilteringCoordinator *_navigableItemCoordinator;
    NSPredicate *_allowedFileFilterPredicate;
    NSPredicate *_selectableFileFilterPredicate;
    NSScrollView *_outlineScrollView;
    NSProgressIndicator *_progressIndicator;
    NSArray *_rootItems;
    id _target;
    SEL _addAction;
    SEL _alternateAddAction;
    SEL _cancelAction;
    NSString *_message;
    NSString *_addOtherButtonTitle;
    NSString *_addButtonTitle;
    NSString *_cancelButtonTitle;
    NSMutableArray *_realSelectedItems;
    id <IDEFilePickerViewDelegate> _delegate;
    DVTObservingToken *_buttonHidingObservationToken;
    BOOL _showsCancelButton;
    BOOL _showsAddButton;
    BOOL _showsAddOtherButton;
    BOOL _showsSearchField;
    BOOL _canChooseGroups;
    BOOL _delegateImplementsWillDisplayCell;
    BOOL _delegateImplementsItemIsExpandable;
    BOOL _delegateImplementsToolTipForCell;
    BOOL _delegateImplementsDataCellForTableColumn;
    NSArray *_bindingTokens;
    DVTBindingToken *_selectionBindingToken;
    unsigned long long _pickingStyle;
    NSString *__fileNameFilterString;
    NSArray *__realExpandedItems;
    NSPredicate *__selectableItemPredicate;
}

+ (BOOL)automaticallyNotifiesObserversOfNavigableItemCoordinator;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSPredicate *_selectableItemPredicate; // @synthesize _selectableItemPredicate=__selectableItemPredicate;
@property(copy) NSArray *_realExpandedItems; // @synthesize _realExpandedItems=__realExpandedItems;
@property(copy) NSString *_fileNameFilterString; // @synthesize _fileNameFilterString=__fileNameFilterString;
@property(retain, nonatomic) id <IDEFilePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long pickingStyle; // @synthesize pickingStyle=_pickingStyle;
@property SEL cancelAction; // @synthesize cancelAction=_cancelAction;
@property SEL alternateAddAction; // @synthesize alternateAddAction=_alternateAddAction;
@property SEL addAction; // @synthesize addAction=_addAction;
@property(retain) id target; // @synthesize target=_target;
@property(nonatomic) BOOL canChooseGroups; // @synthesize canChooseGroups=_canChooseGroups;
@property(copy) NSString *message; // @synthesize message=_message;
@property(copy) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy) NSString *addOtherButtonTitle; // @synthesize addOtherButtonTitle=_addOtherButtonTitle;
@property(copy) NSString *addButtonTitle; // @synthesize addButtonTitle=_addButtonTitle;
@property BOOL showsAddOtherButton; // @synthesize showsAddOtherButton=_showsAddOtherButton;
@property BOOL showsAddButton; // @synthesize showsAddButton=_showsAddButton;
@property BOOL showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(copy, nonatomic) NSPredicate *selectableNavigableItemFilter; // @synthesize selectableNavigableItemFilter=_selectableFileFilterPredicate;
@property(copy, nonatomic) NSPredicate *allowedNavigableItemFilter; // @synthesize allowedNavigableItemFilter=_allowedFileFilterPredicate;
- (void).cxx_destruct;
- (id)_defaultEmptyContentString;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (void)viewDidMoveToSuperview;
@property(retain) IDENavigableItemAsyncFilteringCoordinator *navigableItemCoordinator;
- (id)filter;
- (void)scrollItemToVisible:(id)arg1;
@property(copy) NSArray *expandedItems;
@property(retain) NSArray *selectedItems;
@property(readonly) BOOL canAdd;
@property(copy) NSArray *rootItems;
- (id)rootNavigableItems;
@property BOOL allowsMultipleSelection;
@property BOOL showsSearchField;
- (void)hideProgressIndicator;
- (void)showProgressIndicator;
- (void)_centerViewInSuperView:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)addOther:(id)arg1;
- (void)cancel:(id)arg1;
- (void)add:(id)arg1;
@property(readonly) BOOL allButtonsHidden;
- (void)primitiveInvalidate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_doLayoutAndAddSubviews;

// Remaining properties
@property(copy) NSMutableArray *_realSelectedItems; // @dynamic _realSelectedItems;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

