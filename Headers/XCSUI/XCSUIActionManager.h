//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSUI/IDEContinuousIntegrationActionManager-Protocol.h>

@class DVTObservingToken, NSString, XCSUIAddIntegrationToNavigator, XCSUIBotDefinitionEditorWindowController;

@interface XCSUIActionManager : NSObject <IDEContinuousIntegrationActionManager>
{
    DVTObservingToken *_dataSourceIdleObserver;
    NSString *_serviceForHostName_hostName;
    CDUnknownBlockType _botMatchingID_completionBlock;
    NSString *_botMatchingID_lookingForBotID;
    XCSUIAddIntegrationToNavigator *_addIntegrationHelper;
    XCSUIBotDefinitionEditorWindowController *_definitionEditorWindowController;
}

+ (BOOL)canUserViewBotsOnService:(id)arg1;
@property(retain) XCSUIBotDefinitionEditorWindowController *definitionEditorWindowController; // @synthesize definitionEditorWindowController=_definitionEditorWindowController;
- (void).cxx_destruct;
- (id)alertForFailureToHandleXCBotURLRequestOnHost:(id)arg1;
- (void)showBot:(id)arg1 window:(id)arg2;
- (void)showIntegrationWithID:(id)arg1 bot:(id)arg2 window:(id)arg3;
- (void)_handleCommitAndIntegrateOptionsWithBotDefinitionContext:(id)arg1 window:(id)arg2;
- (id)webURLForIntegration:(id)arg1;
- (id)webURLForBot:(id)arg1;
- (BOOL)canUserCreateAndDeleteBotsOnService:(id)arg1;
- (id)projectNameInBlueprintForBot:(id)arg1;
- (void)botMatchingID:(id)arg1 withTimeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_botMatchingID:(id)arg1;
- (void)fetchBotForBotId:(id)arg1 onService:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)fetchMostRecentIntegrationForBot:(id)arg1 onService:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)fetchIntegrationForId:(id)arg1 onService:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)populateIntegrations:(unsigned long long)arg1 forBot:(id)arg2 andIntegrationId:(id)arg3 onService:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (void)deleteIntegration:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)cancelIntegration:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)deleteBot:(id)arg1 workspace:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)integrateBot:(id)arg1 cleanFirst:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)integrationsForBot:(id)arg1 max:(unsigned long long)arg2 sortNewestFirst:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)integrationsForBot:(id)arg1 inRange:(struct _NSRange)arg2 sortNewestFirst:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showBotEditorForWorkspaceTabController:(id)arg1 bot:(id)arg2 editingMode:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

