//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IBPlatformToolExtensionManager : NSObject
{
    NSDictionary *_extensionsByPlatformTool;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)extensionsForTool:(id)arg1 inPlatformNamed:(id)arg2;
- (id)init;

@end

