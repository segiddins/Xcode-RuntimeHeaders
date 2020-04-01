//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class IDEStackFrame, NSImageView, NSTextField, NSTrackingArea, NSView;
@protocol DBGBacktraceInspectorFrameViewControllerDelegate;

@interface DBGBacktraceInspectorFrameViewController : DVTViewController
{
    NSTrackingArea *_rolloverTrackingArea;
    BOOL _mouseIsOver;
    IDEStackFrame *_stackFrameModel;
    id <DBGBacktraceInspectorFrameViewControllerDelegate> _delegate;
    NSTextField *_frameDisplayNameField;
    NSImageView *_frameIconImageView;
    NSView *_jumpButtonContainerView;
}

@property(nonatomic) __weak NSView *jumpButtonContainerView; // @synthesize jumpButtonContainerView=_jumpButtonContainerView;
@property(nonatomic) __weak NSImageView *frameIconImageView; // @synthesize frameIconImageView=_frameIconImageView;
@property(nonatomic) __weak NSTextField *frameDisplayNameField; // @synthesize frameDisplayNameField=_frameDisplayNameField;
@property(nonatomic) BOOL mouseIsOver; // @synthesize mouseIsOver=_mouseIsOver;
@property(nonatomic) __weak id <DBGBacktraceInspectorFrameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_updateTextAndImageFields;
- (id)_frameIcon;
- (id)_colorForTextField;
- (void)navigateToFrame:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)loadView;
@property(retain, nonatomic) IDEStackFrame *stackFrameModel; // @synthesize stackFrameModel=_stackFrameModel;

@end

