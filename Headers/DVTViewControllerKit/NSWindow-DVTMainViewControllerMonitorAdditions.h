//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class DVTViewController;

@interface NSWindow (DVTMainViewControllerMonitorAdditions)
+ (BOOL)automaticallyNotifiesObserversOf_dvt_mainViewControllerMonitor;
+ (BOOL)automaticallyNotifiesObserversOfDvt_mainViewController;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
- (void)set_dvt_mainViewControllerMonitor:(id)arg1;
- (id)_dvt_mainViewControllerMonitor;
- (void)dvt_viewControllerWillUninstall:(id)arg1;
- (void)dvt_updateMainViewControllerUsingResponderChain;
- (void)setDvt_mainViewController:(id)arg1;
@property(readonly) DVTViewController *dvt_mainViewController;
@end
