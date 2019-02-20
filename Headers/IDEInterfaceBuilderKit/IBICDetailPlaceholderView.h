//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderKit/NSAccessibilityGroup-Protocol.h>

@class DVTLozengeTextField, IBImageButton, NSColor, NSString, NSView;
@protocol IBViewDragDelegate;

@interface IBICDetailPlaceholderView : DVTLayoutView_ML <NSAccessibilityGroup>
{
    DVTLozengeTextField *_textField;
    IBImageButton *_imageButton;
    BOOL _imagesNeedsUpdate;
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
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutTopDown;
- (id)effectiveAttributedActionText;
- (id)buttonBackgroundImageWithWhite:(double)arg1 actionText:(id)arg2;
@property(retain, nonatomic) id target;
@property(nonatomic) SEL action;
@property(copy, nonatomic) NSString *placeholderString;
- (void)invalidateImage;
- (void)layoutBottomUp;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
