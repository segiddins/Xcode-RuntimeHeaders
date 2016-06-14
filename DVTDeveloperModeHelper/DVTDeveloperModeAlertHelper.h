//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSWindow;

@interface DVTDeveloperModeAlertHelper : NSObject
{
    BOOL _shouldAskUserAboutDeveloperMode;
    int _messageType;
    NSWindow *_parentWindow;
}

+ (void)initialize;
@property(nonatomic) BOOL shouldAskUserAboutDeveloperMode; // @synthesize shouldAskUserAboutDeveloperMode=_shouldAskUserAboutDeveloperMode;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void).cxx_destruct;
@property(readonly) NSString *informativeText;
- (void)setDeveloperModeWithReturnCode:(long long)arg1;
- (void)_performAskToEnableDeveloperModeIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_synchronizedPerformDeveloperModeAlertCompletionCallbacks;
- (void)_synchronizedAskToEnableDeveloperModeIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)askToEnableDeveloperModeIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

