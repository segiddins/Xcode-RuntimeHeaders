//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTextField, NSTimer, XCSBuildQueueIntegration;

@interface XCSUIUpcomingIntegrationView : NSView
{
    BOOL _current;
    NSTimer *_ETATimer;
    XCSBuildQueueIntegration *_integration;
    CDUnknownBlockType _cancellationHandler;
    NSTextField *_titleLabel;
    NSTextField *_statusLabel;
}

+ (id)viewWithIntegration:(id)arg1 isCurrent:(BOOL)arg2 cancellationHandler:(CDUnknownBlockType)arg3;
+ (id)durationFormatter;
- (void).cxx_destruct;
@property __weak NSTextField *statusLabel; // @synthesize statusLabel=_statusLabel;
@property __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
@property(nonatomic) BOOL current; // @synthesize current=_current;
@property(retain, nonatomic) XCSBuildQueueIntegration *integration; // @synthesize integration=_integration;
@property(retain, nonatomic) NSTimer *ETATimer; // @synthesize ETATimer=_ETATimer;
- (void)cancel:(id)arg1;
- (void)updateETA:(id)arg1;
- (id)thisIntegrationString;
- (void)dealloc;

@end

