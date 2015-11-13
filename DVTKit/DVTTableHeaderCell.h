//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTableHeaderCell.h>

@class NSImage;

@interface DVTTableHeaderCell : NSTableHeaderCell
{
    NSImage *_image;
    struct CGSize _baseImageSize;
    unsigned long long _imageScaling;
    double _layoutHeight;
}

+ (void)initialize;
@property double layoutHeight; // @synthesize layoutHeight=_layoutHeight;
@property unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property struct CGSize baseImageSize; // @synthesize baseImageSize=_baseImageSize;
@property(retain) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)updateBoundTitle;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSize;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGSize)_scaledImageSize:(struct CGSize)arg1 forBounds:(struct CGRect)arg2;
- (struct CGRect)_layoutFrameForCellFrame:(struct CGRect)arg1;
- (id)dvtExtraBindings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;

@end

