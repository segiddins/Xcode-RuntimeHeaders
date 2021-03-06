//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DevToolsKit/DTDraggingInfo-Protocol.h>

@class DTDraggedImageState, NSDictionary, NSImage, NSPasteboard, NSString, NSWindow;

@interface DTDraggingContext : NSObject <DTDraggingInfo>
{
    NSWindow *draggingDestinationWindow;
    struct CGPoint draggingLocation;
    struct CGPoint draggedImageLocation;
    NSImage *draggedImage;
    NSPasteboard *draggingPasteboard;
    id draggingSource;
    NSDictionary *draggingSourceContext;
    long long draggingSequenceNumber;
    long long draggingSourceOperationMask;
    DTDraggedImageState *draggedImageState;
    struct CGSize draggingStickiness;
    BOOL draggedImageStateNeedsUpdate;
    long long draggingFormation;
    BOOL animatesToDestination;
    long long numberOfValidItemsForDrop;
}

@property long long numberOfValidItemsForDrop; // @synthesize numberOfValidItemsForDrop;
@property BOOL animatesToDestination; // @synthesize animatesToDestination;
@property long long draggingFormation; // @synthesize draggingFormation;
- (void)enumerateDraggingItemsWithOptions:(unsigned long long)arg1 forView:(id)arg2 classes:(id)arg3 searchOptions:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (struct CGPoint)draggingLocationOnScreen;
- (void)setDraggedImageStateNeedsUpdate:(BOOL)arg1;
- (BOOL)draggedImageStateNeedsUpdate;
- (struct CGSize)draggingStickiness;
- (void)setDraggingStickiness:(struct CGSize)arg1;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)slideDraggedImageTo:(struct CGPoint)arg1;
@property(readonly) long long draggingSequenceNumber;
- (id)draggingSourceContext;
- (void)setDraggingSourceContext:(id)arg1;
- (void)setDraggingSequenceNumber:(long long)arg1;
@property(readonly) id draggingSource;
@property(readonly) NSPasteboard *draggingPasteboard;
@property(readonly) NSImage *draggedImage;
- (void)setDraggedImage:(id)arg1;
@property(readonly) struct CGPoint draggedImageLocation;
- (void)setDraggedImageLocation:(struct CGPoint)arg1;
@property(readonly) struct CGPoint draggingLocation;
- (void)setDraggingLocation:(struct CGPoint)arg1;
- (void)setDraggingSourceOperationMask:(unsigned long long)arg1;
@property(readonly) unsigned long long draggingSourceOperationMask;
- (void)setDraggingDestinationWindow:(id)arg1;
@property(readonly) NSWindow *draggingDestinationWindow;
- (void)setDraggedImageState:(id)arg1;
- (id)draggedImageState;
- (void)dealloc;
- (id)initWithSource:(id)arg1 andPasteboard:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) long long springLoadingHighlight;
@property(readonly) Class superclass;

@end

