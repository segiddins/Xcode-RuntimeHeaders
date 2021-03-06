//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocation, DVTStackBacktrace, IDEWorkspace, NSDictionary, NSMutableSet, NSSet, NSString;
@protocol DVTInvalidation;

@interface IDEOpenQuicklyWorkspaceContentContextProvider : NSObject <DVTInvalidation>
{
    NSMutableSet *_pendingRemovedFilePaths;
    NSMutableSet *_pendingAddedOrModifiedFilePaths;
    NSDictionary *_filePathsToFrameworkNames;
    id <DVTInvalidation> _workspaceObserver;
    DVTDelayedInvocation *_refreshInvocation;
    BOOL _queryInProgress;
    IDEWorkspace *_workspace;
    NSSet *_directlyImportedFrameworkNames;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) NSSet *directlyImportedFrameworkNames; // @synthesize directlyImportedFrameworkNames=_directlyImportedFrameworkNames;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)workspaceFilePath:(id)arg1 didChangeWithType:(long long)arg2;
- (void)beginRefresh;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

