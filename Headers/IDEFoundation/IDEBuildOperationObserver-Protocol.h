//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDEBuildOperation, IDEWorkspace;

@protocol IDEBuildOperationObserver <NSObject>
- (void)buildOperationWasSlowerThanExpected:(IDEBuildOperation *)arg1 forWorkspace:(IDEWorkspace *)arg2;
- (void)buildOperationWasCompleted:(IDEBuildOperation *)arg1 forWorkspace:(IDEWorkspace *)arg2;
@end

