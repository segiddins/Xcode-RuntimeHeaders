//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTObservingToken, DVTTimeSlicedMainThreadWorkQueue, GPUFilterTokenPredicate, IDEDebugNavigator, NSSet;

__attribute__((visibility("hidden")))
@interface GPUNavigableItemFilteringCoordinator : NSObject
{
    DVTTimeSlicedMainThreadWorkQueue *_itemsToFilterQueue;
    DVTObservingToken *_observingToken;
    IDEDebugNavigator *_debugNavigator;
    NSSet *_preFilterExpandedItemTokens;
    unsigned long long _filterState;
    GPUFilterTokenPredicate *_filterPredicate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GPUFilterTokenPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(readonly, nonatomic) unsigned long long filterState; // @synthesize filterState=_filterState;
- (void)_recursivelyExpandItem:(id)arg1;
- (void)stopFiltering:(id)arg1;
- (void)startFiltering:(id)arg1 withFilterPredicate:(id)arg2 andCompletionBlock:(CDUnknownBlockType)arg3;
- (void)savePreFilteredState;
- (void)dealloc;
- (id)initWithDebugNavigator:(id)arg1;

@end

