//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEResultBundleDocument.h>

#import <IDEKit/IDETestReportPackagedGeniusResultDocumentRequirements-Protocol.h>

@class IDESchemeActionsInvocationRecord, NSString;

@interface IDETestReportDocument : IDEResultBundleDocument <IDETestReportPackagedGeniusResultDocumentRequirements>
{
}

@property(readonly, nonatomic) NSString *onDiskPath;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (BOOL)reloadTestsWithError:(id *)arg1;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *invocationRecord;

@end

