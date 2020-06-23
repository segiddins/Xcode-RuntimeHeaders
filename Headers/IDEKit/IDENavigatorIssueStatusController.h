//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTTableCellViewStatusController.h>

@class IDEActivityLogSection, IDENavigatorIssueStatusView;

@interface IDENavigatorIssueStatusController : DVTTableCellViewStatusController
{
    IDENavigatorIssueStatusView *_faultedView;
    id _target;
    SEL _action;
    IDEActivityLogSection *_issueLog;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IDEActivityLogSection *issueLog; // @synthesize issueLog=_issueLog;
- (void)setTarget:(id)arg1 andAction:(SEL)arg2;
- (id)view;
- (void)propagateState;

@end
