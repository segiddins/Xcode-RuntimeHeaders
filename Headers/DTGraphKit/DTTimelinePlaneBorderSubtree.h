//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTGraphKit/DTTimelineGraphLayerSubtree.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface DTTimelinePlaneBorderSubtree : DTTimelineGraphLayerSubtree
{
    struct unordered_set<signed char *, std::__1::hash<signed char *>, std::__1::equal_to<signed char *>, std::__1::allocator<signed char *>> _selectedIvars;
    BOOL _subtle;
    DTTimelinePlaneBorderSubtree *_extension;
    NSNumber *_hierarchyLevel;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *hierarchyLevel; // @synthesize hierarchyLevel=_hierarchyLevel;
@property(readonly, nonatomic) BOOL subtle; // @synthesize subtle=_subtle;
@property(retain, nonatomic) DTTimelinePlaneBorderSubtree *extension; // @synthesize extension=_extension;
- (BOOL)isSelected;
- (void)setSubtle:(BOOL)arg1 graph:(id)arg2;
- (BOOL)canBeRemovedFromSuperlayer;
- (unsigned long long)registeredPlaneCount;
- (void)unregisterPlanesSelectedPtr:(char *)arg1 graph:(id)arg2;
- (void)registerPlanesSelectedPtr:(char *)arg1 graph:(id)arg2;
- (void)adjustToGraph:(id)arg1;
- (id)initWithRootLayer:(id)arg1 owner:(BOOL)arg2;
- (id)init;

@end
