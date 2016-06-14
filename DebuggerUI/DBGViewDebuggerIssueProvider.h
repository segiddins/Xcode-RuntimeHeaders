//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEIssueProvider.h>

@class DVTNotificationToken, NSMapTable;

@interface DBGViewDebuggerIssueProvider : IDEIssueProvider
{
    DVTNotificationToken *_viewDebuggerIssueObserverToken;
    NSMapTable *_debugSessionStateObserverTokens;
    NSMapTable *_debugSessionCoalescedStateObserverTokens;
}

+ (int)providerType;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)imageForIssueTypeIdentifier:(id)arg1 ofSize:(long long)arg2;
- (id)ideModelObjectTypeIdentifier;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)_clearRuntimeIssuesForViewDebugger:(id)arg1;
- (void)_clearRuntimeIssuesForViewDebuggerOfDebugSession:(id)arg1;
- (void)_stopObservingDebugSessionIfNecessary:(id)arg1;
- (void)_startObservingDebugSessionIfNecessary:(id)arg1;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;

@end

