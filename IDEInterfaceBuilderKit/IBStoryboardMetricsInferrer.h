//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBSimulatedMetricsInferrer.h>

@class DVTMutableOrderedSet, IBStoryboardDocument;

@interface IBStoryboardMetricsInferrer : IBSimulatedMetricsInferrer
{
    DVTMutableOrderedSet *_selectedOrPreviouslySelectedMembersFromOldToFresh;
    DVTMutableOrderedSet *_tieBreakersFromOldToNew;
}

@property(retain, nonatomic) DVTMutableOrderedSet *tieBreakersFromOldToNew; // @synthesize tieBreakersFromOldToNew=_tieBreakersFromOldToNew;
@property(copy, nonatomic) DVTMutableOrderedSet *selectedOrPreviouslySelectedMembersFromOldToFresh; // @synthesize selectedOrPreviouslySelectedMembersFromOldToFresh=_selectedOrPreviouslySelectedMembersFromOldToFresh;
- (void).cxx_destruct;
- (void)rebuildInferredMetrics;
- (id)globallyInheritedSimulatedMetrics;
- (void)recursivelyApplyMetricsInheritenceToController:(id)arg1 visited:(id)arg2 tieBreakers:(id)arg3;
- (id)disconnectedSubgraphsOfScenes:(id)arg1 usingTieBreakers:(id)arg2;
- (void)findInheritanceProvidingControllersStartingAtController:(id)arg1 connectedSubgraph:(id)arg2 mutableTieBreakers:(id)arg3 visited:(id)arg4;
- (id)downstreamInheritanceProvidingControllersForController:(id)arg1 usingTieBreakers:(id)arg2;
- (id)upstreamInheritanceProvidingControllersForController:(id)arg1 usingTieBreakers:(id)arg2;
- (BOOL)doesSegueConferInheritance:(id)arg1 mutableTieBreakers:(id)arg2;
- (id)tieBreakerForIncomingSegues:(id)arg1;
- (void)didRemoveSegue:(id)arg1;
- (void)didAddSegue:(id)arg1;
- (void)noteMember:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)documentDidUnarchiveWithTieBreakersFromOldToNew:(id)arg1;
@property(readonly, nonatomic) IBStoryboardDocument *storyboard;

@end

