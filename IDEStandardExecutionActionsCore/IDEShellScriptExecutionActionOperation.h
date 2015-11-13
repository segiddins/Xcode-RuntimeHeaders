//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEExecutionActionOperation.h>

@class DVTDisallowFinishToken, NSDictionary, NSString, NSTask;
@protocol DVTCancellationBlockCompletion;

@interface IDEShellScriptExecutionActionOperation : IDEExecutionActionOperation
{
    NSString *_scriptContent;
    NSString *_shellToInvoke;
    NSString *_scriptTempFile;
    NSTask *_shellTask;
    NSDictionary *_actionEnvironmentVariables;
    DVTDisallowFinishToken *_disallowFinishToken;
    id <DVTCancellationBlockCompletion> _cancellationToken;
}

- (void).cxx_destruct;
- (void)taskDidTerminate:(id)arg1;
- (void)main;
- (BOOL)_writeScriptFile;
- (void)_cleanUpScriptFile;
- (id)initWithScript:(id)arg1 shellToInvoke:(id)arg2 environmentVariables:(id)arg3;

@end

