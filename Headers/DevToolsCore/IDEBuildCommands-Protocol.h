//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/NSObject-Protocol.h>

@class IDEActivityLogSection, NSArray, NSString;

@protocol IDEBuildCommands <NSObject>
@property(readonly) BOOL canRunInParallelWithOtherCommands;
@property(readonly) BOOL needsToRun;
- (IDEActivityLogSection *)activityLogSectionForCachedOutputs;
- (void)prepareForRunning;
- (BOOL)wasAnyInputNodeCreatedInBuildWithIdentifier:(NSString *)arg1;
- (BOOL)hasVirtualOutputNode;
- (NSArray *)ruleInfo;
@end

