//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSLayoutConstraint, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger46GPUShaderDebuggerVariableSnapshotImageCellView : NSTableCellView
{
    // Error parsing type: , name: valueView
    // Error parsing type: , name: maskView
    // Error parsing type: , name: valueViews
    // Error parsing type: , name: maskViews
    // Error parsing type: , name: valueViewWidthConstraint
    // Error parsing type: , name: valueViewHeightConstraint
    // Error parsing type: , name: minValueView
    // Error parsing type: , name: maxValueView
    // Error parsing type: , name: valueViewTrackingArea
    // Error parsing type: , name: maskViewTrackingArea
    // Error parsing type: , name: valuePopover
    // Error parsing type: , name: maskPopover
    // Error parsing type: , name: delegate
    // Error parsing type: , name: scale
    // Error parsing type: , name: session
    // Error parsing type: , name: valuePixelFormat
    // Error parsing type: , name: renderingAttributes
    // Error parsing type: , name: renderingAttributesObserver
    // Error parsing type: , name: renderingAttributesPopover
    // Error parsing type: , name: variableSnapshot
    // Error parsing type: , name: variableSnapshotNode
    // Error parsing type: , name: maskNodes
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)selectThreadWithSender:(id)arg1;
- (void)showRenderingAttributesWithSender:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)resetCursorRects;
- (void)updateTrackingAreas;
- (void)viewWillMoveToSuperview:(id)arg1;
@property(nonatomic, retain) NSTextField *maxValueView; // @synthesize maxValueView;
@property(nonatomic, retain) NSTextField *minValueView; // @synthesize minValueView;
@property(nonatomic, retain) NSLayoutConstraint *valueViewHeightConstraint; // @synthesize valueViewHeightConstraint;
@property(nonatomic, retain) NSLayoutConstraint *valueViewWidthConstraint; // @synthesize valueViewWidthConstraint;
@property(nonatomic, retain) NSView *maskView; // @synthesize maskView;
@property(nonatomic, retain) NSView *valueView; // @synthesize valueView;

@end

