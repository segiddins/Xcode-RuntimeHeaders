//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEPlaygroundExecution/NSObject-Protocol.h>

@class DVTFilePath, NSString;

@protocol IDEPlaygroundAppBundle <NSObject>
@property(readonly) DVTFilePath *containerPath;
@property(readonly, copy) NSString *bundleIdentifier;
@property(readonly, copy) NSString *executableSubpath;
@property(readonly) DVTFilePath *appBundlePath;
- (BOOL)cleanUpAppBundle:(id *)arg1;
@end

