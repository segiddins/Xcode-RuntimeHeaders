//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBCocoaTouchToolManager.h>

@class IBPlatformToolDVTTaskExecutionContext;

@interface IBiOSMacToolManager : IBCocoaTouchToolManager
{
    IBPlatformToolDVTTaskExecutionContext *_sharedExecutionContext;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)executionContextForDescription:(id)arg1 error:(id *)arg2;
- (id)contextForLaunchingToolWithDescription:(id)arg1 error:(id *)arg2;

@end

