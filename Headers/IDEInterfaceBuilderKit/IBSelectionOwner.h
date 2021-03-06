//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTMutableOrderedSet, NSSet;
@protocol IBSelectionOwnerDelegate;

@interface IBSelectionOwner : NSObject
{
    DVTMutableOrderedSet *_selection;
    DVTMutableOrderedSet *_cachedSelectionCopy;
    id <IBSelectionOwnerDelegate> _delegate;
}

+ (BOOL)eventWouldToggleSelection:(id)arg1;
+ (BOOL)eventWouldExtendSelection:(id)arg1;
- (void).cxx_destruct;
@property __weak id <IBSelectionOwnerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)firstSelectedObject;
- (id)lastSelectedObject;
@property(readonly) NSSet *selection;
@property(readonly) long long numberOfSelectedObjects;
- (void)clearSelection;
- (void)deselectObject:(id)arg1;
- (void)deselectObjects:(id)arg1;
- (void)selectObject:(id)arg1 withEvent:(id)arg2;
- (void)selectObject:(id)arg1 byExtending:(BOOL)arg2 andToggling:(BOOL)arg3;
- (void)selectObjects:(id)arg1 withEvent:(id)arg2;
- (void)setSelectedObjects:(id)arg1;
- (void)setSelectedObject:(id)arg1;
- (void)updateSelectionWithArrowMovement:(id)arg1 candidateLists:(id)arg2 anchor:(id *)arg3;
- (void)updateSelectionWithBandIntersectingObjects:(id)arg1 withEvent:(id)arg2 initialSelection:(id)arg3;
- (void)selectObjects:(id)arg1 byExtending:(BOOL)arg2 andToggling:(BOOL)arg3;
- (void)primitiveUpdateSelection:(id)arg1;
- (void)didSelect:(id)arg1 andDeselect:(id)arg2;
- (void)willSelect:(id)arg1 andDeselect:(id)arg2;
- (BOOL)selectionContainsObject:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

