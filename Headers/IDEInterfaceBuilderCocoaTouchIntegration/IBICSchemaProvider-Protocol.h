//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/NSObject-Protocol.h>

@class IBICSchema, NSString;

@protocol IBICSchemaProvider <NSObject>
- (void)registerSchemaComponents:(IBICSchema *)arg1;
- (void)captureExistingSlotComponents:(IBICSchema *)arg1;
- (void)registerSlotComponents:(IBICSchema *)arg1;
- (void)registerClasses:(IBICSchema *)arg1;
- (double)precedence;

@optional
+ (void)setContextDataFromCallingHost:(id)arg1;
+ (id)contextDataForRemoteTool;
+ (BOOL)supportsRemoteToolsTargetingPlatformNamed:(NSString *)arg1;
- (void)registerSuggestionSets:(IBICSchema *)arg1;
- (void)registerFileTypes:(IBICSchema *)arg1;
@end

