//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTGraphKit/DTTimelineGraphLayerSubtree.h>

@class DTTimelineGraphPlaneLabelLayer, NSColor, NSString;

__attribute__((visibility("hidden")))
@interface DTTimelinePlaneLabelSubtree : DTTimelineGraphLayerSubtree
{
    NSString *_displayName;
    NSColor *_defaultTextColor;
    NSColor *_correctTextColor;
    unsigned long long _options;
    struct CGSize _displayNameTextSize;
    DTTimelineGraphPlaneLabelLayer *_displayNameLayer;
    BOOL _selected;
    BOOL _mouseHoveringOverLabel;
}

+ (BOOL)shouldAlignInstancesVertically;
@property(nonatomic) BOOL mouseHoveringOverLabel; // @synthesize mouseHoveringOverLabel=_mouseHoveringOverLabel;
@property(readonly, nonatomic) BOOL selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (BOOL)getClickableGlyphFrameWithinRoot:(struct CGRect *)arg1;
- (void)layoutDisplayNameLayer:(id)arg1;
- (void)layoutSublayers;
- (void)adjustToGraph:(id)arg1;
- (void)setSelected:(BOOL)arg1 graph:(id)arg2;
- (id)initWithRootLayer:(id)arg1 owner:(BOOL)arg2;
- (id)init;
- (id)initWithDisplayName:(id)arg1 textColor:(id)arg2 options:(unsigned long long)arg3;

@end

