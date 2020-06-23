//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_$s16DVTSourceControl0aB13HostedAccountCN.h"

@class IDESourceControlHostServiceEndpoint, NSString, XCSourceControlHostAccount, _TtC13IDEFoundation34IDESourceControlHostAuthentication;

@interface _$s16DVTSourceControl0aB13HostedAccountCN (IDEFoundation)
- (id)dictionaryRepresentation;
- (id)initWithHostURL:(id)arg1 username:(id)arg2 accountName:(id)arg3 extensionIdentifier:(id)arg4 cloneType:(long long)arg5 authentication:(id)arg6 sshUsername:(id)arg7 sshKeyPath:(id)arg8;
@property(nonatomic, retain) _TtC13IDEFoundation34IDESourceControlHostAuthentication *authentication;
@property(nonatomic) long long cloneType;
@property(nonatomic, readonly) NSString *extensionIdentifier;
- (id)commonAncestor:(id)arg1 sourceBranch:(id)arg2 targetBranch:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)setWithLabels:(id)arg1 on:(id)arg2 repository:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)fetchLabelsWithRepository:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)setWithMilestone:(id)arg1 on:(id)arg2 repository:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)fetchMilestonesWithRepository:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)listChangesIn:(id)arg1 repository:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)findUsersMatching:(id)arg1 repository:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)renderMarkdownFor:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)cloneURL:(id)arg1;
- (id)webURLComponents:(CDUnknownBlockType)arg1;
- (id)webURL:(id)arg1 branch:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)webURL:(id)arg1 tag:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)webURL:(id)arg1 sha:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)webURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)branch:(id)arg1 branchName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)repository:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)statusAnnotationFor:(id)arg1 in:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)mergePullRequest:(id)arg1 action:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)pullRequestMergabilityInformation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)updateRepositoryPermissions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)searchBranchesOf:(id)arg1 query:(id)arg2 paginationBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)branchesOf:(id)arg1 includeUpstream:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)actionPullRequestWithPullRequest:(id)arg1 action:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)removeParticipants:(id)arg1 participants:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)addParticipants:(id)arg1 participants:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)fetchParticipants:(id)arg1 repository:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)uploadPullRequestAttachments:(id)arg1 fileURLs:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)exportFile:(id)arg1 revision:(id)arg2 repositoryURL:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)exportFile:(id)arg1 revisionLocation:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)listCommits:(id)arg1 file:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)listCommits:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)commitDetails:(id)arg1 revision:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)updatePullRequest:(id)arg1 targetBranch:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)updatePullRequest:(id)arg1 force:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)createPullRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)pullRequest:(id)arg1 identifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)pullRequests:(id)arg1 filter:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)deleteComment:(id)arg1 pullRequest:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)replyTo:(id)arg1 with:(id)arg2 pullRequest:(id)arg3 repository:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)updateComment:(id)arg1 pullRequest:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)createComment:(id)arg1 pullRequest:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)createFileDiscussion:(id)arg1 pullRequest:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)fetchEvents:(id)arg1 repository:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)user:(CDUnknownBlockType)arg1;
- (id)requestAuthCode:(CDUnknownBlockType)arg1;
- (id)membershipWithOptions:(long long)arg1:(CDUnknownBlockType)arg2;
- (id)validateCredentials:(CDUnknownBlockType)arg1;
- (id)usernameFromURL:(id)arg1:(CDUnknownBlockType)arg2;
- (id)repositoryMetadata:(id)arg1:(CDUnknownBlockType)arg2;
- (id)validateSSHKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)uploadSSHKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)listSSHKeys:(CDUnknownBlockType)arg1;
- (id)searchRepositories:(id)arg1 pageCompletionBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)searchCodeRepositories:(unsigned long long)arg1 query:(id)arg2 path:(id)arg3 filename:(id)arg4 fileExtension:(id)arg5 paginationBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)repositories:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)repositories:(unsigned long long)arg1 paginationBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)createRepository:(id)arg1 name:(id)arg2 description:(id)arg3 homepage:(id)arg4 private:(BOOL)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)requestPersonalAccessToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)unstar:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)star:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)avatarForEmail:(id)arg1 username:(id)arg2 url:(id)arg3 size:(unsigned int)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)capabilities:(CDUnknownBlockType)arg1;
@property(nonatomic, readonly) unsigned long long staticCapabilities;
@property(nonatomic, readonly) BOOL extensionUsesForcedURL;
@property(nonatomic, readonly) NSString *extensionName;
@property(nonatomic, readonly) IDESourceControlHostServiceEndpoint *endpoint;
@property(nonatomic, readonly) XCSourceControlHostAccount *extensionHostAccount;
@end

