//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSDynamicNamedColor.h>

@class NSAppearance, NSColor, NSString;

@interface _DVTDynamicColor : NSDynamicNamedColor
{
    CDUnknownBlockType _resolver;
    NSColor *_cachedResolvedColor;
    NSAppearance *_lastAppearance;
    NSString *_name;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)getComponents:(double *)arg1;
- (id)colorSpace;
- (id)colorSpaceName;
- (id)description;
- (id)resolvedColor;
- (id)initWithName:(id)arg1 resolver:(CDUnknownBlockType)arg2;

@end

