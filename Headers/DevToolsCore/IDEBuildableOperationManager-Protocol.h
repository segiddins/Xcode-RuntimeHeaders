//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/NSObject-Protocol.h>

@class IDEBuildOperation, IDEBuilder, NSArray;

@protocol IDEBuildableOperationManager <NSObject>
+ (id)new;
- (NSArray *)builderPreflightFinishedForOperation:(IDEBuildOperation *)arg1;
- (void)builderWasAdded:(IDEBuilder *)arg1;
@end

