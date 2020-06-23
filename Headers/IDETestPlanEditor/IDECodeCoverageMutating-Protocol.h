//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDETestPlanEditor/IDECodeCoverageProviding-Protocol.h>

@class IDESchemeBuildableReference, NSArray;

@protocol IDECodeCoverageMutating <IDECodeCoverageProviding>
- (void)removeCodeCoverageTarget:(IDESchemeBuildableReference *)arg1;
- (void)addCodeCoverageTarget:(IDESchemeBuildableReference *)arg1;
@property(nonatomic, readonly) NSArray *codeCoverageTargets;
@property(nonatomic) BOOL onlyGenerateCoverageForSpecifiedTargets;
@property(nonatomic) BOOL codeCoverageEnabled;
- (BOOL)isCodeCoverageEnabled;
@end

