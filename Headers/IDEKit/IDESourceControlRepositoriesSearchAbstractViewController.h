//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTSourceControlHostedAccount, DVTSourceControlRemoteRepository;

@interface IDESourceControlRepositoriesSearchAbstractViewController : DVTViewController
{
    DVTSourceControlRemoteRepository *_remoteRepository;
    DVTSourceControlHostedAccount *_remoteRepositoryHostedAccount;
}

@property(readonly, nonatomic) DVTSourceControlHostedAccount *remoteRepositoryHostedAccount; // @synthesize remoteRepositoryHostedAccount=_remoteRepositoryHostedAccount;
@property(readonly, nonatomic) DVTSourceControlRemoteRepository *remoteRepository; // @synthesize remoteRepository=_remoteRepository;
- (void).cxx_destruct;
- (void)reloadDataSource;
- (void)setPackageFilter:(BOOL)arg1;
- (void)setNextActionBlock:(CDUnknownBlockType)arg1;
- (void)setSelectionUpdatedBlock:(CDUnknownBlockType)arg1;

@end

