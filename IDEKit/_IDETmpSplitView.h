//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSplitView.h>

@class NSColor;

@interface _IDETmpSplitView : NSSplitView
{
    double _dividerThickness;
    BOOL _suppressFrameWarnings;
    NSColor *dividerColor;
}

@property BOOL suppressFrameWarnings; // @synthesize suppressFrameWarnings=_suppressFrameWarnings;
@property(copy) NSColor *dividerColor; // @synthesize dividerColor;
@property double dividerThickness; // @synthesize dividerThickness=_dividerThickness;
- (void).cxx_destruct;
- (BOOL)_validateSubviewFrames;
- (void)drawDividerInRect:(struct CGRect)arg1;

@end

