//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEWorkspace;

@interface IDEWorkspaceUpgradeTasksController : NSObject
{
    IDEWorkspace *_workspace;
}

@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)processUpgradeTasks;
- (id)initWithWorkspace:(id)arg1;

@end

