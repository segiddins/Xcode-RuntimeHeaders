//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESwiftPackageSupport/DVTInvalidation-Protocol.h>
#import <IDESwiftPackageSupport/IDETestContainer-Protocol.h>
#import <IDESwiftPackageSupport/NSObject-Protocol.h>

@class IDEBuildParameters, IDEScheme, IDETest, IDETestRunSpecification, IDEWorkspace, NSArray, NSSet, NSString, NSURL;
@protocol IDEBuildable, IDEBuildableProduct, IDETestableProvider, _TtP13IDEFoundation19IDETestingSpecifier_;

@protocol IDETestable <IDETestContainer, DVTInvalidation, NSObject>
- (void)removeSubtest:(IDETest *)arg1;
- (BOOL)canHaveSubtestsForTestWithIdentifier:(NSString *)arg1;
- (IDETest *)supertestForTestWithIdentifier:(NSString *)arg1;
- (NSString *)nameForTestWithIdentifier:(NSString *)arg1;
- (NSSet *)testsInFile:(NSURL *)arg1;
- (IDETest *)testForIdentifier:(NSString *)arg1 createIfNeeded:(BOOL)arg2;
- (id <IDEBuildable>)parentBuildableInWorkspace:(IDEWorkspace *)arg1;
- (id <IDEBuildableProduct>)targetApplicationBuildableForWorkspace:(IDEWorkspace *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (id <IDEBuildableProduct>)testHostBuildableInWorkspace:(IDEWorkspace *)arg1 buildParameters:(IDEBuildParameters *)arg2;
@property(nonatomic, readonly) id <IDEBuildable> primaryBuildable;
@property(nonatomic, readonly) BOOL isSearchingForTests;
- (void)searchForTestsInWorkspace:(IDEWorkspace *)arg1;
- (IDETestRunSpecification *)testRunSpecificationWithTestingSpecifier:(id <_TtP13IDEFoundation19IDETestingSpecifier_>)arg1 forScheme:(IDEScheme *)arg2 buildParameters:(IDEBuildParameters *)arg3 buildables:(NSArray *)arg4 error:(id *)arg5;
@property(nonatomic, readonly) NSSet *supportedPlatformsForParallelization;
@property(nonatomic, readonly) BOOL isUITest;
@property(nonatomic, readonly) NSSet *testFiles;
@property(nonatomic, readonly) id <IDETestableProvider> testableProvider;
@end

