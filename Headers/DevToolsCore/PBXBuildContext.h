//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XCMacroExpansionScope;

@interface PBXBuildContext : NSObject
{
    NSString *_baseDirectoryPath;
    XCMacroExpansionScope *_macroExpansionScope;
}

- (void).cxx_destruct;
- (id)absolutePathForPath:(id)arg1;
- (void)_setMacroExpansionScope:(id)arg1;
- (id)macroExpansionScope;
- (void)setBaseDirectoryPath:(id)arg1;
- (id)baseDirectoryPath;
- (id)init;
- (id)valueForUndefinedKey:(id)arg1;

@end

