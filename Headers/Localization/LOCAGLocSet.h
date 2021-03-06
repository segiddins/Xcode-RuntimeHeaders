//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LOCAGCommandOptions, LOCAGProjectManager, LOCLogger, NSFileManager, NSMutableArray, NSString;

@interface LOCAGLocSet : NSObject
{
    NSString *_fileName;
    LOCAGProjectManager *_projectManager;
    LOCLogger *_log;
    NSFileManager *_fileManager;
    NSMutableArray *_stdoutQueue;
    NSMutableArray *_stderrQueue;
    NSMutableArray *_logfileQueue;
    NSMutableArray *_tempFilesToBeDeleted;
    unsigned long long _executionMode;
    LOCAGCommandOptions *_commandOptions;
}

+ (BOOL)isNibStringsOrPlistFile:(id)arg1;
- (void).cxx_destruct;
@property(retain) LOCAGCommandOptions *commandOptions; // @synthesize commandOptions=_commandOptions;
@property unsigned long long executionMode; // @synthesize executionMode=_executionMode;
@property(retain) NSMutableArray *tempFilesToBeDeleted; // @synthesize tempFilesToBeDeleted=_tempFilesToBeDeleted;
@property(retain) NSMutableArray *logfileQueue; // @synthesize logfileQueue=_logfileQueue;
@property(retain) NSMutableArray *stderrQueue; // @synthesize stderrQueue=_stderrQueue;
@property(retain) NSMutableArray *stdoutQueue; // @synthesize stdoutQueue=_stdoutQueue;
@property(retain) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain) LOCLogger *log; // @synthesize log=_log;
@property __weak LOCAGProjectManager *projectManager; // @synthesize projectManager=_projectManager;
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
- (void)saveIBToolErros:(id)arg1 forNib:(id)arg2 operation:(id)arg3;
- (id)convertPathFromNibToNibPlist:(id)arg1;
- (id)convertPathFromNibToNibStrings:(id)arg1;
- (id)convertPathFromNibToUniversalNibStrings:(id)arg1;
- (void)queueMessageToLogFile:(id)arg1;
- (void)queueMessageToStdErr:(id)arg1;
- (void)queueMessageToStdOut:(id)arg1;
- (id)initWithFileName:(id)arg1 projectManager:(id)arg2 logManager:(id)arg3;

@end

