//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/_XCOQOperation.h>

@class NSArray, PBXProject;

@interface _XCOQFindHeaderSearchPathsOperation : _XCOQOperation
{
    PBXProject *_project;
    NSArray *_headerSearchPaths;
    NSArray *_frameworkSearchPaths;
}

+ (void)headers:(id *)arg1 frameworkHeaders:(id *)arg2 fromLockedTargetBuildContext:(id)arg3;
@property(copy) NSArray *frameworkSearchPaths; // @synthesize frameworkSearchPaths=_frameworkSearchPaths;
@property(copy) NSArray *headerSearchPaths; // @synthesize headerSearchPaths=_headerSearchPaths;
- (void)main;
- (void)dealloc;
- (id)initWithProject:(id)arg1;

@end

