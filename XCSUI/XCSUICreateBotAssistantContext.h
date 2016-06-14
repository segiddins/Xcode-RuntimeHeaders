//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistantContext.h>

@class DVTSourceControlWorkspaceBlueprint, IDEScheme, NSArray, NSError, NSMapTable, NSSet, NSString, NSURL, XCSBot, XCSService, XCSToolchain, XCSUIBotDefinitionContext, XCSUICreateBotAssistantContextWindowController;

@interface XCSUICreateBotAssistantContext : IDEAssistantContext
{
    XCSBot *_bot;
    BOOL _preserveExistingServerBlueprint;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    XCSUICreateBotAssistantContextWindowController *_assistantContextWindowController;
    NSArray *_allowedAssistantIdentifiers;
}

@property(readonly, nonatomic) BOOL preserveExistingServerBlueprint; // @synthesize preserveExistingServerBlueprint=_preserveExistingServerBlueprint;
@property(retain, nonatomic) NSArray *allowedAssistantIdentifiers; // @synthesize allowedAssistantIdentifiers=_allowedAssistantIdentifiers;
@property(retain, nonatomic) XCSUICreateBotAssistantContextWindowController *assistantContextWindowController; // @synthesize assistantContextWindowController=_assistantContextWindowController;
@property(retain, nonatomic) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL schemeSupportsAnalyzeAction;
@property(readonly, nonatomic) BOOL schemeSupportsTestAction;
@property(readonly, nonatomic) BOOL schemeSupportsArchiveAction;
@property(readonly, nonatomic) NSSet *preflightIgnoredRepositoryIdentifiers;
@property(readonly, nonatomic) long long preflightRepositoryAuthenticationStatus;
@property(readonly, nonatomic) BOOL isInvalidTestingDestinationType;
@property(readonly, copy, nonatomic) NSString *defaultBotName;
@property(readonly, copy, nonatomic) NSString *botName;
@property(readonly, nonatomic) BOOL needsCommitAndPushUponCompletion;
@property(readonly, nonatomic) BOOL creationComplete;
@property(readonly, copy, nonatomic) NSArray *selectedTestingDeviceIDs;
@property(readonly, nonatomic) BOOL schemeSupportsMac32BitArchitecture;
@property(readonly, nonatomic) BOOL schemeSupportsDevices;
@property(readonly, nonatomic) BOOL schemeSupportsMac;
@property(readonly, nonatomic) BOOL exportsProductFromArchive;
@property(readonly, nonatomic) BOOL performsArchiveAction;
@property(readonly, nonatomic) unsigned long long codeCoveragePreference;
@property(readonly, nonatomic) BOOL performsTestAction;
@property(readonly, nonatomic) BOOL performsAnalyzeAction;
@property(readonly, nonatomic) unsigned long long defaultTestingDestinationType;
@property(readonly, nonatomic) unsigned long long testingDestinationType;
@property(readonly, nonatomic) XCSToolchain *overrideToolchain;
@property(readonly, nonatomic) NSString *buildConfiguration;
@property(readonly, copy, nonatomic) NSArray *triggers;
@property(readonly, nonatomic) unsigned long long buildsFromCleanSchedule;
@property(readonly, nonatomic) unsigned long long minutesAfterHourToIntegrate;
@property(readonly, nonatomic) unsigned long long hourOfIntegration;
@property(readonly, nonatomic) long long weeklyScheduleDay;
@property(readonly, nonatomic) unsigned long long periodicScheduleInterval;
@property(readonly, nonatomic) unsigned long long scheduleType;
@property(readonly, nonatomic) IDEScheme *scheme;
@property(readonly, copy, nonatomic) NSString *existingBotID;
@property(readonly, nonatomic) NSMapTable *workingCopiesToRemoteRepositories;
@property(readonly, nonatomic) XCSService *service;
@property(readonly, nonatomic) DVTSourceControlWorkspaceBlueprint *updatedSCMWorkspaceBlueprint;
@property(readonly, nonatomic) DVTSourceControlWorkspaceBlueprint *localSCMWorkspaceBlueprint;
@property(readonly, copy, nonatomic) NSURL *sshKeyFolderURL;
@property(readonly, copy, nonatomic) NSError *createEditBotError;
@property(readonly, nonatomic) BOOL hasSufficientSCMInfoToCreateBot;
@property(readonly, nonatomic) BOOL hasSufficientBuildConfigurationInfoToCreateBot;
@property(readonly, nonatomic) BOOL hasSufficientSchemeInfoToCreateBot;
@property(readonly, nonatomic) XCSBot *bot;
@property(readonly, nonatomic) NSString *initialAssistantIdentifier;
- (BOOL)shouldDisplayAssistantWithIdentifier:(id)arg1;
- (id)workspaceTabController;
- (id)workspace;
- (id)initWithWorkspaceTabController:(id)arg1 editingMode:(long long)arg2 bot:(id)arg3;

@end

