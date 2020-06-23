//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTDisclosureHeaderView.h>

@class CALayer, IDECapsuleView, NSView;

@interface IDECapsuleHeaderView : DVTDisclosureHeaderView
{
    struct CGPoint _lastMouseDownLoc;
    CALayer *_highlightLayer;
    NSView *_capsuleHeaderContentView;
    IDECapsuleView *_capsuleView;
}

- (void).cxx_destruct;
@property IDECapsuleView *capsuleView; // @synthesize capsuleView=_capsuleView;
@property(retain, nonatomic) NSView *capsuleHeaderContentView; // @synthesize capsuleHeaderContentView=_capsuleHeaderContentView;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)defaultCloseButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)_endEditingTitleField;
- (void)_startEditingTitleFieldWithTitle:(id)arg1;
- (void)_updateTitleFrame;
- (double)preferredHeight;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_isRenameEvent:(id)arg1;

@end

