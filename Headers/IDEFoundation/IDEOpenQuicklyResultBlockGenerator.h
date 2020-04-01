//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEOpenQuicklyResultGenerator.h>

@class IDEOpenQuicklyQuery, IDEOpenQuicklyQueryCandidateBlock, NSArray;

@interface IDEOpenQuicklyResultBlockGenerator : IDEOpenQuicklyResultGenerator
{
    long long _previousResultsGeneration;
    IDEOpenQuicklyQuery *_previousResultsQuery;
    NSArray *_previousResults;
    IDEOpenQuicklyQueryCandidateBlock *_previousCandidateBlock;
    IDEOpenQuicklyQueryCandidateBlock *_originalCandidateBlock;
    NSArray *_prototypes;
}

@property(readonly) NSArray *prototypes; // @synthesize prototypes=_prototypes;
- (void).cxx_destruct;
- (void)updateUserInput:(id)arg1 generation:(long long)arg2;
- (void)continueProcessing;
- (id)regenerateResults;
- (id)candidateBlockForQuery:(id)arg1;
- (id)resultForPrototype:(id)arg1 candidate:(struct IDEOpenQuicklyQueryCandidate *)arg2 query:(id)arg3 fromIndex:(long long)arg4;
- (BOOL)supportsLineNumberMatches;
- (void)start;
- (id)initWithPrototypes:(id)arg1 candidates:(id)arg2 queryContext:(id)arg3 consumer:(id)arg4;

@end

