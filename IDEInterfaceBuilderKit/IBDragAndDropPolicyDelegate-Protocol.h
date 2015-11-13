//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBOrderedRelationshipDragAndDropPolicy, NSArray, NSString;

@protocol IBDragAndDropPolicyDelegate <NSObject>
- (void)insertionPolicy:(IBOrderedRelationshipDragAndDropPolicy *)arg1 orderedRelationInsertionIndexDidChange:(long long)arg2;
- (void)insertionPolicy:(IBOrderedRelationshipDragAndDropPolicy *)arg1 orderedRelationInsertionIndexWillChange:(long long)arg2;
- (struct CGRect)insertionPolicy:(IBOrderedRelationshipDragAndDropPolicy *)arg1 confinementRectForRepresentedObject:(id)arg2;
- (struct CGRect)insertionPolicy:(IBOrderedRelationshipDragAndDropPolicy *)arg1 dragAlignmentRectForObject:(id)arg2 relatedToRepresentedObject:(id)arg3;
- (struct CGRect)insertionPolicy:(IBOrderedRelationshipDragAndDropPolicy *)arg1 rectInWindowSpaceForRepresentedObject:(id)arg2;
- (NSArray *)insertionPolicy:(IBOrderedRelationshipDragAndDropPolicy *)arg1 orderedRelationForKeyPath:(NSString *)arg2 representedObject:(id)arg3;
@end

