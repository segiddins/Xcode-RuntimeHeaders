//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEReadOnlyItemsManager : NSObject
{
}

+ (id)readOnlyItemsManagerAspect;
+ (id)localizedRecoveryMessageForFailedUnlockingAttemptWithStatus:(int)arg1;
+ (id)localizedDescriptionForReadOnlyStatus:(int)arg1 itemName:(id)arg2 pluralized:(BOOL)arg3;
+ (BOOL)shouldShowLockedIndicatorForStatus:(int)arg1;
+ (BOOL)tryToMakeFilePathWritable:(id)arg1 error:(id *)arg2;
+ (BOOL)_addUserWritePermissionToFilePath:(id)arg1 error:(id *)arg2;
+ (int)readOnlyStatusOfFilePath:(id)arg1;
+ (void)deregisterDerivedDataPath:(id)arg1;
+ (void)registerDerivedDataPath:(id)arg1;

@end

