//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDeveloperAccount, NSError, NSString;

@interface IDEDistributionAccountIssue : NSObject
{
    BOOL _isLoginIssue;
    NSError *_underlyingError;
    DVTDeveloperAccount *_account;
    NSString *_issue;
}

+ (id)loginIssueForAccount:(id)arg1;
+ (id)roleIssueForAccount:(id)arg1 issue:(id)arg2;
@property(retain, nonatomic) NSString *issue; // @synthesize issue=_issue;
@property(retain, nonatomic) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(nonatomic) BOOL isLoginIssue; // @synthesize isLoginIssue=_isLoginIssue;
@property(copy) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
- (void).cxx_destruct;
- (id)description;

@end

