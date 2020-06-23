//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

#import <XCSUI/NSControlTextEditingDelegate-Protocol.h>

@class NSString, XCSUIBotDefinition_SchedulingEditor;

@interface XCSUICreateBotSchedulingAssistant : IDEAssistant <NSControlTextEditingDelegate>
{
    BOOL _viewIsInstalled;
    XCSUIBotDefinition_SchedulingEditor *_schedulingEditor;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)keyPathsForValuesAffectingCreateBotAssistantContext;
@property(retain) XCSUIBotDefinition_SchedulingEditor *schedulingEditor; // @synthesize schedulingEditor=_schedulingEditor;
@property BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
- (void).cxx_destruct;
- (BOOL)canGoForward;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)previousAssistantIdentifier;
- (id)nextAssistantIdentifier;
- (id)createBotAssistantContext;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

