//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class DVTCrashLog;

@interface IDECrashReportDocument : IDEEditorDocument
{
    DVTCrashLog *_crashLog;
}

+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
@property(readonly) DVTCrashLog *crashLog; // @synthesize crashLog=_crashLog;
- (void).cxx_destruct;
- (void)printDocument:(id)arg1;
- (int)readOnlyStatus;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;

@end

