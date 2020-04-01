//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

#import <DVTUserInterfaceKit/DVTEmptyContentPlaceholderContainer-Protocol.h>
#import <DVTUserInterfaceKit/DVTProgressIndicatorProvidingView-Protocol.h>

@class NSEvent, NSFont, NSIndexSet, NSMapTable, NSMutableSet, NSString, NSTextField;

@interface DVTTableView : NSTableView <DVTProgressIndicatorProvidingView, DVTEmptyContentPlaceholderContainer>
{
    NSTextField *_emptyContentTextField;
    NSMapTable *_progressIndicatorsByItem;
    NSString *_dvtTableRowViewIdentifier;
    NSMutableSet *_dvtTableCellViewOneLineIdentifiers;
    NSMutableSet *_dvtTableCellViewMultiLineIdentifiers;
    BOOL _hasRunEmptyContentPlaceholderLayout;
    struct {
        unsigned int allowsSizingShorterThanClipView:1;
        unsigned int reserved:7;
    } _dvtTVFlags;
    unsigned long long _gridLineStyleBeforeEmptyContentStringShown;
    BOOL _hasContent;
    BOOL _skipGridLinesOnLastRow;
    BOOL _drawsGridLinesForEmptyContent;
    BOOL _emptyContentPlaceholderFollowsFontAndColorTheme;
    NSString *_emptyContentString;
    NSString *_emptyContentSubtitle;
    long long _emptyContentStringStyle;
    NSFont *_emptyContentFont;
    NSIndexSet *_draggedRows;
    NSEvent *_event;
    CDStruct_2b6e6e30 _gridLineInset;
}

@property(retain) NSEvent *event; // @synthesize event=_event;
@property CDStruct_2b6e6e30 gridLineInset; // @synthesize gridLineInset=_gridLineInset;
@property(nonatomic) BOOL emptyContentPlaceholderFollowsFontAndColorTheme; // @synthesize emptyContentPlaceholderFollowsFontAndColorTheme=_emptyContentPlaceholderFollowsFontAndColorTheme;
@property BOOL drawsGridLinesForEmptyContent; // @synthesize drawsGridLinesForEmptyContent=_drawsGridLinesForEmptyContent;
@property BOOL skipGridLinesOnLastRow; // @synthesize skipGridLinesOnLastRow=_skipGridLinesOnLastRow;
@property(copy) NSIndexSet *draggedRows; // @synthesize draggedRows=_draggedRows;
@property(nonatomic) BOOL hasContent; // @synthesize hasContent=_hasContent;
@property(copy, nonatomic) NSFont *emptyContentFont; // @synthesize emptyContentFont=_emptyContentFont;
@property(nonatomic) long long emptyContentStringStyle; // @synthesize emptyContentStringStyle=_emptyContentStringStyle;
@property(copy, nonatomic) NSString *emptyContentSubtitle; // @synthesize emptyContentSubtitle=_emptyContentSubtitle;
@property(copy, nonatomic) NSString *emptyContentString; // @synthesize emptyContentString=_emptyContentString;
- (void).cxx_destruct;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (void)_drawBackgroundForGroupRow:(long long)arg1 clipRect:(struct CGRect)arg2 isButtedUpRow:(BOOL)arg3;
- (id)progressIndicatorForItem:(id)arg1 createIfNecessary:(BOOL)arg2 progressIndicatorStyle:(unsigned long long)arg3;
- (void)concludeDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
@property(nonatomic) BOOL followsFontAndColorTheme;
- (void)willHideEmptyContentString;
- (void)willShowEmptyContentString;
- (void)unhideRowsAtIndexes:(id)arg1 withAnimation:(unsigned long long)arg2;
- (void)hideRowsAtIndexes:(id)arg1 withAnimation:(unsigned long long)arg2;
- (void)moveRowAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)removeRowsAtIndexes:(id)arg1 withAnimation:(unsigned long long)arg2;
- (void)insertRowsAtIndexes:(id)arg1 withAnimation:(unsigned long long)arg2;
- (void)noteNumberOfRowsChanged;
- (void)reloadData;
- (void)_synchronizeHasContentPropertyWithRowCount;
- (void)layout;
- (struct CGSize)_adjustFrameSizeToFitSuperview:(struct CGSize)arg1;
@property BOOL allowsSizingShorterThanClipView;
- (void)_registerNibWithName:(id)arg1 usingIdentifier:(id)arg2;
- (void)disableFinderGroupStyle;
- (void)enableFinderGroupStyle;
- (id)makeViewWithIdentifier:(id)arg1 owner:(id)arg2;
- (void)registerDVTTableRowViewNibUsingIdentifier:(id)arg1;
- (void)registerDVTTableRowViewUsingIdentifier:(id)arg1;
- (void)registerDVTTableCellViewMultiLineNibUsingIdentifier:(id)arg1;
- (void)registerDVTTableCellViewMultiLineUsingIdentifier:(id)arg1;
- (void)registerDVTTableCellViewOneLineNibUsingIdentifier:(id)arg1;
- (void)registerDVTTableCellViewOneLineUsingIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dvt_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

