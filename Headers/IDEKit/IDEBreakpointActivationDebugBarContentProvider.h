//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDebugBarContentProvider.h>

@class DVTGradientImageButton, DVTObservingToken;

@interface IDEBreakpointActivationDebugBarContentProvider : IDEDebugBarContentProvider
{
    DVTGradientImageButton *_breakpointStateButton;
    DVTObservingToken *_activationStateObserverToken;
    BOOL _prefersDebugBarToAlwaysBeShown;
}

@property BOOL prefersDebugBarToAlwaysBeShown; // @synthesize prefersDebugBarToAlwaysBeShown=_prefersDebugBarToAlwaysBeShown;
- (void).cxx_destruct;
- (void)currentDebugSessionStateDidChange;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)wasAttachedToDebugBar:(id)arg1;
- (id)_createBreakpointActivationButton;
- (id)init;

@end

