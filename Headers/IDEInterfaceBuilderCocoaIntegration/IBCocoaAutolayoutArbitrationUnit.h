//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBIDEAutolayoutArbitrationUnit.h>

@interface IBCocoaAutolayoutArbitrationUnit : IBIDEAutolayoutArbitrationUnit
{
}

- (BOOL)doesChangingPriorityOfConstraint:(id)arg1 to:(double)arg2 preventClippingContentOfView:(id)arg3 inEngine:(id)arg4;
- (id)constraintsAffectingLayoutOfView:(id)arg1 forOrientations:(unsigned long long)arg2 inEngine:(id)arg3;
- (id)computeStatusFromEngine:(id)arg1;
- (id)computeViewToLayoutFramesFromEngine:(id)arg1;
- (id)runArbitrationWithOptions:(id)arg1;
- (void)_ensureRootObjectIsInWindowDuring:(CDUnknownBlockType)arg1;
- (id)document;

@end

