//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTClickableLayer.h>

#import <IDEKit/IDEActivityThemeableLayer-Protocol.h>

@class CALayer, DVTTextLayer, NSAttributedString, NSImage, NSString;

@interface IDEActivityStatusCategoryLayer : DVTClickableLayer <IDEActivityThemeableLayer>
{
    NSAttributedString *_cachedAttributedCountString;
    DVTTextLayer *_textLayer;
    CALayer *_imageLayer;
    BOOL _isActiveWindowStyle;
    NSImage *_image;
    NSString *_statusTypeDisplayName;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy) NSString *statusTypeDisplayName; // @synthesize statusTypeDisplayName=_statusTypeDisplayName;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
@property BOOL isActiveWindowStyle; // @synthesize isActiveWindowStyle=_isActiveWindowStyle;
- (void)updateTheme;
- (void)updateImageForActiveWindowState;
@property(retain) NSImage *image; // @synthesize image=_image;
- (void)sizeToFit;
- (double)_textLayerVerticalOffset;
- (void)layoutSublayers;
- (void)invalidateCachedAttributedCountString;
- (id)attributedCountString;
- (id)textAttributes;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

