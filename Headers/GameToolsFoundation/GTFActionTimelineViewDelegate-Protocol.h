//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameToolsFoundation/NSObject-Protocol.h>

@class GTFActionTimelineView;

@protocol GTFActionTimelineViewDelegate <NSObject>
- (void)incrementPreviewStartTime:(double)arg1 startPreview:(BOOL)arg2;
- (void)setActionPreviewStartTime:(double)arg1 startPreview:(BOOL)arg2;
- (void)actionTimelineViewDidEndScrubbing:(GTFActionTimelineView *)arg1;
- (void)actionTimelineViewDidBeginScrubbing:(GTFActionTimelineView *)arg1;
@end

