//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCBuildSupport/DVTInvalidation-Protocol.h>

@class DVTFilePath, DVTPlatform, IDEBuildOperationConfiguration, IDERunDestination, IDEScheme, IDEWorkspace, NSString;
@protocol IDEBlueprint, IDEBlueprintProvider;

@protocol IDEBuildSystemService <DVTInvalidation>
- (void)noteBuildFolderCleaned;
- (void)noteBlueprintProviderDidChange:(id <IDEBlueprintProvider>)arg1;
- (void)describeArchivableProductsWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)describeProductsForSchemeName:(NSString *)arg1 actionName:(NSString *)arg2 platform:(DVTPlatform *)arg3 completionBlock:(void (^)(NSArray *, NSError *))arg4;
- (void)describeSchemesWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)generatePreviewInfoForScheme:(IDEScheme *)arg1 runDestination:(IDERunDestination *)arg2 blueprint:(id <IDEBlueprint>)arg3 sourceFilePath:(DVTFilePath *)arg4 thunkVariantSuffix:(NSString *)arg5 completionBlock:(void (^)(NSArray *, NSError *))arg6;
- (void)generatePreviewInfoForBuildOperationConfiguration:(IDEBuildOperationConfiguration *)arg1 blueprint:(id <IDEBlueprint>)arg2 sourceFilePath:(DVTFilePath *)arg3 thunkVariantSuffix:(NSString *)arg4 completionBlock:(void (^)(NSArray *, NSError *))arg5;
- (void)generateIndexingInfoForBlueprint:(id <IDEBlueprint>)arg1 completionBlock:(void (^)(NSDictionary *, NSError *))arg2;
@property(nonatomic, readonly) IDEWorkspace *workspace;
@property(nonatomic, readonly) Class buildOperationClass;
@property(nonatomic, readonly) BOOL isModern;
@end

