//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEXCTestRunCoder-Protocol.h>

@interface IDEXCTestRunCoder_V1 : NSObject <IDEXCTestRunCoder>
{
}

- (id)testRunSpecificationsInDictionaryRepresentation:(id)arg1 removingPathPlaceholdersForTestRootPath:(id)arg2 derivedDataPath:(id)arg3 error:(id *)arg4;
- (id)coverageBuildableInfosInDictionaryRepresentation:(id)arg1 removingPathPlaceholdersForTestRootPath:(id)arg2 error:(id *)arg3;
- (void)insertTestRunSpecifications:(id)arg1 intoDictionaryRepresentation:(id)arg2 forTestRootPath:(id)arg3 derivedDataPath:(id)arg4;
- (void)insertCoverageBuildableInfos:(id)arg1 intoMetadataDictionary:(id)arg2 forTestRootPath:(id)arg3;
- (id)dictionaryRepresentationWithTestPlanInfo:(id)arg1 testRunSpecificationGroups:(id)arg2 codeCoverageBuildableInfos:(id)arg3 testRootPathPlaceholder:(id)arg4 derivedDataPathPlaceholder:(id)arg5;
- (id)testRunFileWithDictionaryRepresentation:(id)arg1 removingPathPlaceholdersForTestRootPath:(id)arg2 derivedDataPath:(id)arg3 error:(id *)arg4;

@end

