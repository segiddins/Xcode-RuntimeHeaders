//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class IDEActivityLogRecord, IDEResultBundleProcessor, IDESchemeActionsInvocationRecord, NSURL;

@interface IDEResultBundleDocument : IDEEditorDocument
{
    NSURL *_logURL;
    IDEActivityLogRecord *_logRecord;
    IDEResultBundleProcessor *_processor;
}

+ (id)keyPathsForValuesAffectingDisplayName;
+ (BOOL)autosavesInPlace;
+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
- (void).cxx_destruct;
@property(retain, nonatomic) IDEResultBundleProcessor *processor; // @synthesize processor=_processor;
@property(retain, nonatomic) IDEActivityLogRecord *logRecord; // @synthesize logRecord=_logRecord;
- (void)_processInvocationRecord:(id)arg1 fromFilePath:(id)arg2;
- (id)displayName;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *invocationRecord;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (int)readOnlyStatus;
- (BOOL)canSave;

@end

