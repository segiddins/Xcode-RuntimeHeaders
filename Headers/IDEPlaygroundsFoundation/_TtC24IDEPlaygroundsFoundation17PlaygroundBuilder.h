//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface _TtC24IDEPlaygroundsFoundation17PlaygroundBuilder : NSObject
{
    MISSING_TYPE *playground;
    MISSING_TYPE *pifBuilder;
    MISSING_TYPE *buildArena;
    MISSING_TYPE *scheme;
    MISSING_TYPE *buildInProgress;
    MISSING_TYPE *buildStatusObservers;
    MISSING_TYPE *isChangingBuilderSettings;
    MISSING_TYPE *buildProductDirectoryURLs;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSArray *buildProductDirectoryURLs;
- (void)removeBuildStatusObserver:(id)arg1;
- (void)addBuildStatusObserver:(id)arg1;
- (BOOL)buildInTabController:(id)arg1 error:(id *)arg2;
- (void)setPIFNeedsUpdate;
@property(nonatomic, readonly) BOOL isReadyToBuild;
- (void)reloadDependencies;
- (void)activeWorkspaceSchemeChanged;
- (void)workspaceDidFinishLoading;
- (id)initWithPlayground:(id)arg1 error:(id *)arg2;

@end

