//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IBICAbstractCatalogDocument, IBICAbstractCatalogItem, IBICSlot, NSArray, NSString;

@protocol IBICAssetWithSlottedChildrenDisplayAdditions_ONLY
- (IBICAbstractCatalogItem *)mutateByAddingNewChildForSlot:(IBICSlot *)arg1 inDocument:(IBICAbstractCatalogDocument *)arg2;
- (IBICAbstractCatalogItem *)mutateByAddingCopyOfChild:(IBICAbstractCatalogItem *)arg1 usingSlot:(IBICSlot *)arg2 inDocument:(IBICAbstractCatalogDocument *)arg3;
- (void)setIbInspectedLanguageDirection:(NSString *)arg1;
- (NSString *)ibInspectedLanguageDirection;
- (NSArray *)ibDefaultSuggestionSetsToPopulateEmptyChildren;
- (void)setIbInspectedColorSpace:(NSString *)arg1;
- (NSString *)ibInspectedColorSpace;
@end
