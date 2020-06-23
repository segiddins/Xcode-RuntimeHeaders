//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEOpenQuicklyResultAggregator.h>

@class IDEWorkspace;

@interface IDEOpenQuicklyAbstractWorkspaceResultProvider : IDEOpenQuicklyResultAggregator
{
    IDEWorkspace *_workspace;
}

+ (BOOL)sendsIncompleteResults;
+ (BOOL)isEnabled;
+ (long long)aggregationCutoff;
- (void).cxx_destruct;
- (void)generateGeneratorsWithCompletionGroup:(id)arg1;
- (void)generateGeneratorsWithCompletionGroup:(id)arg1 forWorkspace:(id)arg2;
- (id)initWithWorkspace:(id)arg1 queryContext:(id)arg2 consumer:(id)arg3;

@end

