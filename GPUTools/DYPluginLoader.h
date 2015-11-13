//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface DYPluginLoader : NSObject
{
    NSMutableSet *_loadedPluginNames;
    _Bool _loading;
}

+ (void)loadPluginsWithProvider:(id)arg1 pathExtension:(id)arg2;
+ (void)loadPluginWithBundle:(id)arg1;
+ (void)loadGPUToolsPluginsInMainBundleOnly:(BOOL)arg1;
+ (void)loadGPUToolsPlugins;
+ (id)sharedPluginLoader;
- (void)_loadPluginsWithProvider:(id)arg1 pathExtension:(id)arg2;
- (void)_loadPluginsInDirectory:(id)arg1 pathExtension:(id)arg2;
- (void)_loadBundle:(id)arg1;
- (void)dealloc;
- (id)init;

@end

