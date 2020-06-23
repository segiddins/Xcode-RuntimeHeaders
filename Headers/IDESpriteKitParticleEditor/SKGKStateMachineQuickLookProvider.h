//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerKit/DBGAbstractQuickLookProvider.h>

@class DBGNSDataForDataValueProvider, DVTObservingToken, SKGKStateMachineQuickLookView;

@interface SKGKStateMachineQuickLookProvider : DBGAbstractQuickLookProvider
{
    BOOL _wasCancelled;
    BOOL _hasDataStateMachineBeenRetrieved;
    DBGNSDataForDataValueProvider *_nsDataForDataValueProvider;
    DVTObservingToken *_nsDataForDataValueProviderObserver;
    SKGKStateMachineQuickLookView *_stateMachineView;
    int _loadedState;
}

- (void).cxx_destruct;
- (void)setLoadedState:(int)arg1;
- (int)loadedState;
- (void)cancelLoading;
- (void)_updateOnMainThread:(id)arg1;
- (void)_retrieveData;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

@end

