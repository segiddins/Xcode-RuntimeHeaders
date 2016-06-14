//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DTGraphKit/CALayoutManager-Protocol.h>

@class DTTimelineGroupPlane, NSString;

__attribute__((visibility("hidden")))
@interface DTTimelineGroupPlaneLayoutManager : NSObject <CALayoutManager>
{
    DTTimelineGroupPlane *_groupPlane;
}

- (void).cxx_destruct;
- (void)populatePlaneLayoutMap:(unordered_map_c1fbcd3c *)arg1 offsetFromTop:(double)arg2;
- (struct CGRect)_frameForZOrderedPlane:(id)arg1 yOffet:(double)arg2;
- (id)planesUnderPoint:(struct CGPoint)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)_positionPlane:(id)arg1 yPosition:(double)arg2 includeBottomBorder:(BOOL)arg3;
- (void)_positionPlane:(id)arg1;
- (void)_positionBottomBorderForPlane:(id)arg1 yPosition:(double)arg2;
- (id)initWithGroupPlane:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

