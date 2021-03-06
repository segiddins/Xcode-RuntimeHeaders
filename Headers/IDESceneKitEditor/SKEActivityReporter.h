//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class DVTNotificationToken, NSMapTable;

@interface SKEActivityReporter : IDEActivityReporter
{
    DVTNotificationToken *_operationDidStartObservingToken;
    NSMapTable *_documentOperationsToObservingTokens;
    NSMapTable *_documentOperationsToActivityReports;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)removeObservingTokensForDocumentOperation:(id)arg1;
- (void)addObservingToken:(id)arg1 forDocumentOperation:(id)arg2;
- (void)endActivityReportForOperation:(id)arg1;
- (void)updateActivityReportForOperation:(id)arg1;
- (void)documentOperationDidStart:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

@end

