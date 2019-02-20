//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBNSViewControllerEditorViewContainer-Protocol.h>

@class IBNSViewController, NSString, NSView;

@interface IBNSViewControllerEditorView : DVTLayoutView_ML <IBNSViewControllerEditorViewContainer>
{
    IBNSViewController *_editedViewController;
    NSView *_contentView;
}

@property(readonly) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) IBNSViewController *editedViewController; // @synthesize editedViewController=_editedViewController;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (BOOL)isOpaque;
- (void)viewDidChangeForViewController:(id)arg1;
- (void)_updateContentView:(id)arg1;
- (id)_placeHolderView;
- (void)invalidateEditorView;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
