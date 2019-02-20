//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSImage, NSString;

@interface XCNSProcInfo : NSObject
{
    NSString *_name;
    NSString *_realAppName;
    NSString *_requestedAppName;
    unsigned int _task;
    int _pid;
    struct timeval _startTime;
    NSImage *_procIconImage;
    BOOL _needTaskPortDealloc;
}

+ (int)processParentId:(int)arg1;
+ (BOOL)isProcessRunning:(int)arg1;
+ (id)getProcessIds;
- (long long)compareByUserAppName:(id)arg1;
- (long long)compareByName:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)signal:(int)arg1;
- (BOOL)terminate;
- (BOOL)isRunning;
- (BOOL)isCFM;
- (BOOL)isMachO;
- (BOOL)isApp;
- (void)update;
- (id)image;
- (id)_searchForImage;
- (unsigned int)task;
- (int)ppid;
- (int)pid;
- (id)description;
- (id)name;
- (id)userAppName;
- (id)firstArgument;
- (id)requestedAppName;
- (id)realAppName;
- (id)_nameFromCommandLine:(int)arg1;
- (id)envVars;
- (id)procTableName;
- (struct timeval)startTime;
- (void)finalize;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithPid:(int)arg1;
- (id)init;

@end
