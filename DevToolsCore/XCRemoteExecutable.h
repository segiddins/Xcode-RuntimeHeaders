//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PBXExecutable;

@interface XCRemoteExecutable : NSObject
{
    BOOL shouldLaunch;
    BOOL shouldDebug;
    long long debugPort;
    PBXExecutable *localExecutable;
    NSString *localBundlePath;
    NSString *installedPath;
    NSString *executableReferencePath;
    NSString *sdkPath;
}

@property long long debugPort; // @synthesize debugPort;
@property BOOL shouldDebug; // @synthesize shouldDebug;
@property BOOL shouldLaunch; // @synthesize shouldLaunch;
@property(retain) PBXExecutable *localExecutable; // @synthesize localExecutable;
@property(retain) NSString *executableReferencePath; // @synthesize executableReferencePath;
@property(retain) NSString *installedPath; // @synthesize installedPath;
@property(retain) NSString *localBundlePath; // @synthesize localBundlePath;
@property(retain) NSString *sdkPath; // @synthesize sdkPath;

@end

