//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEActivityStatusCategory.h>

@class NSArray, NSMapTable;

@interface IDEActivityStatusCompositeCategory : IDEActivityStatusCategory
{
    NSMapTable *_subcategoryToObservationTokenMap;
    NSArray *_subcategories;
    IDEActivityStatusCategory *_categoryWithHighestPrecidence;
}

@property(retain) IDEActivityStatusCategory *categoryWithHighestPrecidence; // @synthesize categoryWithHighestPrecidence=_categoryWithHighestPrecidence;
@property(readonly) NSArray *subcategories; // @synthesize subcategories=_subcategories;
- (void).cxx_destruct;
- (void)_teardownSubcategoryObservervations;
- (void)_setupSubcategoryObservations;
- (void)_updateConsolidatedAttributes;
- (void)_subcategoryDidChangeCount:(id)arg1;
- (id)_findCategoryWithHighestPrecedence;
- (void)dealloc;
- (id)initWithCategories:(id)arg1 clickHandler:(CDUnknownBlockType)arg2;

@end

