//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GPUFilteringCoordinatorDelegate, OS_dispatch_queue;

@interface GPUFilteringCoordinator : NSObject
{
    BOOL _isFiltering;
    NSObject<OS_dispatch_queue> *_filteringQueue;
    id <GPUFilteringCoordinatorDelegate> _delegate;
    unsigned long long _filteringCount;
    unsigned long long _currentFilteringCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentFilteringCount; // @synthesize currentFilteringCount=_currentFilteringCount;
@property(nonatomic) unsigned long long filteringCount; // @synthesize filteringCount=_filteringCount;
@property(nonatomic) BOOL isFiltering; // @synthesize isFiltering=_isFiltering;
@property(nonatomic) __weak id <GPUFilteringCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *filteringQueue; // @synthesize filteringQueue=_filteringQueue;
- (BOOL)filterSync:(id)arg1;
- (id)filterAsync:(id)arg1;
- (BOOL)_filterWithPredicate:(id)arg1;
- (void)_didBeginFiltering;
- (void)_willBeginFiltering;
- (id)initWithDelegate:(id)arg1;

@end
