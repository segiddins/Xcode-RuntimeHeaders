//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UXCollectionViewLayoutInvalidationContext : NSObject
{
    NSMutableDictionary *_invalidatedSupplementaryViews;
    NSArray *_updateItems;
    struct {
        unsigned int invalidateDataSource:1;
        unsigned int invalidateEverything:1;
    } _invalidationContextFlags;
}

- (id)_updateItems;
- (void)_setUpdateItems:(id)arg1;
- (void)_setInvalidateEverything:(BOOL)arg1;
@property(readonly, nonatomic) BOOL invalidateEverything;
- (void)_setInvalidateDataSourceCounts:(BOOL)arg1;
@property(readonly, nonatomic) BOOL invalidateDataSourceCounts;
- (void)_invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (void)_setInvalidatedSupplementaryViews:(id)arg1;
- (id)_invalidatedSupplementaryViews;
- (void)dealloc;

@end

