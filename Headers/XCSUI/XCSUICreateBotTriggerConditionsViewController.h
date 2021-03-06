//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSTextField, XCSTrigger;

@interface XCSUICreateBotTriggerConditionsViewController : NSViewController
{
    XCSTrigger *_trigger;
    NSButton *_successCheckbox;
    NSButton *_issuesAreResolvedCheckbox;
    NSTextField *_actionLabel;
    NSButton *_buildErrorCheckbox;
    NSButton *_warningCheckbox;
    NSButton *_analysisCheckbox;
    NSButton *_testCheckbox;
}

- (void).cxx_destruct;
@property __weak NSButton *testCheckbox; // @synthesize testCheckbox=_testCheckbox;
@property __weak NSButton *analysisCheckbox; // @synthesize analysisCheckbox=_analysisCheckbox;
@property __weak NSButton *warningCheckbox; // @synthesize warningCheckbox=_warningCheckbox;
@property __weak NSButton *buildErrorCheckbox; // @synthesize buildErrorCheckbox=_buildErrorCheckbox;
@property __weak NSTextField *actionLabel; // @synthesize actionLabel=_actionLabel;
@property __weak NSButton *issuesAreResolvedCheckbox; // @synthesize issuesAreResolvedCheckbox=_issuesAreResolvedCheckbox;
@property __weak NSButton *successCheckbox; // @synthesize successCheckbox=_successCheckbox;
@property(retain, nonatomic) XCSTrigger *trigger; // @synthesize trigger=_trigger;
- (long long)_setCheckboxState:(BOOL)arg1;
- (BOOL)_getCheckboxState:(long long)arg1;
- (void)allowAllIssuesResolvedCondition:(BOOL)arg1;
- (void)showConditionsForEmailReports;
- (void)showConditionsForNewIssueEmails;
- (void)updateView;
- (void)viewDidLoad;
- (void)checkBoxHasChanged:(id)arg1;

@end

