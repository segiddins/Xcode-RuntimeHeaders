//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebugger/GPUTimelineGraphTheme-Protocol.h>

@class NSColor, NSFont, NSMutableParagraphStyle, NSString;

@interface GPUTimelineGraphDefaultTheme : NSObject <GPUTimelineGraphTheme>
{
    float _dividerLineAlpha;
}

+ (id)defaultTheme;
@property(readonly, nonatomic) NSColor *dividerLightGray;
@property(readonly, nonatomic) NSColor *timelinePlaneHighlightColor;
@property(readonly, nonatomic) NSColor *timelinePlaneColor;
@property(readonly, nonatomic) NSFont *timelinePlaneFont;
@property(readonly, nonatomic) struct CGPoint planeNameOffset;
@property(readonly, nonatomic) double planeNameLabelWidth;
@property(readonly, nonatomic) NSMutableParagraphStyle *planeNameStyle;
@property(readonly, nonatomic) NSFont *planeNameFont;
@property(readonly, nonatomic) NSColor *planeNameColor;
@property(readonly, nonatomic) double planeHeight;
@property(readonly, nonatomic) NSColor *inactiveColor;
@property(readonly, nonatomic) NSColor *referencePlaneHighlightColor;
@property(readonly, nonatomic) NSColor *highlightColor;
- (id)referencePlaneColors;
- (id)groupColors;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSColor *heatMapColorBegin;
@property(readonly, nonatomic) NSColor *heatMapColorEnd;
@property(readonly, nonatomic) NSColor *inactiveHighlightColor;
@property(readonly, nonatomic) NSColor *itemColor;
@property(readonly, nonatomic) NSColor *referencePlaneColor;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL useHeatmap;

@end

