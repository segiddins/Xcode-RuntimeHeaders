//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSString, XCSIssueSuspectStrategy;

@interface XCSIssueAuthor : XCSObject
{
    XCSIssueSuspectStrategy *_strategy;
    NSString *_XCSBlueprintRepositoryID;
    NSString *_XCSCommitHash;
}

+ (id)issueAuthorWithIssueSuspectStrategy:(id)arg1 blueprintRepositoryID:(id)arg2 commitHash:(id)arg3 validationErrors:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *XCSCommitHash; // @synthesize XCSCommitHash=_XCSCommitHash;
@property(readonly, nonatomic) NSString *XCSBlueprintRepositoryID; // @synthesize XCSBlueprintRepositoryID=_XCSBlueprintRepositoryID;
@property(readonly, nonatomic) XCSIssueSuspectStrategy *strategy; // @synthesize strategy=_strategy;
- (BOOL)_validateIssueSuspectStrategy:(id)arg1 blueprintRepositoryID:(id)arg2 commitHash:(id)arg3 validationErrors:(id *)arg4;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithIssueSuspectStrategy:(id)arg1 blueprintRepositoryID:(id)arg2 commitHash:(id)arg3 validationErrors:(id *)arg4;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

@end

