/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEUpgradeContainerContext.h"

#import "Xcode3UpgradeContext-Protocol.h"

@class Xcode3BuildSettingsContext, Xcode3Project;

@interface Xcode3UpgradeProjectContext : IDEUpgradeContainerContext <Xcode3UpgradeContext>
{
    Xcode3BuildSettingsContext *_buildSettings;
}

@property(readonly) Xcode3BuildSettingsContext *buildSettings; // @synthesize buildSettings=_buildSettings;
- (void).cxx_destruct;
- (id)description;
@property(readonly) Xcode3Project *project;
- (id)initWithContainer:(id)arg1;

@end
