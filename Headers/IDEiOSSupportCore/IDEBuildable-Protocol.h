//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEiOSSupportCore/DVTInvalidation-Protocol.h>
#import <IDEiOSSupportCore/NSObject-Protocol.h>

@class DVTSearchPath, IDEBuildOperationQueueSet, IDEBuildParameters, IDEBuilder, IDEEntityIdentifier, IDEExecutionEnvironment, IDEProductType, NSArray, NSSet, NSString;
@protocol IDEBlueprint, IDEBuildableOperationManager;

@protocol IDEBuildable <DVTInvalidation, NSObject>
@property(readonly, copy) NSString *legacyIdentifier;
@property(readonly) NSString *productModuleName;
@property(readonly) NSSet *namesOfLinkedBinaries;
@property(readonly) NSString *toolTip;
@property(readonly) NSString *displayName;
@property(readonly) id <IDEBlueprint> blueprint;
@property(readonly, copy) IDEEntityIdentifier *entityIdentifier;
@property(readonly, copy) NSString *buildableIdentifier;
@property(readonly, copy) NSString *productTypeIdentifier;
- (IDEBuilder *)createBuilderForBuildCommand:(long long)arg1 withBuildTaskQueueSet:(IDEBuildOperationQueueSet *)arg2 parameters:(IDEBuildParameters *)arg3 buildOnlyTheseFiles:(NSArray *)arg4 restorePersistedBuildResults:(BOOL)arg5 withManager:(id <IDEBuildableOperationManager>)arg6;
- (NSArray *)implicitDependenciesForBuildParameters:(IDEBuildParameters *)arg1 executionEnvironment:(IDEExecutionEnvironment *)arg2 returningMessages:(id *)arg3;
- (NSArray *)directDependencies;
- (NSArray *)orderedRecursiveDependenciesIncludingSelf:(BOOL)arg1;
- (NSArray *)orderedRecursiveDependenciesIncludingSelf:(BOOL)arg1 includingPackages:(BOOL)arg2;
- (DVTSearchPath *)toolSearchPathWithBuildParameters:(IDEBuildParameters *)arg1;
- (NSString *)absolutePathByEvaluatingBuildSettingExpressionString:(NSString *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (NSString *)stringByEvaluatingBuildSettingExpressionString:(NSString *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (NSArray *)evaluatedStringListValueForBuildSetting:(NSString *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (NSString *)evaluatedStringValueForBuildSetting:(NSString *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (NSArray *)allBuildSettingNamesWithBuildParameters:(IDEBuildParameters *)arg1;
- (IDEProductType *)productTypeWithBuildParameters:(IDEBuildParameters *)arg1;

@optional
- (Class)buildOperationManagerClass;
@end

