//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <DebuggerUI/IDEDebugOverrideDelegate-Protocol.h>

@class IDEDebugOverride, IDEDebugSession, NSView;
@protocol DBGKitDebuggingAddition;

@interface IDEDebugOverrideViewController : NSViewController <IDEDebugOverrideDelegate>
{
    IDEDebugOverride *_debugOverride;
    IDEDebugSession *_debugSession;
    NSView *_backgroundView;
    id <DBGKitDebuggingAddition> _kitDebuggingAddition;
}

+ (id)controllerWithDebugOverride:(id)arg1 forDebugSession:(id)arg2;
@property(retain) id <DBGKitDebuggingAddition> kitDebuggingAddition; // @synthesize kitDebuggingAddition=_kitDebuggingAddition;
@property __weak NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly) IDEDebugSession *debugSession; // @synthesize debugSession=_debugSession;
@property(retain) IDEDebugOverride *debugOverride; // @synthesize debugOverride=_debugOverride;
- (void).cxx_destruct;
- (void)dealloc;
- (void)debugOverrideDidUpdate:(id)arg1;
- (void)updateUIWithOverrideState;
- (void)viewDidLoad;
- (id)initWithDebugOverride:(id)arg1 forDebugSession:(id)arg2;

@end

