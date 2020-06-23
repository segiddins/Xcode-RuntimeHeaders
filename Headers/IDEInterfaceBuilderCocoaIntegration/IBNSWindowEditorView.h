//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBWindowContentBorderThicknessTarget-Protocol.h>

@class IBNinePartImage, NSImage, NSShadow, NSString, NSToolbar, NSView, NSWindow;

@interface IBNSWindowEditorView : DVTLayoutView_ML <IBWindowContentBorderThicknessTarget>
{
    NSShadow *_windowShadow;
    NSView *_contentViewContainer;
    NSImage *_cachedWindowImage;
    double _cachedWindowImageScale;
    IBNinePartImage *_cachedShadowImage;
    BOOL _liveResizing;
    int _contentResizingMode;
    NSWindow *_windowToMimic;
    NSView *_contentView;
}

+ (id)windowViewForWindow:(id)arg1 andContentView:(id)arg2;
- (void).cxx_destruct;
@property BOOL liveResizing; // @synthesize liveResizing=_liveResizing;
@property(nonatomic) int contentResizingMode; // @synthesize contentResizingMode=_contentResizingMode;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSWindow *windowToMimic; // @synthesize windowToMimic=_windowToMimic;
- (void)drawRect:(struct CGRect)arg1;
- (void)applyAndInvalidateAppearance;
- (void)effectiveAppearanceDidChange;
- (void)drawEverything;
- (void)renderWindowIntoCurrentContextAtLocation:(struct CGPoint)arg1;
- (void)maskRoundedBottomCorners;
- (void)invalidateCachedWindowImage:(BOOL)arg1 invalidateShadow:(BOOL)arg2;
- (id)borderView;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGSize)windowFrameSizeForSize:(struct CGSize)arg1;
- (struct CGSize)sizeForWindowContentSize:(struct CGSize)arg1;
- (struct CGSize)sizeForWindowFrameSize:(struct CGSize)arg1;
- (struct CGPoint)convertPointToMimickedWindow:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromMimickedWindow:(struct CGPoint)arg1;
- (struct CGSize)convertSizeToMimickedWindow:(struct CGSize)arg1;
- (struct CGSize)convertSizeFromMimickedWindow:(struct CGSize)arg1;
- (struct CGRect)convertRectToMimickedWindow:(struct CGRect)arg1;
- (struct CGRect)convertRectFromMimickedWindow:(struct CGRect)arg1;
- (CDStruct_d2b197d1)convertInsetToMimickedWindow:(CDStruct_d2b197d1)arg1;
- (CDStruct_d2b197d1)convertInsetFromMimickedWindow:(CDStruct_d2b197d1)arg1;
- (id)transformToMimickedWindow;
- (id)transformFromMimickedWindow;
- (void)contentViewFrameDidChange:(id)arg1;
- (CDStruct_d2b197d1)insetToContentView;
- (CDStruct_d2b197d1)insetFromShadowToWindow;
- (struct CGRect)mimickedToolbarFrame;
@property(retain) NSToolbar *toolbar;
- (BOOL)autorecalculatesContentBorderThicknessForEdge:(unsigned long long)arg1;
- (void)setAutorecalculatesContentBorderThickness:(BOOL)arg1 forEdge:(unsigned long long)arg2;
- (double)contentBorderThicknessForEdge:(unsigned long long)arg1;
- (void)setContentBorderThickness:(double)arg1 forEdge:(unsigned long long)arg2;
@property unsigned long long collectionBehavior;
@property long long titleVisibility;
@property BOOL titlebarAppearsTransparent;
@property(copy) NSString *title;
@property BOOL hasShadow;
- (id)windowShadowImage;
- (id)windowShadow;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

