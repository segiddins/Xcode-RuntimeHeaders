//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameToolsFoundation/NSObject-Protocol.h>

@protocol NSDraggingInfo;

@protocol NSDraggingDestination <NSObject>

@optional
- (void)updateDraggingItemsForDrag:(id <NSDraggingInfo>)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id <NSDraggingInfo>)arg1;
- (void)concludeDragOperation:(id <NSDraggingInfo>)arg1;
- (BOOL)performDragOperation:(id <NSDraggingInfo>)arg1;
- (BOOL)prepareForDragOperation:(id <NSDraggingInfo>)arg1;
- (void)draggingExited:(id <NSDraggingInfo>)arg1;
- (unsigned long long)draggingUpdated:(id <NSDraggingInfo>)arg1;
- (unsigned long long)draggingEntered:(id <NSDraggingInfo>)arg1;
@end
