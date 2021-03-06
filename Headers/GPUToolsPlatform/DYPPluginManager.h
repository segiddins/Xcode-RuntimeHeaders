//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface DYPPluginManager : NSObject
{
    NSMutableDictionary *_pluginCache;
    NSDictionary *_extensionForPlatform;
    unsigned long long _version;
}

+ (id)sharedPluginManager;
+ (id)metalPluginForArchive:(id)arg1;
+ (id)metalPluginForPlatform:(int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
- (id)_pluginForPlatform:(int)arg1 andAPI:(unsigned int)arg2;
- (id)_createPlatformPluginFromExtensionForPlatform:(int)arg1;
- (id)_loadPlatformPluginFromBaseExtension:(id)arg1 andPlatform:(int)arg2;
- (id)init;

@end

