//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBDragAndDropInsertionIndicator, NSArray;

@protocol IBDragAndDropInsertionIndicatorDelegate <NSObject>
- (struct CGRect)dragAndDropInsertionIndicator:(IBDragAndDropInsertionIndicator *)arg1 dragAlignmentRectForRelatedObject:(id)arg2;
- (struct CGRect)dropRectForDragAndDropInsertionIndicator:(IBDragAndDropInsertionIndicator *)arg1;
- (unsigned long long)orderedRelationInsertionEdgeForDragAndDropInsertionIndicator:(IBDragAndDropInsertionIndicator *)arg1;
- (long long)orderedRelationInsertionIndexForDragAndDropInsertionIndicator:(IBDragAndDropInsertionIndicator *)arg1;
- (NSArray *)orderedRelationForDragAndDropInsertionIndicator:(IBDragAndDropInsertionIndicator *)arg1;
@end

