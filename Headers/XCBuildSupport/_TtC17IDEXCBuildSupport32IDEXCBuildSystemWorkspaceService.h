//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTInvalidation_NSObject.h>

@class IDEWorkspace, MISSING_TYPE;

@interface _TtC17IDEXCBuildSupport32IDEXCBuildSystemWorkspaceService : DVTInvalidation_NSObject
{
    MISSING_TYPE *workspace;
    MISSING_TYPE *objectRootPathOverride;
    MISSING_TYPE *xcbService;
    MISSING_TYPE *session;
    MISSING_TYPE *diagnostics;
    MISSING_TYPE *queue;
    MISSING_TYPE *_buildablesToken;
    MISSING_TYPE *_buildablesForCachedScheme;
    MISSING_TYPE *_blueprintsForCachedScheme;
    MISSING_TYPE *_cachedScheme;
    MISSING_TYPE *_sortedCacheOfAllBuildables;
}

- (void).cxx_destruct;
- (id)init;
- (void)primitiveInvalidate;
@property(nonatomic, readonly) IDEWorkspace *workspace; // @synthesize workspace;

@end
