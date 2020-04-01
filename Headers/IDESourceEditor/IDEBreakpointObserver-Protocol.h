//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class IDEBreakpoint, IDEBreakpointLocation, IDEWatchpoint, NSArray;

@protocol IDEBreakpointObserver <NSObject>

@optional
- (void)watchpointEnablementChanged:(IDEWatchpoint *)arg1;
- (void)breakpointLocationsAdded:(NSArray *)arg1 removed:(NSArray *)arg2;
- (void)breakpointLocationEnablementChanged:(IDEBreakpointLocation *)arg1;
- (void)breakpointTextFilterablePropertyChanged:(IDEBreakpoint *)arg1;
- (void)breakpointNameChanged:(IDEBreakpoint *)arg1;
- (void)breakpointModificationChanged:(IDEBreakpoint *)arg1;
- (void)breakpointEnablementChanged:(IDEBreakpoint *)arg1;
- (void)breakpointsActivationStateChanged;
@end

