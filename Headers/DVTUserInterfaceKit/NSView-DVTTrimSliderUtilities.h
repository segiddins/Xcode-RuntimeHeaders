//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@interface NSView (DVTTrimSliderUtilities)
- (double)dvt_roundedToPixelScale:(double)arg1;
- (id)dvt_activeStateObservers;
- (void)dvt_unregisterActiveStateObservationWithToken:(id)arg1;
- (id)dvt_registerActiveStateObservationForNearestAncestor;
- (void)dvt_setupOrTearDownActiveStateObservationWithToken:(id *)arg1;
- (void)dvt_pushActiveStateToDescendantObservers:(BOOL)arg1;
- (void)dvt_pushActiveStateToDescendantObservers;
- (void)_dvt_setNeedsDisplayRecursively;
@end

