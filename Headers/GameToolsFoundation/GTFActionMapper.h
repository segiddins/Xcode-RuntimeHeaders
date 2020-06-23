//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface GTFActionMapper : NSObject
{
    NSMutableDictionary *_actionViewToActionModel;
    NSMutableDictionary *_actionModelToActionView;
    NSMutableSet *_actionViews;
    NSMutableDictionary *_nodeTrackViewToTimelineModel;
    struct MappingPair _cachedNodeTrackViewToTimelineModel;
    NSMutableDictionary *_timelineModelToNodeTrackView;
    struct MappingPair _cachedTimelineModelToNodeTrackView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearCache;
- (id)nodeTrackViewFromTimelineModel:(id)arg1;
- (id)timelineModelFromNodeTrackView:(id)arg1;
- (void)removeAllMappings;
- (id)actionViewsFromActionModels:(id)arg1;
- (id)nodeTrackViewFromActionView:(id)arg1;
- (id)actionViewFromActionModel:(id)arg1;
- (id)actionModelsFromActionViews:(id)arg1;
- (id)actionModelFromActionView:(id)arg1;
- (void)removeTimelineModel:(id)arg1;
- (void)removeActionViewMappings:(id)arg1;
- (void)addMappingBetweenNodeTrackView:(id)arg1 andTimelineModel:(id)arg2;
- (void)addMappingFromActionView:(id)arg1 toNodeTrackView:(id)arg2;
- (void)addMappingBetweenActionView:(id)arg1 andActionModel:(id)arg2;
- (id)init;

@end

