//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEWorkspace.h>

@class _TtC22IDESwiftPackageSupport17IDESwiftWorkspace, _TtC22IDESwiftPackageSupport43PackageGraphOperationActivityViewerReporter;

@interface IDEWorkspace (IDESwiftPackageSupport)
+ (id)keyPathsForValuesAffectingPackageActivityViewerReporter;
+ (id)computePackageIdentityOfURL:(id)arg1;
@property(nonatomic, readonly) _TtC22IDESwiftPackageSupport43PackageGraphOperationActivityViewerReporter *packageActivityViewerReporter;
- (void)endSwiftPackagePreflightResolution:(id)arg1;
- (BOOL)beginSwiftPackagePreflightResolution:(id)arg1:(id)arg2 error:(id *)arg3;
- (id)latestSwiftPackageVersionFromTags:(id)arg1;
- (void)notePackageGraphNeedsReloading;
- (void)updateToLatestPackageVersions;
- (void)resolvePackageVersions;
- (void)resetPackageDependencyGraph;
- (void)createSourcePackageSupportContext;
@property(nonatomic, retain) _TtC22IDESwiftPackageSupport17IDESwiftWorkspace *packageManagerWorkspace;
@end

