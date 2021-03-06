//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class NSString;

@interface XCSUIIntegrationReportTranscriptAssistantDocument : IDEEditorDocument
{
    NSString *_invocationRecordFilePath;
    NSString *_testIdentifier;
}

+ (BOOL)autosavesInPlace;
+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *testIdentifier; // @synthesize testIdentifier=_testIdentifier;
@property(retain, nonatomic) NSString *invocationRecordFilePath; // @synthesize invocationRecordFilePath=_invocationRecordFilePath;
- (id)testIdentifierFromURL:(id)arg1;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (int)readOnlyStatus;
- (BOOL)canSave;

@end

