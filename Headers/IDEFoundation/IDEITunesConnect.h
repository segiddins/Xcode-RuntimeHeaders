//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEITunesSoftwareServiceDelegate, NSString, NSXPCConnection;
@protocol IDEITunesSoftwareServiceProtocol;

@interface IDEITunesConnect : NSObject <DVTInvalidation>
{
    NSXPCConnection *_connection;
    id <IDEITunesSoftwareServiceProtocol> _localService;
    IDEITunesSoftwareServiceDelegate *_serviceDelegate;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)applicationVersionsForApplicationDecription:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (id)applicationDescriptionsWithSession:(id)arg1 error:(id *)arg2;
- (id)dSYMURLForAdamID:(id)arg1 bundleIdentifier:(id)arg2 version:(id)arg3 buildNumber:(id)arg4 platform:(id)arg5 session:(id)arg6 error:(id *)arg7;
- (id)applicationDescriptionWithBundleIdentifier:(id)arg1 platform:(id)arg2 session:(id)arg3 error:(id *)arg4;
- (id)testDeveloperIDNotificationWithDeviceToken:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (id)developerIDStatusResponseForUploadIdentifier:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (id)uploadDeveloperIDAppAtPath:(id)arg1 bundleID:(id)arg2 teamID:(id)arg3 deviceToken:(id)arg4 session:(id)arg5 willBeginCallback:(CDUnknownBlockType)arg6 updatePercentageCallback:(CDUnknownBlockType)arg7 updateMessageCallback:(CDUnknownBlockType)arg8 didCompleteCallback:(CDUnknownBlockType)arg9 error:(id *)arg10;
- (id)uploadInAppPurchaseContentArchiveAtPath:(id)arg1 productID:(id)arg2 application:(id)arg3 session:(id)arg4 willBeginCallback:(CDUnknownBlockType)arg5 updatePercentageCallback:(CDUnknownBlockType)arg6 updateMessageCallback:(CDUnknownBlockType)arg7 didCompleteCallback:(CDUnknownBlockType)arg8 error:(id *)arg9;
- (id)applicationsWithContentHostedInAppPurchasesForSession:(id)arg1 error:(id *)arg2;
- (BOOL)cancelUpload:(id *)arg1;
- (id)uploadApplicationArchiveAtPath:(id)arg1 platform:(id)arg2 session:(id)arg3 willBeginCallback:(CDUnknownBlockType)arg4 updatePercentageCallback:(CDUnknownBlockType)arg5 updateMessageCallback:(CDUnknownBlockType)arg6 didCompleteCallback:(CDUnknownBlockType)arg7 error:(id *)arg8;
- (id)validateApplicationAtPath:(id)arg1 platform:(id)arg2 session:(id)arg3 error:(id *)arg4;
- (id)configurationResponseForSession:(id)arg1 bundleID:(id)arg2 error:(id *)arg3;
- (id)configurationResponseForSession:(id)arg1 error:(id *)arg2;
- (void)setLogFileURL:(id)arg1;
- (id)swinfoFilePathStringWithError:(id *)arg1;
- (void)primitiveInvalidate;
- (id)serviceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initRemote;
- (id)initLocal;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
