//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSString;

@interface XCSIssueSuspect : XCSObject
{
    NSString *_name;
    NSArray *_emails;
    NSArray *_commits;
}

+ (id)issueSuspectWithSuspectName:(id)arg1 emails:(id)arg2 commits:(id)arg3 validationErrors:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *commits; // @synthesize commits=_commits;
@property(readonly, nonatomic) NSArray *emails; // @synthesize emails=_emails;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)_validateName:(id)arg1 emails:(id)arg2 commits:(id)arg3 validationErrors:(id *)arg4;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithSuspectName:(id)arg1 emails:(id)arg2 commits:(id)arg3 validationErrors:(id *)arg4;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

@end

