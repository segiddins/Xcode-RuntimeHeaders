//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSMutableArray, NSView;

@interface PBXControlScrollView : NSScrollView
{
    NSMutableArray *_viewPositions[4];
    NSView *_newCornerView;
    BOOL _justifyDocumentWidth;
    BOOL _reflectScrolledClipViewDisabled;
}

- (void)reflectScrolledClipView:(id)arg1;
- (BOOL)reflectScrolledClipViewEnabled;
- (void)setReflectScrolledClipViewEnabled:(BOOL)arg1;
- (BOOL)_fixHeaderAndCornerViews;
- (void)_tileLowerRightCornerView;
- (void)_tileHorizontalViews;
- (void)_tileVerticalViews;
- (void)setJustifyDocumentWidth:(BOOL)arg1;
- (void)setLowerRightCorner:(id)arg1;
- (void)tile;
- (void)removeAllControls;
- (void)removeSubview:(id)arg1;
- (void)addSubview:(id)arg1 atPosition:(int)arg2;
- (void)dealloc;
- (void)_setupControlScrollView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

