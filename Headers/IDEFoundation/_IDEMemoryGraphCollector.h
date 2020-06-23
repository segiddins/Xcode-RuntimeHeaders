//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath;

@interface _IDEMemoryGraphCollector : NSObject
{
    int _pid;
    unsigned long long _thresholdInGB;
    DVTFilePath *_leaksFilePath;
}

+ (void)_LOCKED_showAlertWithMessage:(id)arg1 informativeText:(id)arg2 accessibilityLabel:(id)arg3 suppressionButtonTitle:(id)arg4 useCorpse:(BOOL)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (BOOL)_LOCKED_showModalUIAndCaptureMemoryGraphAtPath:(id)arg1 pid:(int)arg2 leaksURL:(id)arg3 showSuccessDialog:(BOOL)arg4;
+ (BOOL)_primitiveCaptureMemoryGraphAtPath:(id)arg1 leaksURL:(id)arg2 pid:(int)arg3 useCorpse:(BOOL)arg4 error:(id *)arg5;
+ (id)_memgraphFilePathWithPID:(int)arg1 fileNameSuffix:(id)arg2;
+ (id)_gatherMemgraphQueue;
- (void).cxx_destruct;
- (void)showAlertWithCurrentUsage:(id)arg1;
- (void)showAlertForAbandonedObjectAfterDuration:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithPID:(int)arg1 leaksFilePath:(id)arg2 thresholdInGB:(unsigned long long)arg3;

@end

