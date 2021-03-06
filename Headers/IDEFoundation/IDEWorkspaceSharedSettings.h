//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEWorkspaceSettings.h>

@class DVTObservingToken;

@interface IDEWorkspaceSharedSettings : IDEWorkspaceSettings
{
    DVTObservingToken *_workspaceLoadingObservingToken;
}

+ (BOOL)automaticallyNotifiesObserversForPreviewsEnabled;
- (void).cxx_destruct;
@property BOOL disableBuildSystemDeprecationWarning;
@property BOOL previewsEnabled;
- (void)setBuildSystemType:(int)arg1;
- (void)primitiveInvalidate;
- (void)_propagateBuildSystemSelectionForWorkspace:(id)arg1;
- (id)initWithWorkspace:(id)arg1;
- (void)saveSettings;
@property BOOL autocreateContextsIfNeeded;
- (id)settingsOwnership;

@end

