//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IDEProvisioningBasicTeam;

@interface IDEProvisioningTeamReference : NSObject
{
    id <IDEProvisioningBasicTeam> _team;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
- (id)initWithTeam:(id)arg1;

@end

