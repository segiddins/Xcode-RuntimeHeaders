//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GPUTraceCounterGraphDataStore, NSArray;

@protocol GPUTraceCounterGraphDataStoreObserver
- (void)dataStoreFinishedUpdatingBatchIDFilteredCounters:(GPUTraceCounterGraphDataStore *)arg1;
- (void)dataStoreUpdated:(GPUTraceCounterGraphDataStore *)arg1 updatedIndicies:(NSArray *)arg2;
- (void)dataStoreLoadingData:(GPUTraceCounterGraphDataStore *)arg1;
- (void)dataStoreLoaded:(GPUTraceCounterGraphDataStore *)arg1;
@end
