//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UVApplicationLauncher : NSObject
{
}

+ (void)killASN:(struct __LSASN *)arg1;
+ (void)killPID:(int)arg1;
+ (void)_updateAccessibilityLaunchInfoForProcess:(struct __LSASN *)arg1;
+ (void)killExistingMacCatalystInstancesAtURL:(id)arg1;
+ (void)_launchApplicationAtURL:(id)arg1 isRelaunch:(BOOL)arg2 allowExistingInstance:(BOOL)arg3 activate:(BOOL)arg4 hidden:(BOOL)arg5 addToRecents:(BOOL)arg6 openBackground:(BOOL)arg7 arguments:(id)arg8 environment:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
+ (void)launchApplicationAtURL:(id)arg1 allowExistingInstance:(BOOL)arg2 activate:(BOOL)arg3 hidden:(BOOL)arg4 addToRecents:(BOOL)arg5 openBackground:(BOOL)arg6 arguments:(id)arg7 environment:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;

@end

