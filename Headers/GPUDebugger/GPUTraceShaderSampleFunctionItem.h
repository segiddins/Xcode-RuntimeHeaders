//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceShaderDataItem.h>

@protocol DYPShaderSampleFunctionInfo;

@interface GPUTraceShaderSampleFunctionItem : GPUTraceShaderDataItem
{
    float _costPercentage;
    id <DYPShaderSampleFunctionInfo> _functionInfo;
}

+ (id)buildTreeFromSampleInfo:(id)arg1 functionInfo:(id)arg2 shaderItem:(id)arg3 parentItem:(id)arg4;
+ (id)buildTreeFromSampleInfo:(id)arg1 functionInfo:(id)arg2 shaderItem:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <DYPShaderSampleFunctionInfo> functionInfo; // @synthesize functionInfo=_functionInfo;
@property(nonatomic) float costPercentage; // @synthesize costPercentage=_costPercentage;
- (id)dataProvider;
- (id)APIItem;
- (void)addSampleInfo:(id)arg1;
- (id)initWithShaderItem:(id)arg1 functionInfo:(id)arg2 parent:(id)arg3;
- (id)navigableItem_contentDocumentLocation;
- (id)navigableItem_childRepresentedObjects;
- (BOOL)navigableItem_isLeaf;
- (id)navigableItem_image;
- (id)navigableItem_subtitle;

@end

