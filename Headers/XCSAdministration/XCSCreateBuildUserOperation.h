//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

@class _TtC17XCSAdministration14NewUserAccount;

@interface XCSCreateBuildUserOperation : XCSInitializationOperation
{
    _TtC17XCSAdministration14NewUserAccount *_userToCreate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC17XCSAdministration14NewUserAccount *userToCreate; // @synthesize userToCreate=_userToCreate;
- (void)run;
- (id)statusDescription;

@end

