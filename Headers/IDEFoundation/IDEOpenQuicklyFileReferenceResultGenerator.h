//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEOpenQuicklyPrototypeBasedResultBlockGenerator.h>

@class DVTFuzzyMatchCandidateBlock;

@interface IDEOpenQuicklyFileReferenceResultGenerator : IDEOpenQuicklyPrototypeBasedResultBlockGenerator
{
    DVTFuzzyMatchCandidateBlock *_workspaceRelativeStyleCandidates;
    BOOL _representsDynamicContent;
}

- (void).cxx_destruct;
@property(readonly) BOOL representsDynamicContent; // @synthesize representsDynamicContent=_representsDynamicContent;
- (id)candidateBlockForQuery:(id)arg1;
- (id)workspaceRelativeStyleCandidates;
- (BOOL)supportsLineNumberMatches;
- (id)resultForPrototype:(id)arg1 candidate:(struct DVTFuzzyMatchCandidate *)arg2 query:(id)arg3 fromIndex:(long long)arg4;
- (id)initWithPrototypes:(id)arg1 candidates:(id)arg2 queryContext:(id)arg3 representsDynamicContent:(BOOL)arg4 consumer:(id)arg5;

@end

