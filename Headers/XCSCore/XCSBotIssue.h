//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSString;

@interface XCSBotIssue : XCSObject
{
    NSString *_botID;
    unsigned long long _type;
    NSString *_issueType;
    NSString *_message;
    NSString *_target;
    NSString *_testCase;
    NSString *_documentFilePath;
    NSString *_fixItType;
    NSArray *_streaks;
}

+ (id)botIssueWithBotID:(id)arg1 type:(unsigned long long)arg2 issueType:(id)arg3 message:(id)arg4 target:(id)arg5 testCase:(id)arg6 documentFilePath:(id)arg7 fixItType:(id)arg8 streaks:(id)arg9 validationErrors:(id *)arg10;
@property(readonly, nonatomic) NSArray *streaks; // @synthesize streaks=_streaks;
@property(readonly, nonatomic) NSString *fixItType; // @synthesize fixItType=_fixItType;
@property(readonly, nonatomic) NSString *documentFilePath; // @synthesize documentFilePath=_documentFilePath;
@property(readonly, nonatomic) NSString *testCase; // @synthesize testCase=_testCase;
@property(readonly, nonatomic) NSString *target; // @synthesize target=_target;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *issueType; // @synthesize issueType=_issueType;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *botID; // @synthesize botID=_botID;
- (void).cxx_destruct;
- (BOOL)_validateBotID:(id)arg1 type:(unsigned long long)arg2 issueType:(id)arg3 message:(id)arg4 target:(id)arg5 testCase:(id)arg6 documentFilePath:(id)arg7 fixItType:(id)arg8 streaks:(id)arg9 validationErrors:(id *)arg10;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithBotID:(id)arg1 type:(unsigned long long)arg2 issueType:(id)arg3 message:(id)arg4 target:(id)arg5 testCase:(id)arg6 documentFilePath:(id)arg7 fixItType:(id)arg8 streaks:(id)arg9 validationErrors:(id *)arg10;

@end
