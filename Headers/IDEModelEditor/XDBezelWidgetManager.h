//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelEditor/NSAnimationDelegate-Protocol.h>
#import <IDEModelEditor/NSWindowDelegate-Protocol.h>

@class NSString, NSTimer, XDBezelWidgetPanel, XDBezelWidgetView;

@interface XDBezelWidgetManager : NSObject <NSWindowDelegate, NSAnimationDelegate>
{
    NSTimer *_bezelWidgetTimer;
    XDBezelWidgetView *_bezelWidgetView;
    XDBezelWidgetPanel *_bezelWidgetPanel;
}

+ (BOOL)sharedBezelWidgetManagerExists;
+ (id)sharedBezelWidgetManager;
+ (Class)_sharedBezelWidgetManagerClass;
+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)isBezelWidgetVisible;
- (void)windowDidResignKey:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)orderOutBezelWidget;
- (void)orderFrontBezelWidgetForView:(id)arg1;
- (void)_destroyBezelWidgetTimer;
- (void)_createBezelWidgetTimer;
- (void)_bezelWidgetTimerAction:(id)arg1;
- (id)bezelWidgetView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

