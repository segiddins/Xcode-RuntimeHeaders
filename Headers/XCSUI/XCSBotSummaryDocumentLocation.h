//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class IDEWorkspace, XCSIntegrationIssue;

@interface XCSBotSummaryDocumentLocation : DVTDocumentLocation
{
    unsigned long long _selectedArea;
    XCSIntegrationIssue *_issue;
    IDEWorkspace *_workspace;
}

- (void).cxx_destruct;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly, copy) XCSIntegrationIssue *issue; // @synthesize issue=_issue;
@property(readonly) unsigned long long selectedArea; // @synthesize selectedArea=_selectedArea;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 selectedArea:(unsigned long long)arg3 issue:(id)arg4 workspace:(id)arg5;

@end

