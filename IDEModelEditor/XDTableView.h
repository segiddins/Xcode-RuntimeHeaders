//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

#import <IDEModelEditor/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSMenu, NSString;

@interface XDTableView : NSTableView <DVTInvalidation>
{
    id _tableColumnProvider;
    NSMenu *_tableHeaderContextMenu;
    BOOL _forwardsScrollWheelToDelegate;
    struct _XDTableViewFlags _xdTVFlags;
}

+ (void)initialize;
@property BOOL forwardsScrollWheelToDelegate; // @synthesize forwardsScrollWheelToDelegate=_forwardsScrollWheelToDelegate;
- (void).cxx_destruct;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (BOOL)becomeFirstResponder;
- (void)keyDown:(id)arg1;
- (void)delete:(id)arg1;
- (void)cut:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_tableHeaderContextMenuItemAction:(id)arg1;
- (void)showAllTableColumns:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)optionClickEditsAnyCell;
- (void)setOpetionClickEditsAnyCell:(BOOL)arg1;
- (BOOL)optionClickCausesEditing;
- (void)setOptionClickCausesEditing:(BOOL)arg1;
- (void)reloadTableColumns;
- (void)_synchronizeTableHeaderContextMenu;
- (id)_tableColumnWithIdentifier:(id)arg1;
- (id)tableColumnWithIdentifier:(id)arg1;
- (id)tableColumnProvider;
- (void)setTableColumnProvider:(id)arg1;
- (void)_tableColumnProviderRemoveTableColumn:(id)arg1;
- (void)_tableColumnProviderAddTableColumn:(id)arg1;
- (id)_tableColumnProviderAllowedTableColumnIdentifers;
- (id)_tableColumnProviderDefaultTableColumnIdentifiers;
- (void)insertTableColumn:(id)arg1 atIndex:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)loadStateFromDictionary:(id)arg1;
- (id)stateDictionary;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

