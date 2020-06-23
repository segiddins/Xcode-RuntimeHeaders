//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDETestable-Protocol.h>

@class DVTStackBacktrace, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol IDEBuildable, IDETestableDataSourceToken, IDETestableProvider;

@interface IDEStandardTestable : NSObject <IDETestable, DVTInvalidation>
{
    NSMutableSet *_subtests;
    NSMutableArray *_cachedArrangedSubtests;
    BOOL _isSearchingForTests;
    id <IDETestableDataSourceToken> _testableDataSourceToken;
    NSMutableDictionary *_testIDsByURL;
    NSMutableDictionary *_testsByID;
}

+ (id)_supportedPlatformsForBlueprint:(id)arg1 buildParameters:(id)arg2;
+ (id)_blueprintNameForTestingSpecifier:(id)arg1;
+ (id)_blueprintProviderRelativePathForTestingSpecifier:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, copy) NSMutableDictionary *testsByID; // @synthesize testsByID=_testsByID;
@property(readonly, copy) NSMutableDictionary *testIDsByURL; // @synthesize testIDsByURL=_testIDsByURL;
@property(retain) id <IDETestableDataSourceToken> testableDataSourceToken; // @synthesize testableDataSourceToken=_testableDataSourceToken;
@property BOOL isSearchingForTests; // @synthesize isSearchingForTests=_isSearchingForTests;
@property(readonly, copy) NSArray *arrangedSubtests; // @dynamic arrangedSubtests;
- (void)removeSubtest:(id)arg1;
- (void)_recursiveUnregisteringOfSubtest:(id)arg1;
- (void)_primitiveRemoveSubtest:(id)arg1;
- (void)_addSubtest:(id)arg1;
- (void)_primitiveAddSubtest:(id)arg1;
@property(readonly) BOOL canHaveSubtests;
- (BOOL)canHaveSubtestsForTestWithIdentifier:(id)arg1;
- (id)supertestForTestWithIdentifier:(id)arg1;
- (id)supertestForTestWithIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)nameForTestWithIdentifier:(id)arg1;
- (id)testForIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 fromSourceKitTest:(id)arg3;
- (id)testForIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)_removeTestIDFromURL:(id)arg1 testID:(id)arg2;
- (void)_updateLocationOfTest:(id)arg1 oldLocation:(id)arg2;
@property(readonly) NSSet *testFiles;
- (id)testsInFile:(id)arg1;
- (void)_updateExistingTests:(id)arg1 toMatchNewTestIdentifiersToTests:(id)arg2;
- (void)_setupTestDiscoveryWithWorkspace:(id)arg1 indexable:(id)arg2;
- (void)searchForTestsInWorkspace:(id)arg1;
- (id)targetApplicationBuildableForWorkspace:(id)arg1 withBuildParameters:(id)arg2;
- (id)parentBuildableInWorkspace:(id)arg1;
- (id)testHostBuildableInWorkspace:(id)arg1 buildParameters:(id)arg2;
- (id)testRunSpecificationWithTestingSpecifier:(id)arg1 forScheme:(id)arg2 buildParameters:(id)arg3 buildables:(id)arg4 error:(id *)arg5;
- (long long)testHostStyle;
@property(readonly) BOOL isUITest;
@property(readonly) id <IDEBuildable> primaryBuildable;
@property(readonly, copy) NSString *name;
@property(readonly) id <IDETestableProvider> testableProvider;
@property(readonly, copy) NSString *description;
- (void)cancelTestDiscovery;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1 indexable:(id)arg2;
- (id)init;
- (void)_initializeInstanceVariables;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, copy) NSMutableSet *mutableSubtests; // @dynamic mutableSubtests;
@property(readonly, copy) NSSet *subtests; // @dynamic subtests;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

