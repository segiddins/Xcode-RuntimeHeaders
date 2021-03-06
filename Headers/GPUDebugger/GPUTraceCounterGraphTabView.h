//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <GPUDebugger/NSMenuDelegate-Protocol.h>

@class NSArray, NSButton, NSMenu, NSMenuItem, NSMutableArray, NSString;
@protocol GPUTraceCounterGraphTabViewDelegate;

__attribute__((visibility("hidden")))
@interface GPUTraceCounterGraphTabView : NSView <NSMenuDelegate>
{
    NSMutableArray *_buttons;
    NSMenu *_clippedItemsMenu;
    NSMenu *_contextMenu;
    NSMenuItem *_contextMenuRemoveItem;
    NSMenuItem *_contextMenuRenameItem;
    NSButton *_moreButton;
    unsigned long long _currentClippedMenuItemTag;
    double _paddingBetweenButtons;
    id <GPUTraceCounterGraphTabViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GPUTraceCounterGraphTabViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double paddingBetweenButtons; // @synthesize paddingBetweenButtons=_paddingBetweenButtons;
@property(readonly, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void)menuDidClose:(id)arg1;
- (void)_buildContextMenu;
- (void)_clippedMenuItemClicked:(id)arg1;
- (void)_rightClipIndicatorClicked:(id)arg1;
- (void)_removeButtonClicked:(id)arg1;
- (void)_renameButtonClicked:(id)arg1;
- (void)_buttonClicked:(id)arg1;
- (id)_clippedMenuItems;
- (id)_counterGroupButton:(id)arg1 tag:(long long)arg2;
- (id)_rightClipIndicatorButton;
- (void)setSelectedButton:(unsigned long long)arg1;
- (void)_layoutButtons;
- (void)_resetClippedButtons;
- (struct CGRect)_constrainProposedButtonFrame:(struct CGRect)arg1;
- (double)minButtonX;
- (double)maxButtonX;
- (double)maxButtonXWithoutClipIndicator;
- (double)maxButtonXWithClipIndicator;
- (unsigned long long)addButton:(id)arg1 tag:(long long)arg2;
- (unsigned long long)removeButton:(unsigned long long)arg1;
- (void)removeAll;
- (void)_viewFrameHasChanged;
- (void)_setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

