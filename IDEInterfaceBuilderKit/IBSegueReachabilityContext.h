//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBDocument;

@interface IBSegueReachabilityContext : NSObject
{
    IBDocument *_document;
}

@property(readonly, nonatomic) IBDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)splitViewSideIndexForReachingPrimarySceneObject:(id)arg1 error:(id *)arg2;
- (BOOL)canReachPrimarySceneObjectFromSplitViewDetail:(id)arg1 error:(id *)arg2;
- (BOOL)canReachPrimarySceneObjectFromSplitViewMaster:(id)arg1 error:(id *)arg2;
- (BOOL)_canReachPrimarySceneObject:(id)arg1 fromSplitViewTerminatorType:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)canPushFromPrimarySceneObject:(id)arg1 error:(id *)arg2;
- (id)_errorConstructedFromAnySegueInFlowTerminatingSegueMap:(id)arg1 forPrimarySceneObject:(id)arg2 consequenceString:(id)arg3 expectedTerminatorTypeString:(id)arg4;
- (void)_populateValidTerminatingSceneObjects:(id)arg1 andFlowTerminatingSeguesByDestinationSceneObject:(id)arg2 forTerminatorType:(unsigned long long)arg3 fromSceneObject:(id)arg4;
- (void)_recursivePopulateValidTerminatingSceneObjectsToSet:(id)arg1 andAddFlowTerminatingSeguesByDestinationSceneObjectToMap:(id)arg2 forTerminatorType:(unsigned long long)arg3 fromPrimarySceneObject:(id)arg4 reachedBySegue:(id)arg5 reachedSceneObjects:(id)arg6;
- (BOOL)_isPrimarySceneObject:(id)arg1 validTerminatorForType:(unsigned long long)arg2 withPresentingSegue:(id)arg3;
- (id)initWithDocument:(id)arg1;

@end

