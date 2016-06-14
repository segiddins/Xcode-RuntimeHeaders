//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEScriptingElement.h>

@class IDESchemeActionsInvocationRecord, NSError, NSMutableArray, NSString;

@interface IDEScriptingSchemeActionResult : IDEScriptingElement
{
    BOOL _didCancelEnqueuingAction;
    NSError *_error;
    IDESchemeActionsInvocationRecord *_invocationRecord;
    NSString *_identifier;
    NSMutableArray *_buildErrors;
    NSMutableArray *_buildWarnings;
    NSMutableArray *_analyzerIssues;
    NSMutableArray *_testFailures;
}

@property(readonly) NSMutableArray *testFailures; // @synthesize testFailures=_testFailures;
@property(readonly) NSMutableArray *analyzerIssues; // @synthesize analyzerIssues=_analyzerIssues;
@property(readonly) NSMutableArray *buildWarnings; // @synthesize buildWarnings=_buildWarnings;
@property(readonly) NSMutableArray *buildErrors; // @synthesize buildErrors=_buildErrors;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) IDESchemeActionsInvocationRecord *invocationRecord; // @synthesize invocationRecord=_invocationRecord;
@property BOOL didCancelEnqueuingAction; // @synthesize didCancelEnqueuingAction=_didCancelEnqueuingAction;
@property(retain) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)sdefSupport_testFailures;
- (id)sdefSupport_analyzerIssues;
- (id)sdefSupport_buildWarnings;
- (id)sdefSupport_buildErrors;
- (void)_updateMyIssues:(id)arg1 fromSummaries:(id)arg2 forAccessor:(id)arg3;
- (id)sdefSupport_errorText;
- (id)sdefSupport_actionLog;
- (id)sdefSupport_buildLog;
- (id)_logFromBuildInsteadOfAction:(BOOL)arg1;
- (BOOL)sdefSupport_completed;
- (unsigned int)sdefSupport_status;
- (id)objectSpecifier;
- (id)scriptingID;
- (id)initWithInvocationRecord:(id)arg1 container:(id)arg2 andAccessor:(id)arg3;
- (id)init;

@end

