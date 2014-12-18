//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTGenericButtonViewController.h"

@class DVTObservingToken, NSToolbarItem;

@interface IDEToolbarStopButtonViewController : DVTGenericButtonViewController
{
    NSToolbarItem *_toolbarItem;
    DVTObservingToken *_workspaceIdleObservingToken;
    DVTObservingToken *_executionTrackersObservingToken;
    DVTObservingToken *_executionTrackersStatusObserverToken;
    id _sheetObservingToken;
    BOOL _lastEnabled;
}

@property(retain) NSToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;
- (void).cxx_destruct;
- (void)_stopLaunchSession:(id)arg1;
- (void)_handleExecutionTrackersChanged:(id)arg1 forExecutionEnvironment:(id)arg2;
- (void)_handleToolbarIdleStateChange:(id)arg1 forWorkspace:(id)arg2;
- (void)_setEnabled:(BOOL)arg1;
- (id)_button;
- (void)primitiveInvalidate;
- (id)initWithButton:(id)arg1 itemIdentifier:(id)arg2 window:(id)arg3;

@end

