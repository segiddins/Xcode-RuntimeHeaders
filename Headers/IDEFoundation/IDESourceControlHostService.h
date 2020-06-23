//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/_TtP15XCSourceControl37XCSourceControlXPCHostServiceProtocol_-Protocol.h>
#import <IDEFoundation/_TtP15XCSourceControl41XCSourceControlXPCExportedServiceProtocol_-Protocol.h>

@class NSArray, NSBundle, NSDictionary, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface IDESourceControlHostService : NSObject <_TtP15XCSourceControl37XCSourceControlXPCHostServiceProtocol_, _TtP15XCSourceControl41XCSourceControlXPCExportedServiceProtocol_>
{
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSMutableDictionary *_outstandingCommandInvocations;
    NSMutableDictionary *_repositoriesPaginationBlockMapping;
    NSString *_identifier;
    NSString *_name;
    NSBundle *_bundle;
    NSArray *_endpoints;
    NSDictionary *_endpointsByIdentifier;
    NSOperationQueue *_paginatedResponseOperationQueue;
}

+ (id)endpointForIdentifier:(id)arg1;
+ (id)endpointsForURL:(id)arg1;
+ (id)endpointForURL:(id)arg1;
+ (id)sortedSourceControlHostExtensions;
+ (id)knownOrderedServiceIdentifiers;
+ (id)sourceControlHostExtensions;
+ (id)setupSourceControlHostExtensions;
+ (id)_servicePaths;
+ (BOOL)enableServices;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) NSOperationQueue *paginatedResponseOperationQueue; // @synthesize paginatedResponseOperationQueue=_paginatedResponseOperationQueue;
@property(readonly, copy) NSDictionary *endpointsByIdentifier; // @synthesize endpointsByIdentifier=_endpointsByIdentifier;
@property(readonly, copy) NSArray *endpoints; // @synthesize endpoints=_endpoints;
@property(retain) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_logExtensionCall:(BOOL)arg1 selector:(SEL)arg2;
- (id)XPCService;
- (void)paginateRepositories:(id)arg1 participant:(id)arg2 repositories:(id)arg3;
- (void)setMilestone:(id)arg1 account:(id)arg2 pullRequest:(id)arg3 milestone:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)setLabels:(id)arg1 account:(id)arg2 pullRequest:(id)arg3 labels:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)milestones:(id)arg1 account:(id)arg2 repository:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)labels:(id)arg1 account:(id)arg2 repository:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)statusAnnotation:(id)arg1 account:(id)arg2 repository:(id)arg3 commit:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)createStatusAnnotation:(id)arg1 account:(id)arg2 repository:(id)arg3 commit:(id)arg4 statusAnnotation:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)listChanges:(id)arg1 account:(id)arg2 pullRequest:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)exportFile:(id)arg1 account:(id)arg2 file:(id)arg3 revisionLocation:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)renderMarkdown:(id)arg1 account:(id)arg2 text:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)listCommits:(id)arg1 account:(id)arg2 pullRequest:(id)arg3 file:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)listCommits:(id)arg1 account:(id)arg2 pullRequest:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)updateComment:(id)arg1 pullRequest:(id)arg2 withText:(id)arg3 account:(id)arg4 repository:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)shouldAllowAvatarFrom:(id)arg1 withAccount:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)listCommentsWithPullRequest:(id)arg1 account:(id)arg2 repository:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)endpointURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetRepositoryWithAccount:(id)arg1 repository:(id)arg2 defaultBranch:(id)arg3 branches:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)deleteSSHKeyWithAccount:(id)arg1 sshKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)deleteRepositoryWithAccount:(id)arg1 repository:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)repositoryBranches:(id)arg1 account:(id)arg2 repository:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)updateRepositoryPermissions:(id)arg1 account:(id)arg2 repository:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)actionPullRequest:(id)arg1 account:(id)arg2 pullRequest:(id)arg3 action:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)findUsers:(id)arg1 matching:(id)arg2 account:(id)arg3 repository:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)commentFor:(id)arg1 in:(id)arg2 account:(id)arg3 repository:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)removeParticipants:(id)arg1 account:(id)arg2 pullRequest:(id)arg3 participants:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)addParticipants:(id)arg1 account:(id)arg2 pullRequest:(id)arg3 participants:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)fetchEvents:(id)arg1 pullRequest:(id)arg2 account:(id)arg3 repository:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)delete:(id)arg1 commentEvent:(id)arg2 pullRequest:(id)arg3 account:(id)arg4 repository:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)reply:(id)arg1 commentEvent:(id)arg2 withComment:(id)arg3 pullRequest:(id)arg4 account:(id)arg5 repository:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)add:(id)arg1 commentEvent:(id)arg2 pullRequest:(id)arg3 account:(id)arg4 repository:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)uploadPullRequestAttachments:(id)arg1 account:(id)arg2 repository:(id)arg3 pullRequest:(id)arg4 fileURLs:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)updatePullRequest:(id)arg1 account:(id)arg2 pullRequest:(id)arg3 force:(BOOL)arg4 reply:(CDUnknownBlockType)arg5;
- (void)createPullRequest:(id)arg1 account:(id)arg2 pullRequest:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)pullRequest:(id)arg1 account:(id)arg2 repository:(id)arg3 identifier:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)pullRequests:(id)arg1 account:(id)arg2 repository:(id)arg3 filter:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)username:(id)arg1 url:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)listSSHKeys:(id)arg1 account:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)repositoryMetadata:(id)arg1 account:(id)arg2 repository:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)uploadSSHKey:(id)arg1 account:(id)arg2 publicSSHKey:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)validateSSHKey:(id)arg1 account:(id)arg2 publicSSHKey:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)user:(id)arg1 account:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)membership:(id)arg1 account:(id)arg2 options:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)searchRepositories:(id)arg1 account:(id)arg2 query:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)searchCodeRepositories:(id)arg1 account:(id)arg2 type:(unsigned long long)arg3 query:(id)arg4 path:(id)arg5 filename:(id)arg6 fileExtension:(id)arg7 pagination:(CDUnknownBlockType)arg8 reply:(CDUnknownBlockType)arg9;
- (void)repositories:(id)arg1 account:(id)arg2 type:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)repositories:(id)arg1 account:(id)arg2 type:(unsigned long long)arg3 pagination:(CDUnknownBlockType)arg4 reply:(CDUnknownBlockType)arg5;
- (void)createRepository:(id)arg1 account:(id)arg2 owner:(id)arg3 name:(id)arg4 description:(id)arg5 homepage:(id)arg6 private:(BOOL)arg7 reply:(CDUnknownBlockType)arg8;
- (void)unstar:(id)arg1 account:(id)arg2 repository:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)star:(id)arg1 account:(id)arg2 repository:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)avatar:(id)arg1 account:(id)arg2 email:(id)arg3 size:(unsigned int)arg4 reply:(CDUnknownBlockType)arg5;
- (void)avatar:(id)arg1 account:(id)arg2 username:(id)arg3 size:(unsigned int)arg4 reply:(CDUnknownBlockType)arg5;
- (void)loginHelpURL:(id)arg1 url:(id)arg2 username:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)webURLComponents:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)webURL:(id)arg1 repositoryURL:(id)arg2 tag:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)webURL:(id)arg1 repositoryURL:(id)arg2 branch:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)webURL:(id)arg1 repositoryURL:(id)arg2 sha:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)webURL:(id)arg1 repositoryURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestPersonalAccessToken:(id)arg1 account:(id)arg2 twoFactorCode:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestAuthCode:(id)arg1 account:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)validateCredentials:(id)arg1 account:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)capabilities:(id)arg1 account:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)repositoryForURL:(id)arg1 url:(id)arg2 account:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)removeRepositoriesPaginationBlockForUUID:(id)arg1;
- (CDUnknownBlockType)repositoriesPaginationBlockForUUID:(id)arg1;
- (void)addRepositoriesPaginationBlock:(CDUnknownBlockType)arg1 forUUID:(id)arg2;
- (id)displayName:(id)arg1;
- (void)cancelOperation:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_instantiateProperEndpointDefinitions:(id)arg1;
- (id)description;
- (id)serviceQueue;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 bundle:(id)arg3;

@end

