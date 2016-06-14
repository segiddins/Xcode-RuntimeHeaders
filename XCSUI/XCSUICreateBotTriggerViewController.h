//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSStackView, NSViewController, XCSTrigger, XCSUICreateBotTriggerConditionsViewController;
@protocol XCSUICreateBotTriggerChildViewController, XCSUICreateBotTriggerViewControllerDelegate;

@interface XCSUICreateBotTriggerViewController : IDEViewController
{
    XCSTrigger *_trigger;
    NSViewController<XCSUICreateBotTriggerChildViewController> *_childViewController;
    XCSUICreateBotTriggerConditionsViewController *_conditionsViewController;
    id <XCSUICreateBotTriggerViewControllerDelegate> _delegate;
    NSStackView *_stackView;
}

@property __weak NSStackView *stackView; // @synthesize stackView=_stackView;
@property __weak id <XCSUICreateBotTriggerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) XCSUICreateBotTriggerConditionsViewController *conditionsViewController; // @synthesize conditionsViewController=_conditionsViewController;
@property(readonly) NSViewController<XCSUICreateBotTriggerChildViewController> *childViewController; // @synthesize childViewController=_childViewController;
@property(readonly) XCSTrigger *trigger; // @synthesize trigger=_trigger;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1;
- (BOOL)canRename;
- (void)remove:(id)arg1;
- (BOOL)canRemove;
- (id)titleForDisplay;
- (id)initWithTrigger:(id)arg1 botDefinitionContext:(id)arg2;

@end

