//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSImageView.h>

#import <IDEiPhoneSupport/NSDraggingSource-Protocol.h>

@class NSString;
@protocol IDEiPhoneOrganizerDraggableImageViewDelegate;

@interface IDEiPhoneOrganizerDraggableImageView : NSImageView <NSDraggingSource>
{
    id <IDEiPhoneOrganizerDraggableImageViewDelegate> _delegate;
    BOOL _dragging;
}

- (void).cxx_destruct;
@property __weak id <IDEiPhoneOrganizerDraggableImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)menuForEvent:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

