//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

@class NSImageView, NSTextField, NSToolbarItem, NSView;
@protocol DVTInvalidation;

@interface IBToolbarItemView : DVTLayoutView_ML
{
    id <DVTInvalidation> _frameSizeToken;
    id <DVTInvalidation> _frameOriginToken;
    id <DVTInvalidation> _paletteLabelToken;
    id <DVTInvalidation> _labelToken;
    id <DVTInvalidation> _imageToken;
    NSView *_contentView;
    BOOL _useLabelInsteadOfPaletteLabel;
    BOOL _showsLabel;
    NSImageView *_imageView;
    NSToolbarItem *_item;
    NSTextField *_textField;
}

@property(nonatomic) BOOL showsLabel; // @synthesize showsLabel=_showsLabel;
@property(retain) NSTextField *textField; // @synthesize textField=_textField;
@property(readonly) NSToolbarItem *item; // @synthesize item=_item;
@property(retain) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) BOOL useLabelInsteadOfPaletteLabel; // @synthesize useLabelInsteadOfPaletteLabel=_useLabelInsteadOfPaletteLabel;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) struct CGRect titleRect;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGSize)labelSize;
- (struct CGSize)contentSize;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)isViewItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithToolbarItem:(id)arg1;

@end

