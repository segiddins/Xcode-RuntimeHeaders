//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, XCMacroExpansionScope;

@interface XCPreciseReferencePathResolver : NSObject
{
    XCMacroExpansionScope *_macroExpansionScope;
    NSMapTable *_refsToPaths;
}

- (void).cxx_destruct;
- (void)dumpMappings;
- (id)resolvePathForReference:(id)arg1;
- (id)initForTarget:(id)arg1 buildParameters:(id)arg2 sdk:(id)arg3;

@end

