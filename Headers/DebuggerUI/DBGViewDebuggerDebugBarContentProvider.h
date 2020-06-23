//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDebugBarContentProvider.h>

@class DBGViewDebuggerAdditionUIController, NSButton;
@protocol DVTCancellable;

@interface DBGViewDebuggerDebugBarContentProvider : IDEDebugBarContentProvider
{
    DBGViewDebuggerAdditionUIController *_currentUIController;
    id <DVTCancellable> _currentUIControllerObserver;
    id <DVTCancellable> _currentUIControllerIsValidObserver;
    NSButton *_viewDebuggingButton;
}

- (void).cxx_destruct;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)_updateCurrentUIController;
- (void)wasAttachedToDebugBar:(id)arg1;
- (void)currentDebugSessionDidChange;
- (void)currentDebugSessionStateDidChange;
- (void)_viewDebuggingButtonPressed:(id)arg1;
- (id)init;

@end

