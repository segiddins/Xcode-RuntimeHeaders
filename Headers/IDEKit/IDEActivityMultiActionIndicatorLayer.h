//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTClickableLayer.h>

#import <IDEKit/IDEActivityThemeableLayer-Protocol.h>

@class DVTTextLayer, NSString;

@interface IDEActivityMultiActionIndicatorLayer : DVTClickableLayer <IDEActivityThemeableLayer>
{
    DVTTextLayer *_textLayer;
    long long _count;
    struct CGRect _savedBounds;
}

+ (id)defaultActionForKey:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long count; // @synthesize count=_count;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)updateTheme;
- (void)_setAnimatedHidden:(BOOL)arg1;
- (void)layoutSublayers;
- (void)sizeToFit;
- (void)setBounds:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1 resizeAnimation:(BOOL)arg2;
- (void)layerShouldShowUnclickedState;
- (void)layerShouldShowClickedState;
- (id)attributedStringValue;
- (id)textAttributes;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

