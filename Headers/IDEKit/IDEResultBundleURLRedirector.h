//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEResultBundleURLRedirecting-Protocol.h>

@class DVTStackBacktrace, NSDictionary, NSMutableDictionary, NSString;
@protocol DVTInvalidation;

@interface IDEResultBundleURLRedirector : NSObject <IDEResultBundleURLRedirecting>
{
    id <DVTInvalidation> _blueprintsChangedObserver;
    NSDictionary *_sourceRootMap;
    NSDictionary *_workspaceSourceRootMap;
    NSMutableDictionary *_redirectionCache;
    CDUnknownBlockType _fileExistenceChecker;
    CDUnknownBlockType _workspaceItemsFilePathProvider;
    CDUnknownBlockType _imageAndSourceRootProvider;
    CDUnknownBlockType _blueprintsChangeObservationProvider;
}

+ (void)initialize;
+ (id)logAspect;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType blueprintsChangeObservationProvider; // @synthesize blueprintsChangeObservationProvider=_blueprintsChangeObservationProvider;
@property(copy) CDUnknownBlockType imageAndSourceRootProvider; // @synthesize imageAndSourceRootProvider=_imageAndSourceRootProvider;
@property(copy) CDUnknownBlockType workspaceItemsFilePathProvider; // @synthesize workspaceItemsFilePathProvider=_workspaceItemsFilePathProvider;
@property(copy) CDUnknownBlockType fileExistenceChecker; // @synthesize fileExistenceChecker=_fileExistenceChecker;
@property(copy) NSMutableDictionary *redirectionCache; // @synthesize redirectionCache=_redirectionCache;
@property(copy) NSDictionary *workspaceSourceRootMap; // @synthesize workspaceSourceRootMap=_workspaceSourceRootMap;
@property(readonly, copy) NSDictionary *sourceRootMap; // @synthesize sourceRootMap=_sourceRootMap;
- (void)_setUpBlueprintChangeObservation;
- (void)_rebuildWorkspaceSourceRootMap;
- (id)sourceRootMapFromImageAndSourceRootProvider:(CDUnknownBlockType)arg1;
- (id)_workspaceSearchRedirectedFilePath:(id)arg1;
- (id)workspaceSearchRedirectedFilePath:(id)arg1 workspaceItemsFilePathProvider:(CDUnknownBlockType)arg2;
- (id)redirectFilePath:(id)arg1 fromBuildTimeSourceRoot:(id)arg2 toWorkspaceSourceRoot:(id)arg3;
- (id)_sourceRootMapRedirectedFilePath:(id)arg1 imageName:(id)arg2;
- (id)_uncachedRedirectedDocumentURL:(id)arg1 imageName:(id)arg2;
- (id)redirectedDocumentURL:(id)arg1 imageName:(id)arg2;
- (id)redirectedTextDocumentLocation:(id)arg1 imageName:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1 sourceRootMap:(id)arg2;
- (id)initWithFileExistenceChecker:(CDUnknownBlockType)arg1 workspaceItemsFilePathProvider:(CDUnknownBlockType)arg2 imageAndSourceRootProvider:(CDUnknownBlockType)arg3 blueprintsChangeObservationProvider:(CDUnknownBlockType)arg4 sourceRootMap:(id)arg5;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
