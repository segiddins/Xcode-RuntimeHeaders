//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class DVTObservingToken, IDEActivityReport;

@interface IDEWorkspaceActivityReporter : IDEActivityReporter
{
    DVTObservingToken *_activityObserverToken;
    DVTObservingToken *_workspaceNameObserverToken;
    IDEActivityReport *_activeReport;
}

- (void).cxx_destruct;
- (id)_title;
- (void)updateActivity;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end

