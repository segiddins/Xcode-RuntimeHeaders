//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningUserAction.h>

@class DVTProvisioningProfile;

@interface IDEProvisioningInstallProfileUserAction : IDEProvisioningUserAction
{
    DVTProvisioningProfile *_profile;
}

- (void).cxx_destruct;
@property(readonly) DVTProvisioningProfile *profile; // @synthesize profile=_profile;
- (BOOL)supportsBatchAuthorization;
- (id)userActionName;
- (id)userActionMessage;
- (id)userActionTitle;
- (id)initWithProfile:(id)arg1 context:(id)arg2;

@end

