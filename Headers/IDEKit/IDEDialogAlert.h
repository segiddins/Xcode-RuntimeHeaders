//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEAlert.h>

@interface IDEDialogAlert : IDEAlert
{
}

- (int)alertPropertyListVersion;
- (void)sendNotification:(id)arg1 withContext:(id)arg2 inWorkspace:(id)arg3;
- (id)notificationFromEvent:(id)arg1 withContext:(id)arg2 inWorkspace:(id)arg3;
- (void)showBezelWithMessage:(id)arg1 image:(id)arg2 andIconName:(id)arg3;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)shouldUseBezelForContext:(id)arg1;
- (BOOL)affectedUrlsAreAllRadarProblemsInContext:(id)arg1;
- (id)affectedUrlsInContext:(id)arg1;
- (void)runUserNotificationRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

