//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCSelection.h>

@class NSArray, PBXProjectDocument;

@interface XCProjectBasedSelection : XCSelection
{
    NSArray *_items;
    NSArray *_itemPaths;
    PBXProjectDocument *_projectDocument;
    BOOL _allItemsValidProjectStructure;
    BOOL _isPathSelectionValidForProjectStructure;
    BOOL _allItemsPermitGrouping;
    BOOL _allItemsPermitUngrouping;
    BOOL _addingGroupIsLegal;
    BOOL _allItemsInvolveBreakpoints;
}

- (BOOL)canBeLocalized;
- (BOOL)isLocalized;
- (BOOL)pathContainsProxy:(id)arg1;
- (BOOL)_isPathSelectionValidForProjectStructure;
- (BOOL)isPathSelectionValidForProjectStructure;
- (BOOL)_allItemsValidProjectStructure;
- (BOOL)allItemsInvolveBreakpoints;
- (BOOL)addingGroupIsLegal;
- (BOOL)allItemsPermitUngrouping;
- (BOOL)allItemsPermitGrouping;
- (BOOL)allItemsValidProjectStructure;
- (id)projectDocument;
- (id)project;
- (id)firstItem;
- (id)itemsIncludingAggregates;
- (id)itemPathsIncludingAggregates;
- (id)items;
- (id)firstPath;
- (id)itemPaths;
- (void)dealloc;
- (id)initWithSource:(id)arg1 projectDocument:(id)arg2 items:(id)arg3 paths:(id)arg4;

@end

