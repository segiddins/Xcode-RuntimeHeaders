//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSFont, NSImage, NSString;

@interface IBConnectionPopUpMenuItemView : NSView
{
    BOOL _highlighted;
    BOOL _selected;
    BOOL _drawsRoundedBackground;
    NSString *_title;
    NSFont *_font;
    NSColor *_textColor;
    NSColor *_backgroundColor;
    NSColor *_highlightedTextColor;
    NSColor *_highlightedBackgroundColor;
    NSImage *_image;
    NSImage *_selectionImage;
    long long _indent;
    unsigned long long _lineBreakMode;
    long long _textAlignment;
    struct CGSize _imageSize;
}

+ (id)separatorItem;
@property(nonatomic) BOOL drawsRoundedBackground; // @synthesize drawsRoundedBackground=_drawsRoundedBackground;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) unsigned long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) long long indent; // @synthesize indent=_indent;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSImage *selectionImage; // @synthesize selectionImage=_selectionImage;
@property(copy, nonatomic) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(copy, nonatomic) NSColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)effectiveMaskedImage;
- (id)attributedTitle;
- (id)titleAttributes;
- (id)titleParagraphStyle;
- (id)effectiveBackgroundColor;
- (id)effectiveTextColor;
- (struct CGRect)imageRect;
- (struct CGRect)titleRect;
- (struct CGSize)idealSize;
- (struct CGSize)titleSize;
- (id)effectiveImage;
- (BOOL)accessibilityIsIgnored;
- (id)initWithTitle:(id)arg1;

@end

