//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEIndexGeniusResultsFinder.h>

@interface IDEMultiStepIndexGeniusResultsFinder : IDEIndexGeniusResultsFinder
{
}

- (void)_updateResultsWithMostRecentFetch:(CDUnknownBlockType)arg1;
- (void)_updateGeniusResultsWithMostRecentFetch:(CDUnknownBlockType)arg1;
- (BOOL)_fetchResultsFromIndex:(id)arg1 oldResults:(id)arg2 isCancelledCallback:(CDUnknownBlockType)arg3;
- (BOOL)_fetchResultsFromIndex:(id)arg1 oldResults:(id)arg2 cancellationChecker:(CDUnknownBlockType)arg3;
- (BOOL)_shouldFetchResultsFromIndex:(CDUnknownBlockType)arg1;
- (BOOL)_shouldResultsFinderQueryIndex:(CDUnknownBlockType)arg1;
- (BOOL)_getUpdateGeniusResultsPhase1Block:(CDUnknownBlockType *)arg1 phase2Block:(CDUnknownBlockType *)arg2 phase3Block:(CDUnknownBlockType *)arg3;

@end

