//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXLSRunLaunchConfig.h>

@class NSDictionary;

@interface PBXLSRunExternalLaunchConfig : PBXLSRunLaunchConfig
{
    NSDictionary *_optionalData;
}

- (id)optionalData;
- (void)setOptionalData:(id)arg1;
- (void)decodeState:(id)arg1;
- (id)encodeState;
- (id)launcherPath;
- (id)newExecutableLauncher;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1 path:(id)arg2 idString:(id)arg3;

@end

