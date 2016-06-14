//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewDropTargetResolver.h>

@interface IBUIStackViewDropTargetResolver : IBUIViewDropTargetResolver
{
    long long _insertionIndex;
}

@property(nonatomic) long long insertionIndex; // @synthesize insertionIndex=_insertionIndex;
- (struct CGRect)dropRectForDragAndDropInsertionIndicator:(id)arg1;
- (unsigned long long)orderedRelationInsertionEdgeForDragAndDropInsertionIndicator:(id)arg1;
- (id)orderedRelationForDragAndDropInsertionIndicator:(id)arg1;
- (long long)orderedRelationInsertionIndexForDragAndDropInsertionIndicator:(id)arg1;
- (void)failToAcceptDragInfo:(id)arg1;
- (void)finishAcceptingDragInfo:(id)arg1;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (id)chooseDestinationForDragInfo:(id)arg1;
- (long long)insertionIndexForPoint:(struct CGPoint)arg1;
- (id)editedStackView;
- (id)initWithEditedObject:(id)arg1 parent:(id)arg2 frameController:(id)arg3;

@end

