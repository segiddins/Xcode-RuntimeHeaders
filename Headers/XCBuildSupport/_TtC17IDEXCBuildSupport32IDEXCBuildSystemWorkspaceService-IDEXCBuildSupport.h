//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCBuildSupport/_TtC17IDEXCBuildSupport32IDEXCBuildSystemWorkspaceService.h>

@interface _TtC17IDEXCBuildSupport32IDEXCBuildSystemWorkspaceService (IDEXCBuildSupport)
- (void)noteBuildFolderCleaned;
- (void)noteBlueprintProviderDidChange:(id)arg1;
- (void)generatePreviewInfoForScheme:(id)arg1 runDestination:(id)arg2 blueprint:(id)arg3 sourceFilePath:(id)arg4 thunkVariantSuffix:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)describeArchivableProductsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)describeProductsForSchemeName:(id)arg1 actionName:(id)arg2 platform:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)describeSchemesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)generatePreviewInfoForBuildOperationConfiguration:(id)arg1 blueprint:(id)arg2 sourceFilePath:(id)arg3 thunkVariantSuffix:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)generateIndexingInfoForBlueprint:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(nonatomic, readonly) Class buildOperationClass;
@property(nonatomic, readonly) BOOL isModern;
@end
