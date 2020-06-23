//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorIntentResponseCapsuleViewController.h>

#import <IDEIntentBuilderEditor/IDEIntentBuilderComponentStackViewDelegate-Protocol.h>
#import <IDEIntentBuilderEditor/IDEIntentBuilderTokenTextFieldComponentViewDataSource-Protocol.h>
#import <IDEIntentBuilderEditor/NSSplitViewDelegate-Protocol.h>
#import <IDEIntentBuilderEditor/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTEmptyContentPlaceholder, DVTSplitView, IDEIntentBuilderComponentStackView, NSString, NSView;

@interface IDEIntentBuilderEditorIntentResponseCodesCapsuleViewController : IDEIntentBuilderEditorIntentResponseCapsuleViewController <NSSplitViewDelegate, NSTableViewDelegate, IDEIntentBuilderComponentStackViewDelegate, IDEIntentBuilderTokenTextFieldComponentViewDataSource>
{
    IDEIntentBuilderComponentStackView *_stackView;
    DVTSplitView *_splitView;
    DVTBorderedView *_sourceListSplitViewPane;
    DVTBorderedView *_contentSplitViewPane;
    DVTBorderedView *_sourceListBorderedView;
    DVTBorderedView *_buttonsBorderedView;
    NSView *_stackContainerView;
    DVTEmptyContentPlaceholder *_placeholderView;
}

- (void).cxx_destruct;
@property(retain) DVTEmptyContentPlaceholder *placeholderView; // @synthesize placeholderView=_placeholderView;
@property __weak NSView *stackContainerView; // @synthesize stackContainerView=_stackContainerView;
@property __weak DVTBorderedView *buttonsBorderedView; // @synthesize buttonsBorderedView=_buttonsBorderedView;
@property __weak DVTBorderedView *sourceListBorderedView; // @synthesize sourceListBorderedView=_sourceListBorderedView;
@property __weak DVTBorderedView *contentSplitViewPane; // @synthesize contentSplitViewPane=_contentSplitViewPane;
@property __weak DVTBorderedView *sourceListSplitViewPane; // @synthesize sourceListSplitViewPane=_sourceListSplitViewPane;
@property __weak DVTSplitView *splitView; // @synthesize splitView=_splitView;
@property __weak IDEIntentBuilderComponentStackView *stackView; // @synthesize stackView=_stackView;
- (void)componentStackViewBoundsDidChange:(id)arg1;
- (id)availableTokensForTokenTextFieldComponentView:(id)arg1;
- (id)_componentViewsForCode:(id)arg1;
- (id)_componentViewWithIdentifier:(id)arg1;
- (void)_reloadData;
- (void)_reloadDataOnNextRunLoop;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)primitiveInvalidate;
- (void)loadView;
- (double)verticalContentMargin;
- (unsigned long long)minimumNumberOfRows;
- (void)delete:(id)arg1;
- (void)selectionChanged;
- (void)selectionDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

