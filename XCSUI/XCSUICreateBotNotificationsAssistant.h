//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class XCSUIBotDefinition_NotificationsEditor;

@interface XCSUICreateBotNotificationsAssistant : IDEAssistant
{
    BOOL _viewIsInstalled;
    XCSUIBotDefinition_NotificationsEditor *_notificationsEditor;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)keyPathsForValuesAffectingCreateBotAssistantContext;
@property(retain, nonatomic) XCSUIBotDefinition_NotificationsEditor *notificationsEditor; // @synthesize notificationsEditor=_notificationsEditor;
@property(nonatomic) BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
- (void).cxx_destruct;
- (BOOL)alwaysShowFinish;
- (BOOL)canGoForward;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)finishButtonTitle;
- (id)nextAssistantIdentifier;
- (id)createBotAssistantContext;
- (void)primitiveInvalidate;
- (void)loadView;

@end

