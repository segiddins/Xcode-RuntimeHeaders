//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@protocol IBUIOverlayViewDelegate;

@interface IBUIOverlayView : NSView
{
    id <IBUIOverlayViewDelegate> _delegate;
}

@property __weak id <IBUIOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

