//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDESchemeActionTestFailureSummary.h>

#import <IDEKit/IDETestReport_FailureSummary-Protocol.h>

@class NSString;

@interface IDESchemeActionTestFailureSummary (IDELogTestsViewController) <IDETestReport_FailureSummary>
@property(readonly, nonatomic) long long ide_testReport_failureSummary_lineNumber;
@property(readonly, copy, nonatomic) NSString *ide_testReport_failureSummary_fileName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_failureSummary_message;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

