//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDELaunchSession, IDEOpenInProjectWindowController;
@protocol OS_os_log;

@interface IDECrashReportController : NSObject
{
    IDEOpenInProjectWindowController *_windowController;
    IDELaunchSession *_currentLaunchSession;
    NSObject<OS_os_log> *_log;
}

+ (id)sharedCrashReportController;
- (void).cxx_destruct;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) IDELaunchSession *currentLaunchSession; // @synthesize currentLaunchSession=_currentLaunchSession;
@property(retain) IDEOpenInProjectWindowController *windowController; // @synthesize windowController=_windowController;
- (void)openCrashReport:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_openCrashLog:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 projectURL:(id)arg3;
- (id)_findFrameToSelectFromCrashLog:(id)arg1 workspace:(id)arg2;

@end

