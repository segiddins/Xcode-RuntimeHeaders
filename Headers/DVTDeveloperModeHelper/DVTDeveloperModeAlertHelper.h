//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFuture, NSString, NSWindow;

@interface DVTDeveloperModeAlertHelper : NSObject
{
    BOOL _shouldAskUserAboutDeveloperMode;
    int _messageType;
    NSWindow *_parentWindow;
    DVTFuture *_developerModeIsEnabledFuture;
}

+ (void)initialize;
@property(retain) DVTFuture *developerModeIsEnabledFuture; // @synthesize developerModeIsEnabledFuture=_developerModeIsEnabledFuture;
@property(nonatomic) BOOL shouldAskUserAboutDeveloperMode; // @synthesize shouldAskUserAboutDeveloperMode=_shouldAskUserAboutDeveloperMode;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void).cxx_destruct;
@property(readonly) NSString *informativeText;
- (void)enableDeveloperMode:(CDUnknownBlockType)arg1;
- (void)setDeveloperModeWithReturnCode:(long long)arg1;
- (void)_performAskToEnableDeveloperModeIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)makeAlertWithMessageText:(id)arg1 buttonTitles:(id)arg2 informativeText:(id)arg3;
- (void)_synchronizedPerformDeveloperModeAlertCompletionCallbacks;
- (void)_synchronizedAskToEnableDeveloperModeIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)askToEnableDeveloperModeIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

