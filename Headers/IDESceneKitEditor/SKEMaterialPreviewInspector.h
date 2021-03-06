//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESceneKitEditor/SKEInspectorViewController.h>

@class DVTDelayedInvocation, NSImageView, NSMutableArray, SCNRenderer, SKEMaterialPreviewDescription;

@interface SKEMaterialPreviewInspector : SKEInspectorViewController
{
    SCNRenderer *_previewRenderer;
    NSImageView *_imageView;
    NSMutableArray *_observingTokens;
    DVTDelayedInvocation *_previewRefreshInvocation;
    SKEMaterialPreviewDescription *_pbrPreviewDescription;
    SKEMaterialPreviewDescription *_nonPBRreviewDescription;
}

+ (id)nonPBRPreviewDescription;
+ (id)pbrPreviewDescription;
+ (id)previewForMaterial:(id)arg1 withLightingEnvironmentContents:(id)arg2 document:(id)arg3 size:(struct CGSize)arg4;
+ (void)configurePreviewDescription:(id)arg1 withMaterial:(id)arg2 document:(id)arg3 withLightingEnvironmentContents:(id)arg4;
- (void).cxx_destruct;
- (void)refreshPreview:(id)arg1;
- (void)schedulePreviewRefresh;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

