//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTMemoryGraphItem.h>

@class NSMutableArray, NSString;

@interface DTMutableMemoryGraphItem : DTMemoryGraphItem
{
    NSString *_name;
    NSMutableArray *_items;
    NSMutableArray *_filteredItems;
    CDUnknownBlockType _filterBlock;
    NSString *_filterString;
    unsigned long long _instanceFilter;
    unsigned long long _intrinsic;
}

+ (id)itemForNode:(unsigned int)arg1 inGraph:(id)arg2;
- (void).cxx_destruct;
- (void)_setFilter:(CDUnknownBlockType)arg1 string:(id)arg2 instanceFilter:(unsigned long long)arg3;
- (void)_refilterItems;
- (id)subitemAtIndex:(unsigned long long)arg1;
- (id)subitems;
- (unsigned long long)subitemCount;
- (unsigned long long)leakedCount;
@property(nonatomic) unsigned long long count;
- (id)name;
- (void)sortWithComparator:(CDUnknownBlockType)arg1;
- (void)addItem:(id)arg1;
- (id)initWithName:(id)arg1 count:(unsigned long long)arg2 graphIndex:(id)arg3;

@end
