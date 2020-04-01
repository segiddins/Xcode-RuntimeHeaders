//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDETestContainer-Protocol.h>
#import <IDEKit/NSObject-Protocol.h>

@class IDEBuildParameters, IDEScheme, IDETest, IDETestRunSpecification, IDEWorkspace, NSArray, NSSet, NSString, NSURL;
@protocol IDEBuildable, IDEBuildableProduct, IDETestableProvider, IDETestingSpecifier;

@protocol IDETestable <IDETestContainer, DVTInvalidation, NSObject>
@property(readonly) id <IDEBuildable> primaryBuildable;
@property(readonly) BOOL isSearchingForTests;
@property(readonly) NSSet *supportedPlatformsForParallelization;
@property(readonly) BOOL isUITest;
@property(readonly) NSSet *testFiles;
@property(readonly) id <IDETestableProvider> testableProvider;
- (void)removeSubtest:(IDETest *)arg1;
- (BOOL)canHaveSubtestsForTestWithIdentifier:(NSString *)arg1;
- (IDETest *)supertestForTestWithIdentifier:(NSString *)arg1;
- (NSString *)nameForTestWithIdentifier:(NSString *)arg1;
- (NSSet *)testsInFile:(NSURL *)arg1;
- (IDETest *)testForIdentifier:(NSString *)arg1 createIfNeeded:(BOOL)arg2;
- (id <IDEBuildable>)parentBuildableInWorkspace:(IDEWorkspace *)arg1;
- (id <IDEBuildableProduct>)targetApplicationBuildableForWorkspace:(IDEWorkspace *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (id <IDEBuildableProduct>)testHostBuildableInWorkspace:(IDEWorkspace *)arg1 buildParameters:(IDEBuildParameters *)arg2;
- (void)searchForTestsInWorkspace:(IDEWorkspace *)arg1;
- (IDETestRunSpecification *)testRunSpecificationWithTestingSpecifier:(id <IDETestingSpecifier>)arg1 forScheme:(IDEScheme *)arg2 buildParameters:(IDEBuildParameters *)arg3 buildables:(NSArray *)arg4 error:(id *)arg5;
@end

