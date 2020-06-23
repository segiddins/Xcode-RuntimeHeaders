//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import <DVTUserInterfaceKit/NSTableViewDataSource-Protocol.h>
#import <DVTUserInterfaceKit/NSTableViewDelegate-Protocol.h>

@class DVTResourceComboBoxColorSwatchOrImageView, DVTResourceComboBoxFilterTableView, NSButton, NSColor, NSImage, NSLayoutConstraint, NSObject, NSScrollView, NSString, NSWindow;
@protocol DVTResourceComboBoxDataSource;

@interface DVTResourceComboBox : NSTextField <NSTableViewDataSource, NSTableViewDelegate>
{
    NSWindow *_popupWindow;
    NSButton *_popupFilterButton;
    BOOL _hasScheduledReloadData;
    DVTResourceComboBoxColorSwatchOrImageView *_iconView;
    NSLayoutConstraint *_iconViewWidthConstraint;
    NSObject<DVTResourceComboBoxDataSource> *_dataSource;
    double _trailingTextEditAreaInset;
    DVTResourceComboBoxFilterTableView *_popupFilterTableView;
    NSScrollView *_popupFilterScrollView;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSScrollView *popupFilterScrollView; // @synthesize popupFilterScrollView=_popupFilterScrollView;
@property(retain) DVTResourceComboBoxFilterTableView *popupFilterTableView; // @synthesize popupFilterTableView=_popupFilterTableView;
@property(nonatomic) double trailingTextEditAreaInset; // @synthesize trailingTextEditAreaInset=_trailingTextEditAreaInset;
@property __weak NSObject<DVTResourceComboBoxDataSource> *dataSource; // @synthesize dataSource=_dataSource;
- (id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)makePlaceholderCellWithName:(id)arg1;
- (id)makeColorCellWithName:(id)arg1 color:(id)arg2;
- (id)makeImageCellWithName:(id)arg1 image:(id)arg2;
- (id)makeGroupCellWithName:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)invalidateRowFilterDataForFirstTime:(BOOL)arg1;
- (void)handleWindowNotifications:(id)arg1;
- (BOOL)dismissPopup;
- (BOOL)isButtonCellHighlight;
- (void)prepareWindowNotifications:(BOOL)arg1;
- (BOOL)popupIfNeeded;
- (void)refreshPopupWindowHeight;
- (struct CGRect)computePopupWindowScreenRect;
- (double)allowedHeightBelowComboBoxInScreen;
- (double)desiredPopupHeight;
- (void)popupMenu:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (double)popupButtonAlignmentWidth;
- (void)initializePopupFilterButton;
- (void)initializeIcon;
- (void)initializeStyle;
- (void)initializedPopupFilterTableViewAndScrollView;
- (double)displayingIconWidth;
- (BOOL)isDisplayingIcon;
- (id)resourceCell;
- (void)initializeCommon;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)keyUp:(id)arg1;
- (void)forwardKeyEventTablePopupAsKeyDown:(id)arg1;
- (void)dismissPopupAndAcceptSelectedItem;
- (void)refreshIconLayout;
- (void)clearIconRepresentation;
@property(copy, nonatomic) NSColor *iconColorRepresentation;
@property(retain, nonatomic) NSImage *iconImageRepresentation;
- (void)reloadData;
- (void)clickedRowInTableView:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

