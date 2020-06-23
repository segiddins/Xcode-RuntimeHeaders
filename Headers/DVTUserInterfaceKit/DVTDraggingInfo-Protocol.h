//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/NSDraggingInfo-Protocol.h>

@class DVTDraggedImageState, NSDictionary, NSValue;
@protocol DVTInvalidation;

@protocol DVTDraggingInfo <NSDraggingInfo>
@property(nonatomic) unsigned long long draggingModifierFlags;
@property(retain, nonatomic) NSValue *draggingSnapSuggestedOrigin;
@property(nonatomic) BOOL draggedImageStateNeedsUpdate;
- (void)invalidateObjectAtEndOfDragLoop:(id <DVTInvalidation>)arg1;
- (struct CGPoint)draggingLocationOnScreen;
- (NSDictionary *)draggingSourceContext;
- (DVTDraggedImageState *)draggedImageState;
@end

