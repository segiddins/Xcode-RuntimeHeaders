//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSColor, NSTrackingArea;

@interface IDECoverageReportTableRowView : NSTableRowView
{
    BOOL _mouseInside;
    NSTrackingArea *_trackingArea;
    long long _coverageBarColumnIndex;
    id _item;
    NSColor *_separatorColor;
}

@property(retain) NSColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain) id item; // @synthesize item=_item;
@property long long coverageBarColumnIndex; // @synthesize coverageBarColumnIndex=_coverageBarColumnIndex;
- (void).cxx_destruct;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)testTableCellView;
- (void)updateTrackingAreas;
- (void)ensureTrackingArea;
- (BOOL)mouseInside;
- (void)setMouseInside:(BOOL)arg1;

@end

