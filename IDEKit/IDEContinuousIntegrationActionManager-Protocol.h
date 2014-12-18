//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEWorkspace, NSString, NSURL;

@protocol IDEContinuousIntegrationActionManager <NSObject>
- (void)hostedRepositoriesOnService:(id)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)canCreateHostedRepositoriesOnService:(id)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)createHostedRepositoryWithName:(NSString *)arg1 onService:(id)arg2 completionHandler:(void (^)(BOOL, NSError *, DVTSourceControlRemoteRepository *))arg3;
- (NSURL *)webURLForIntegration:(id)arg1;
- (NSURL *)webURLForBot:(id)arg1;
- (void)refreshWhichServicesUserCanCreateAndDeleteBots;
- (BOOL)canUserCreateAndDeleteBotsOnServiceForBotOrIntegration:(id)arg1;
- (BOOL)canUserCreateBotsOnAnyService;
- (NSString *)projectNameInBlueprintForBot:(id)arg1;
- (id)serviceMatchingHostName:(NSString *)arg1;
- (void)fetchIntegrationForId:(NSString *)arg1 onService:(id)arg2 withCompletionBlock:(void (^)(BOOL, NSError *, id))arg3;
- (void)fetchBotForBotId:(NSString *)arg1 onService:(id)arg2 withCompletionBlock:(void (^)(BOOL, NSError *, id))arg3;
- (void)deleteIntegration:(id)arg1 withCompletionBlock:(void (^)(BOOL, NSError *, NSString *, NSString *))arg2;
- (void)cancelIntegration:(id)arg1 withCompletionBlock:(void (^)(BOOL, NSError *, NSString *, NSString *))arg2;
- (void)deleteBot:(id)arg1 workspace:(IDEWorkspace *)arg2 withCompletionBlock:(void (^)(BOOL, NSError *, NSString *, NSString *))arg3;
- (void)integrationsForBot:(id)arg1 max:(unsigned long long)arg2 sortNewestFirst:(BOOL)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)integrateBot:(id)arg1 cleanFirst:(BOOL)arg2 completionHandler:(void (^)(BOOL, NSError *, NSString *, NSString *))arg3;
@end

