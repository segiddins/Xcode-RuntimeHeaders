//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableSet;

@interface _DVTImageCache : NSObject
{
    NSCache *_cache;
    NSMutableSet *_negativeCache;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_nukeCache;
- (id)cachedImageWithKey:(id)arg1 creationBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

