//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTTimelineGroupPlane, DTTimelinePlane, NSMutableArray;

@interface DTTimelineGroupPlaneChanges : NSObject
{
    DTTimelineGroupPlane *_groupPlane;
    BOOL _hasChanges;
    BOOL _expanded;
    NSMutableArray *_subplanes;
    long long _groupPlaneType;
    DTTimelinePlane *_representativePlane;
}

@property(nonatomic) __weak DTTimelinePlane *representativePlane; // @synthesize representativePlane=_representativePlane;
@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property(nonatomic) BOOL hasChanges; // @synthesize hasChanges=_hasChanges;
@property(nonatomic) long long groupPlaneType; // @synthesize groupPlaneType=_groupPlaneType;
@property(retain, nonatomic) NSMutableArray *subplanes; // @synthesize subplanes=_subplanes;
- (void).cxx_destruct;
- (id)initWithGroupPlane:(id)arg1;

@end

