//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (IBAutolayoutObjectIntegration)
- (id)ibDocumentSubtreeDescriptionWithLayoutInfo:(id)arg1 startingIndentation:(id)arg2 withAdditionalDescriptionsBlock:(CDUnknownBlockType)arg3;
- (id)ibSubtreeDescriptionWithLayoutInfo:(id)arg1 withIteratorBlock:(CDUnknownBlockType)arg2 startingIndentation:(id)arg3 andAdditionalDescriptionsBlock:(CDUnknownBlockType)arg4;
- (void)ibRecursivelyAddSubtreeDescriptionToString:(id)arg1 indentation:(id)arg2 layoutInfo:(id)arg3 withIteratorBlock:(CDUnknownBlockType)arg4 andAdditionalDescriptionsBlock:(CDUnknownBlockType)arg5;
- (id)ibDefaultSubtreeDescription;
- (id)ibShortDescription;
- (id)ibExplicitCandidateConstraintGenerationMaskForChildView:(id)arg1;
- (void)ibWillArbitrateInArbitrationUnit:(id)arg1;
- (void)ibWillArbitrateChild:(id)arg1 inArbitrationUnit:(id)arg2;
- (void)ibPropagatePropertiesToCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)ibDidMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (void)ibMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (id)ibTopLevelViewForLayoutEngine:(id)arg1;
- (BOOL)ibIsValidConstraintItem;
@end

