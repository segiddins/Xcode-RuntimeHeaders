//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDECodeCoverageProviding-Protocol.h>

@class IDEScheme, NSArray;
@protocol IDECodeCoverageBuildableResolving;

@protocol IDECodeCoverageBuildableProviding <IDECodeCoverageProviding>
- (NSArray *)coverageBuildableInfosForScheme:(IDEScheme *)arg1 buildableResolver:(id <IDECodeCoverageBuildableResolving>)arg2 buildParameterVariants:(NSArray *)arg3;
@end

