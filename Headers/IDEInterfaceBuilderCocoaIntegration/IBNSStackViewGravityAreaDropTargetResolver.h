//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSViewDropTargetResolver.h>

@interface IBNSStackViewGravityAreaDropTargetResolver : IBNSViewDropTargetResolver
{
    long long _dropGravity;
    long long _insertionIndex;
}

@property(nonatomic) long long insertionIndex; // @synthesize insertionIndex=_insertionIndex;
@property(nonatomic) long long dropGravity; // @synthesize dropGravity=_dropGravity;
- (struct CGRect)dropRectForDragAndDropInsertionIndicator:(id)arg1;
- (unsigned long long)orderedRelationInsertionEdgeForDragAndDropInsertionIndicator:(id)arg1;
- (id)orderedRelationForDragAndDropInsertionIndicator:(id)arg1;
- (long long)orderedRelationInsertionIndexForDragAndDropInsertionIndicator:(id)arg1;
- (void)failToAcceptDragInfo:(id)arg1;
- (void)finishAcceptingDragInfo:(id)arg1;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (long long)dropGravityForPoint:(struct CGPoint)arg1;
- (long long)insertionIndexForPoint:(struct CGPoint)arg1;
- (id)editedStackView;

@end

