//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocSetViewing/NSOutlineViewDataSource-Protocol.h>

@class DVMainController, DVResultsOutlineView, NSArray, NSMutableArray, NSSortDescriptor, NSString;

@interface DVResultsOutlineViewController : NSObject <NSOutlineViewDataSource>
{
    DVResultsOutlineView *_outlineView;
    DVMainController *_mainController;
    NSMutableArray *m_apiSearchResults;
    BOOL m_showAllAPIResults;
    NSArray *m_textSearchResults;
    BOOL m_showAllTextSearchResults;
    NSArray *m_titleSearchResults;
    BOOL m_showAllTitleResults;
    NSArray *m_xCodeUserGuideFullTextResults;
    NSArray *m_cachedQueryCategories;
    NSSortDescriptor *m_tokenNameSortDescriptor;
    NSSortDescriptor *m_tokenScopeSortDescriptor;
    NSSortDescriptor *m_tokenTypeSortDescriptor;
    unsigned long long m_availableRowsForOutlineHeight;
    unsigned long long m_defaultResultsPerCategory;
    unsigned long long m_countOfDisplayedAPIResults;
    unsigned long long m_countOfDisplayedTitleResults;
    unsigned long long m_countOfDisplayedTextResults;
    unsigned long long m_resultCategoriesBeyondVisibleThreshold;
    double _preferredResultsListFontSize;
}

@property(nonatomic) unsigned long long resultCategoriesBeyondVisibleThreshold; // @synthesize resultCategoriesBeyondVisibleThreshold=m_resultCategoriesBeyondVisibleThreshold;
@property(nonatomic) unsigned long long countOfDisplayedTextResults; // @synthesize countOfDisplayedTextResults=m_countOfDisplayedTextResults;
@property(nonatomic) unsigned long long countOfDisplayedTitleResults; // @synthesize countOfDisplayedTitleResults=m_countOfDisplayedTitleResults;
@property(nonatomic) unsigned long long countOfDisplayedAPIResults; // @synthesize countOfDisplayedAPIResults=m_countOfDisplayedAPIResults;
@property(nonatomic) unsigned long long defaultResultsPerCategory; // @synthesize defaultResultsPerCategory=m_defaultResultsPerCategory;
@property(nonatomic) unsigned long long availableRowsForOutlineHeight; // @synthesize availableRowsForOutlineHeight=m_availableRowsForOutlineHeight;
@property(retain, nonatomic) NSSortDescriptor *tokenTypeSortDescriptor; // @synthesize tokenTypeSortDescriptor=m_tokenTypeSortDescriptor;
@property(retain, nonatomic) NSSortDescriptor *tokenScopeSortDescriptor; // @synthesize tokenScopeSortDescriptor=m_tokenScopeSortDescriptor;
@property(retain, nonatomic) NSSortDescriptor *tokenNameSortDescriptor; // @synthesize tokenNameSortDescriptor=m_tokenNameSortDescriptor;
@property(retain, nonatomic) NSArray *xCodeUserGuideFullTextResults; // @synthesize xCodeUserGuideFullTextResults=m_xCodeUserGuideFullTextResults;
@property(retain, nonatomic) NSArray *cachedQueryCategories; // @synthesize cachedQueryCategories=m_cachedQueryCategories;
@property(nonatomic) BOOL showAllTitleResults; // @synthesize showAllTitleResults=m_showAllTitleResults;
@property(nonatomic) BOOL showAllTextSearchResults; // @synthesize showAllTextSearchResults=m_showAllTextSearchResults;
@property(retain, nonatomic) NSArray *titleSearchResults; // @synthesize titleSearchResults=m_titleSearchResults;
@property(retain, nonatomic) NSArray *textSearchResults; // @synthesize textSearchResults=m_textSearchResults;
@property(nonatomic) BOOL showAllAPIResults; // @synthesize showAllAPIResults=m_showAllAPIResults;
@property(retain, nonatomic) NSMutableArray *apiSearchResults; // @synthesize apiSearchResults=m_apiSearchResults;
- (void)sortTokens:(id)arg1;
- (id)preferredTokenSortDescriptor;
- (id)tokenSortDescriptors;
- (id)tokenSortDescriptorForKey:(id)arg1;
- (void)resetButtonCache;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)clickInShowMoreLessRow:(id)arg1;
- (void)toggleNumberOfResultsShown:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)attributedStringForResult:(id)arg1 extendedDescription:(BOOL)arg2;
- (BOOL)_isTokenDeprecated:(id)arg1;
- (id)_tokenScopeAttributedString:(id)arg1 separateLine:(BOOL)arg2 color:(id)arg3;
- (BOOL)_showMoreOrLessResultsCellForItem:(id)arg1 inOutlineView:(id)arg2 showMore:(char *)arg3;
- (id)queryCategoryForItem:(id)arg1;
- (id)_imageForToken:(id)arg1;
- (long long)queriesOutlineViewNumberOfChildrenOfItem:(id)arg1 totalItemsForChild:(id *)arg2;
- (long long)_limitedChildCountForResultArray:(id)arg1 showAllResults:(BOOL)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)queriesOutlineViewChild:(long long)arg1 ofItem:(id)arg2;
- (id)queryCategoriesWithResults;
- (unsigned long long)countOfQueryCategoriesWithResultsBeyondVisibleThreshold;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)_imageForNodeOrTextResult:(id)arg1;
- (id)_imageForNode:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)itemIsSearchResult:(id)arg1;
- (BOOL)itemIsQueryCategory:(id)arg1;
- (id)queryCategories;
- (BOOL)isOneOrMoreResultsCategoriesExpanded;
- (BOOL)isShowingAllResultsForDVQueryType:(id)arg1;
- (BOOL)categoryResultsAreVisible:(id)arg1;
- (long long)rowIndexOfAPIResultsCategory;
- (long long)rowIndexOfFullTextResultsCategory;
- (void)calculateVisibleRows;
- (void)appendToAPISearchResults:(id)arg1;
@property(readonly, nonatomic) BOOL hasSearchResults;
- (double)preferredResultsListFontSize;
- (void)resetSearchResultCollections;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

