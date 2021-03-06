//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEPegasusPlaygroundEditor/DVTInvalidation-Protocol.h>

@class DVTFilePath, DVTStackBacktrace, IDEIssueProvider, NSString;

@interface IDEPlaygroundIssueProviderContext : NSObject <DVTInvalidation>
{
    unsigned long long _hash;
    IDEIssueProvider *_issueProvider;
    DVTFilePath *_filePath;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(readonly) IDEIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash; // @synthesize hash=_hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIssueProvider:(id)arg1 path:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

