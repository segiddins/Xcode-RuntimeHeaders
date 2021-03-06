//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DVTSourceControlWorkspaceBlueprint, NSArray, NSTokenField, NSView, XCSTriggerSCMOptions, XCSUIBotDefinitionContext;

@interface XCSUITriggerCommitterOptionsViewController : NSViewController
{
    DVTSourceControlWorkspaceBlueprint *_blueprint;
    NSArray *_allowedDomainNames;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    NSArray *_repositoryOptions;
    NSTokenField *_allowedDomainNamesTokenField;
    NSView *_domainNamesView;
}

- (void).cxx_destruct;
@property __weak NSView *domainNamesView; // @synthesize domainNamesView=_domainNamesView;
@property __weak NSTokenField *allowedDomainNamesTokenField; // @synthesize allowedDomainNamesTokenField=_allowedDomainNamesTokenField;
@property(retain) NSArray *repositoryOptions; // @synthesize repositoryOptions=_repositoryOptions;
@property(retain, nonatomic) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
@property(retain, nonatomic) NSArray *allowedDomainNames; // @synthesize allowedDomainNames=_allowedDomainNames;
@property(retain) DVTSourceControlWorkspaceBlueprint *blueprint; // @synthesize blueprint=_blueprint;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (BOOL)validateDomainName:(id)arg1;
- (id)validateDomainNames:(id)arg1;
- (void)ok:(id)arg1;
- (void)cancel:(id)arg1;
@property(retain) XCSTriggerSCMOptions *scmOptions;
- (void)viewDidLoad;

@end

