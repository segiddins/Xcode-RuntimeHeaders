//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDETestIdentifier;

@interface _IDEXCTestSuiteRecord : NSObject
{
    BOOL _shouldUseForReportingSuiteCompletion;
    IDETestIdentifier *_suiteIdentifier;
    long long _runCount;
    long long _skipCount;
    long long _failureCount;
    double _suiteStartTime;
    long long _unexpectedFailureCount;
}

- (void).cxx_destruct;
@property long long unexpectedFailureCount; // @synthesize unexpectedFailureCount=_unexpectedFailureCount;
@property BOOL shouldUseForReportingSuiteCompletion; // @synthesize shouldUseForReportingSuiteCompletion=_shouldUseForReportingSuiteCompletion;
@property double suiteStartTime; // @synthesize suiteStartTime=_suiteStartTime;
@property long long failureCount; // @synthesize failureCount=_failureCount;
@property long long skipCount; // @synthesize skipCount=_skipCount;
@property long long runCount; // @synthesize runCount=_runCount;
@property(copy) IDETestIdentifier *suiteIdentifier; // @synthesize suiteIdentifier=_suiteIdentifier;
- (id)description;

@end

