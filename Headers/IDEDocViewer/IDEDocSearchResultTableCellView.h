//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class DVTFilterMatchFormatter, NSArray, NSBox, NSColor, NSTextField, _TtC12IDEDocViewer33IDESearchResultHighlightFormatter;

@interface IDEDocSearchResultTableCellView : NSTableCellView
{
    DVTFilterMatchFormatter *_formatter;
    NSColor *_defaultOwnerColor;
    NSColor *_defaultAbstractColor;
    NSColor *_defaultCollectionNameColor;
    NSColor *_defaultCollectionBoxColor;
    NSTextField *_ownerNameTextField;
    NSTextField *_collectionNamesField;
    NSBox *_collectionNamesBox;
    NSTextField *_abstractTextField;
    _TtC12IDEDocViewer33IDESearchResultHighlightFormatter *_abstractTextFieldFormatter;
}

@property(retain) _TtC12IDEDocViewer33IDESearchResultHighlightFormatter *abstractTextFieldFormatter; // @synthesize abstractTextFieldFormatter=_abstractTextFieldFormatter;
@property(retain) NSTextField *abstractTextField; // @synthesize abstractTextField=_abstractTextField;
@property(retain) NSBox *collectionNamesBox; // @synthesize collectionNamesBox=_collectionNamesBox;
@property(retain) NSTextField *collectionNamesField; // @synthesize collectionNamesField=_collectionNamesField;
@property(retain) NSTextField *ownerNameTextField; // @synthesize ownerNameTextField=_ownerNameTextField;
- (void).cxx_destruct;
- (BOOL)_isSelected;
- (void)_updateColors;
- (void)_update;
- (void)viewDidChangeEffectiveAppearance;
- (void)setBackgroundStyle:(long long)arg1;
@property(retain, nonatomic) NSArray *searchStrings;
- (void)awakeFromNib;
- (void)configureWithSearchResult:(id)arg1 query:(id)arg2 isTopHitSearchResultItem:(BOOL)arg3;

@end

