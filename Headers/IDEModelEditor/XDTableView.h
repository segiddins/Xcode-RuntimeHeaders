//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableView.h>

#import <IDEModelEditor/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSMenu, NSString;
@protocol XDTableViewTableColumnProvider;

@interface XDTableView : NSTableView <DVTInvalidation>
{
    id <XDTableViewTableColumnProvider> _tableColumnProvider;
    NSMenu *_tableHeaderContextMenu;
    BOOL _forwardsScrollWheelToDelegate;
    struct _XDTableViewFlags _xdTVFlags;
}

+ (void)initialize;
- (void).cxx_destruct;
@property BOOL forwardsScrollWheelToDelegate; // @synthesize forwardsScrollWheelToDelegate=_forwardsScrollWheelToDelegate;
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
@property BOOL optionClickEditsAnyCell;
@property BOOL optionClickCausesEditing;
- (void)reloadTableColumns;
- (void)_synchronizeTableHeaderContextMenu;
- (id)_tableColumnWithIdentifier:(id)arg1;
- (id)tableColumnWithIdentifier:(id)arg1;
@property id <XDTableViewTableColumnProvider> tableColumnProvider;
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

