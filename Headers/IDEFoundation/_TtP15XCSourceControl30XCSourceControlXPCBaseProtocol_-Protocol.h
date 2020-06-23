//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSSet, NSString, NSURL, XCSourceControlHostAccount, XCSourceControlHostCommit, XCSourceControlHostFile, XCSourceControlHostMilestone, XCSourceControlHostParticipant, XCSourceControlHostParticipantSet, XCSourceControlHostPullRequest, XCSourceControlHostPullRequestMergeAction, XCSourceControlHostPullRequestSearchFilter, XCSourceControlHostPullRequestWorkflowAction, XCSourceControlHostRepository, XCSourceControlHostRevision, XCSourceControlHostSSHKey, XCSourceControlHostStatusAnnotation, _TtC15XCSourceControl25XCSourceControlHostBranch, _TtC15XCSourceControl31XCSourceControlRevisionLocation, _TtC15XCSourceControl33XCSourceControlPullRequestComment, _TtC15XCSourceControl40XCSourceControlPullRequestFileDiscussion;

@protocol _TtP15XCSourceControl30XCSourceControlXPCBaseProtocol_
- (void)commonAncestor:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 sourceBranch:(_TtC15XCSourceControl25XCSourceControlHostBranch *)arg4 targetBranch:(_TtC15XCSourceControl25XCSourceControlHostBranch *)arg5 reply:(void (^)(XCSourceControlHostRevision *, NSError *))arg6;
- (void)setNetworkActivityLoggingEnabled:(BOOL)arg1;
- (void)resetRepositoryWithAccount:(XCSourceControlHostAccount *)arg1 repository:(XCSourceControlHostRepository *)arg2 defaultBranch:(_TtC15XCSourceControl25XCSourceControlHostBranch *)arg3 branches:(NSArray *)arg4 reply:(void (^)(NSError *))arg5;
- (void)deleteRepositoryWithAccount:(XCSourceControlHostAccount *)arg1 repository:(XCSourceControlHostRepository *)arg2 reply:(void (^)(NSError *))arg3;
- (void)deleteSSHKeyWithAccount:(XCSourceControlHostAccount *)arg1 sshKey:(XCSourceControlHostSSHKey *)arg2 reply:(void (^)(NSError *))arg3;
- (void)mergePullRequest:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 action:(XCSourceControlHostPullRequestMergeAction *)arg4 reply:(void (^)(XCSourceControlHostPullRequest *, NSError *))arg5;
- (void)pullRequestMergabilityInformation:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 reply:(void (^)(_TtC15XCSourceControl43XCSourceControlPullRequestMergeCapabilities *, NSError *))arg4;
- (void)listChanges:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)renderMarkdown:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 text:(NSString *)arg3 reply:(void (^)(NSString *, NSError *))arg4;
- (void)exportFile:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 file:(XCSourceControlHostFile *)arg3 revision:(XCSourceControlHostRevision *)arg4 repositoryURL:(NSURL *)arg5 reply:(void (^)(_TtC15XCSourceControl26XCSourceControlFileContent *, NSError *))arg6;
- (void)exportFile:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 file:(XCSourceControlHostFile *)arg3 revisionLocation:(_TtC15XCSourceControl31XCSourceControlRevisionLocation *)arg4 reply:(void (^)(_TtC15XCSourceControl26XCSourceControlFileContent *, NSError *))arg5;
- (void)setMilestone:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 milestone:(XCSourceControlHostMilestone *)arg4 reply:(void (^)(XCSourceControlHostPullRequest *, NSError *))arg5;
- (void)setLabels:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 labels:(NSSet *)arg4 reply:(void (^)(XCSourceControlHostPullRequest *, NSError *))arg5;
- (void)milestones:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)labels:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)createStatusAnnotation:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 commit:(XCSourceControlHostCommit *)arg4 statusAnnotation:(XCSourceControlHostStatusAnnotation *)arg5 reply:(void (^)(XCSourceControlHostStatusAnnotation *, NSError *))arg6;
- (void)statusAnnotation:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 commit:(XCSourceControlHostCommit *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)listCommits:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 file:(XCSourceControlHostFile *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)listCommits:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)commitDetails:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 revision:(XCSourceControlHostRevision *)arg4 reply:(void (^)(XCSourceControlHostRevision *, NSArray *, NSError *))arg5;
- (void)username:(NSString *)arg1 url:(NSURL *)arg2 reply:(void (^)(NSString *))arg3;
- (void)endpointURL:(XCSourceControlHostAccount *)arg1 reply:(void (^)(NSURL *))arg2;
- (void)removeParticipants:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 participants:(XCSourceControlHostParticipantSet *)arg4 reply:(void (^)(XCSourceControlHostPullRequest *, NSError *))arg5;
- (void)addParticipants:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 participants:(XCSourceControlHostParticipantSet *)arg4 reply:(void (^)(XCSourceControlHostPullRequest *, NSError *))arg5;
- (void)fetchParticipants:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 pullRequest:(XCSourceControlHostPullRequest *)arg4 reply:(void (^)(XCSourceControlHostParticipantSet *, NSError *))arg5;
- (void)capabilities:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 reply:(void (^)(unsigned long long))arg3;
- (void)repositoryForURL:(NSString *)arg1 url:(NSURL *)arg2 account:(XCSourceControlHostAccount *)arg3 reply:(void (^)(XCSourceControlHostRepository *, NSError *))arg4;
- (void)fetchEvents:(NSString *)arg1 pullRequest:(XCSourceControlHostPullRequest *)arg2 account:(XCSourceControlHostAccount *)arg3 repository:(XCSourceControlHostRepository *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)webURLComponents:(NSString *)arg1 reply:(void (^)(NSString *, NSString *, NSString *))arg2;
- (void)webURL:(NSString *)arg1 repositoryURL:(NSURL *)arg2 sha:(NSString *)arg3 reply:(void (^)(NSURL *))arg4;
- (void)webURL:(NSString *)arg1 repositoryURL:(NSURL *)arg2 branch:(NSString *)arg3 reply:(void (^)(NSURL *))arg4;
- (void)webURL:(NSString *)arg1 repositoryURL:(NSURL *)arg2 tag:(NSString *)arg3 reply:(void (^)(NSURL *))arg4;
- (void)webURL:(NSString *)arg1 repositoryURL:(NSURL *)arg2 reply:(void (^)(NSURL *))arg3;
- (void)requestAuthCode:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 reply:(void (^)(NSError *))arg3;
- (void)updatePullRequest:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 targetBranch:(_TtC15XCSourceControl25XCSourceControlHostBranch *)arg4 reply:(void (^)(XCSourceControlHostPullRequest *, NSError *))arg5;
- (void)updatePullRequest:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 force:(BOOL)arg4 reply:(void (^)(XCSourceControlHostPullRequest *, NSError *))arg5;
- (void)createPullRequest:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 reply:(void (^)(XCSourceControlHostPullRequest *, NSError *))arg4;
- (void)updateComment:(NSString *)arg1 comment:(_TtC15XCSourceControl33XCSourceControlPullRequestComment *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 account:(XCSourceControlHostAccount *)arg4 reply:(void (^)(_TtC15XCSourceControl33XCSourceControlPullRequestComment *, NSError *))arg5;
- (void)createComment:(NSString *)arg1 comment:(_TtC15XCSourceControl33XCSourceControlPullRequestComment *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 account:(XCSourceControlHostAccount *)arg4 reply:(void (^)(_TtC15XCSourceControl33XCSourceControlPullRequestComment *, NSError *))arg5;
- (void)createFileDiscussion:(NSString *)arg1 discussion:(_TtC15XCSourceControl40XCSourceControlPullRequestFileDiscussion *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 account:(XCSourceControlHostAccount *)arg4 reply:(void (^)(_TtC15XCSourceControl40XCSourceControlPullRequestFileDiscussion *, NSError *))arg5;
- (void)validateSSHKey:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 publicSSHKey:(NSString *)arg3 reply:(void (^)(BOOL, NSError *))arg4;
- (void)repositoryMetadata:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 reply:(void (^)(XCSourceControlHostRepository *, NSError *))arg4;
- (void)branch:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repositoryURL:(NSURL *)arg3 branchName:(NSString *)arg4 reply:(void (^)(_TtC15XCSourceControl25XCSourceControlHostBranch *, NSError *))arg5;
- (void)createRepository:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 owner:(XCSourceControlHostParticipant *)arg3 name:(NSString *)arg4 description:(NSString *)arg5 homepage:(NSURL *)arg6 private:(BOOL)arg7 reply:(void (^)(XCSourceControlHostRepository *, NSError *))arg8;
- (void)avatar:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 email:(NSString *)arg3 username:(NSString *)arg4 url:(NSURL *)arg5 size:(unsigned int)arg6 reply:(void (^)(NSImage *, NSError *))arg7;
- (void)membership:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 options:(long long)arg3 reply:(void (^)(XCSourceControlHostParticipantSet *, NSError *))arg4;
- (void)unstar:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 reply:(void (^)(NSError *))arg4;
- (void)star:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 reply:(void (^)(NSError *))arg4;
- (void)searchRepositories:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 query:(NSString *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)repositories:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 type:(unsigned long long)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)requestPersonalAccessToken:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 twoFactorCode:(NSString *)arg3 reply:(void (^)(NSString *, NSString *, NSError *))arg4;
- (void)pullRequests:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 filter:(XCSourceControlHostPullRequestSearchFilter *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)uploadPullRequestAttachments:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 fileURLs:(NSArray *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)deleteComment:(NSString *)arg1 comment:(_TtC15XCSourceControl33XCSourceControlPullRequestComment *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 account:(XCSourceControlHostAccount *)arg4 reply:(void (^)(NSError *))arg5;
- (void)reply:(NSString *)arg1 commentEvent:(_TtC15XCSourceControl33XCSourceControlPullRequestComment *)arg2 withComment:(_TtC15XCSourceControl33XCSourceControlPullRequestComment *)arg3 pullRequest:(XCSourceControlHostPullRequest *)arg4 account:(XCSourceControlHostAccount *)arg5 repository:(XCSourceControlHostRepository *)arg6 reply:(void (^)(_TtC15XCSourceControl33XCSourceControlPullRequestComment *, NSError *))arg7;
- (void)shouldAllowAvatarFrom:(NSURL *)arg1 withAccount:(NSURL *)arg2 reply:(void (^)(BOOL))arg3;
- (void)findUsers:(NSString *)arg1 matching:(NSString *)arg2 account:(XCSourceControlHostAccount *)arg3 repository:(XCSourceControlHostRepository *)arg4 reply:(void (^)(XCSourceControlHostParticipantSet *, NSError *))arg5;
- (void)repositoryBranches:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 includeUpstream:(BOOL)arg4 reply:(void (^)(NSDictionary *, NSError *))arg5;
- (void)listSSHKeys:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)uploadSSHKey:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 publicSSHKey:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)validateCredentials:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)user:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 reply:(void (^)(XCSourceControlHostParticipant *, NSError *))arg3;
- (void)pullRequest:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 identifier:(NSString *)arg4 reply:(void (^)(XCSourceControlHostPullRequest *, NSError *))arg5;
- (void)updateRepositoryPermissions:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 repository:(XCSourceControlHostRepository *)arg3 reply:(void (^)(NSError *))arg4;
- (void)actionPullRequest:(NSString *)arg1 account:(XCSourceControlHostAccount *)arg2 pullRequest:(XCSourceControlHostPullRequest *)arg3 action:(XCSourceControlHostPullRequestWorkflowAction *)arg4 reply:(void (^)(XCSourceControlHostPullRequest *, NSError *))arg5;
- (void)cancelOperation:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
@end

