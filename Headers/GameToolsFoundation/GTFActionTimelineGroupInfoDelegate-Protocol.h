//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameToolsFoundation/NSObject-Protocol.h>

@class NSArray;

@protocol GTFActionTimelineGroupInfoDelegate <NSObject>
- (double)getTimelineOffset;
- (double)getTimeScale;
- (struct CGRect)calcGroupRect:(int)arg1;
- (struct CGRect)getTrackFrame:(int)arg1;
- (NSArray *)getTrackActionViews:(int)arg1;
- (double)getTrackEndTime:(int)arg1;
- (int)getNumTracks;
- (BOOL)shouldShowGroupTopForTrack:(int)arg1;
- (int)getGroupIndexForTrack:(int)arg1;
- (NSArray *)getActionsForGroup:(int)arg1 inTrack:(int)arg2;
- (NSArray *)getTracksForGroup:(int)arg1;
- (double)getStartTimeForGroup:(int)arg1;
- (double)getIterationTimeForLoop:(int)arg1;
- (int)getLoopCountForGroup:(int)arg1;
- (int)getNumGroups;
@end

