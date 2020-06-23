//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameToolsFoundation/NSSecureCoding-Protocol.h>

@class GTFActionTimelineModel, NSArray, NSMutableArray;

@interface GTFActionModelGroup : NSObject <NSSecureCoding>
{
    NSMutableArray *_tracks;
    struct map<int, NSMutableArray *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, NSMutableArray *>>> _trackActions;
    double _startTime;
    double _duration;
    int _topTrack;
    int _bottomTrack;
    int _numActions;
    BOOL _actionsLocked;
    int _groupId;
    GTFActionTimelineModel *_ownerTimeline;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) BOOL actionsLocked; // @synthesize actionsLocked=_actionsLocked;
@property(nonatomic) int groupId; // @synthesize groupId=_groupId;
@property(nonatomic) __weak GTFActionTimelineModel *ownerTimeline; // @synthesize ownerTimeline=_ownerTimeline;
@property(readonly, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_getSKActionForPreview:(BOOL)arg1 withStartTime:(double)arg2 activeAnimationFound:(char *)arg3 ignoreScrubSensitiveActions:(BOOL)arg4;
- (id)getPreviewSKActionWithStartTime:(double)arg1 activeAnimationFound:(char *)arg2 ignoreScrubSensitiveActions:(BOOL)arg3;
- (id)getSKAction;
- (id)getSCNAction;
- (id)getActions;
- (id)getActionsForTrack:(int)arg1;
- (BOOL)anyActionsInTrack:(int)arg1;
- (void)updateTrackIndexes;
- (void)update;
- (void)adjustStartTime:(double)arg1;
- (void)removeAllActions;
- (void)removeActions:(id)arg1;
- (void)removeAction:(id)arg1;
- (void)addActions:(id)arg1;
- (void)addAction:(id)arg1;
- (void)addActionToActionTrackMap:(id)arg1;
- (BOOL)isInTrack:(int)arg1;
- (BOOL)containsAction:(id)arg1;
- (void)offsetStartTime:(double)arg1;
- (void)setupGroup;
- (id)init;
- (void)findBottomTrack;
- (void)findTopTrack;
@property(readonly, nonatomic) int numActions;
@property(readonly, nonatomic) int bottomTrackIndex;
@property(readonly, nonatomic) int topTrackIndex;
@property(nonatomic) double endTime;
@property(nonatomic) double duration;
@property(nonatomic) double startTime;

@end

