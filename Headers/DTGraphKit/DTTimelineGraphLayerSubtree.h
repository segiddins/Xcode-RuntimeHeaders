//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DTGraphKit/CALayerDelegate-Protocol.h>

@class CALayer, DTTimelinePlane, NSString;

__attribute__((visibility("hidden")))
@interface DTTimelineGraphLayerSubtree : NSObject <CALayerDelegate>
{
    BOOL _ownsRoot;
    CALayer *_root;
    DTTimelinePlane *_associatedPlane;
}

+ (id)associatedPlaneFromLayer:(id)arg1;
@property(nonatomic) __weak DTTimelinePlane *associatedPlane; // @synthesize associatedPlane=_associatedPlane;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)adjustToGraph:(id)arg1;
@property(readonly, nonatomic) CALayer *root;
- (void)dealloc;
- (id)init;
- (id)initWithRootLayer:(id)arg1 owner:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

