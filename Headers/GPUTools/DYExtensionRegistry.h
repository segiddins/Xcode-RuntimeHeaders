//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DYExtensionRegistry : NSObject
{
    NSMutableDictionary *_slotsMap;
    NSMutableDictionary *_identifiersMap;
}

+ (id)sharedExtensionRegistry;
- (id)extensionsForSlot:(id)arg1;
- (void)registerExtension:(id)arg1;
- (void)dealloc;
- (id)init;

@end

