//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEProfileSpecifier, NSString;
@protocol IDEProvisioningBasicTeam;

@protocol IDEProvisioningBasicProfile <NSObject>
@property(readonly) IDEProfileSpecifier *specifier;
@property(readonly) id <IDEProvisioningBasicTeam> team;
@property(readonly) BOOL existsOnDisk;
@property(readonly) NSString *name;
@property(readonly) NSString *automaticIdentitySelector;
@property(readonly) NSString *UUID;
@end

