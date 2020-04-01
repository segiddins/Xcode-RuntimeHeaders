//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderKit/NSAccessibilityGroup-Protocol.h>

@class NSButton, NSColor, NSString, NSTextField, NSView;
@protocol IBViewDragDelegate;

@interface IBICDetailPlaceholderView : DVTLayoutView_ML <NSAccessibilityGroup>
{
    NSTextField *_textField;
    NSButton *_actionButton;
    id <IBViewDragDelegate> _delegate;
    NSView *_overlayView;
    NSColor *_backgroundColor;
    NSString *_actionText;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak id <IBViewDragDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)layoutTopDown;
- (id)effectiveAttributedActionText;
@property(retain, nonatomic) id target;
@property(nonatomic) SEL action;
@property(copy, nonatomic) NSString *placeholderString;
- (void)layoutBottomUp;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

