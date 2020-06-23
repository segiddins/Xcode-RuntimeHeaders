//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSString;

@interface XCSBotIssueStreakRecord : XCSObject
{
    NSString *_integrationID;
    unsigned long long _integrationNumber;
    NSString *_message;
    NSArray *_commits;
}

+ (id)issueStreakRecordWithIntegrationID:(id)arg1 integrationNumber:(unsigned long long)arg2 message:(id)arg3 commits:(id)arg4 validationErrors:(id *)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *commits; // @synthesize commits=_commits;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) unsigned long long integrationNumber; // @synthesize integrationNumber=_integrationNumber;
@property(readonly, nonatomic) NSString *integrationID; // @synthesize integrationID=_integrationID;
- (BOOL)_validateIntegrationID:(id)arg1 integrationNumber:(unsigned long long)arg2 message:(id)arg3 commits:(id)arg4 validationErrors:(id *)arg5;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithIntegrationID:(id)arg1 integrationNumber:(unsigned long long)arg2 message:(id)arg3 commits:(id)arg4 validationErrors:(id *)arg5;

@end

