//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlProgressAssistant.h>

@class NSDate;

@interface IDESourceControlPreflightAssistant : IDESourceControlProgressAssistant
{
    BOOL canGoForward;
    NSDate *_minimumEndDate;
}

+ (id)progressStatus;
+ (BOOL)canShowDeterminateProgress;
@property(retain) NSDate *minimumEndDate; // @synthesize minimumEndDate=_minimumEndDate;
@property BOOL canGoForward; // @synthesize canGoForward;
- (void).cxx_destruct;
- (id)nextAssistantIdentifier;
- (void)willGoNextOrFinish;
- (BOOL)canFinish;
- (BOOL)canGoBack;
- (BOOL)canCancel;
- (void)viewDidLoad;
- (void)_finishWithErrorMap:(id)arg1 generalError:(id)arg2;
- (void)_loadBlueprintLocations;
- (void)_detectBlueprintBranchAndTagLocations;
- (void)_rootBlueprintAddress;
- (void)_validateCertificatesAndFingerprintsForOriginalErrors:(id)arg1 currentErrors:(id)arg2 shouldReflight:(BOOL)arg3;
- (void)_preflightBlueprint;
- (void)_createRepositoryFromURL;
- (void)_finish;
- (id)downloadAssistantContext;

@end
