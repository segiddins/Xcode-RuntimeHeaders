//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/SCMSandboxEntry.h>

@class SCMSandboxOwner;

@interface SCMSandboxOwnerRoot : SCMSandboxEntry
{
    SCMSandboxOwner *_owner;
}

@property(retain) SCMSandboxOwner *owner; // @synthesize owner=_owner;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)disconnectSandbox:(id)arg1;
- (void)addSandbox:(id)arg1;
- (id)flattenedInterestingChildren;
- (id)interestingChildren;
- (id)childForPath:(id)arg1;
- (id)children;
- (BOOL)multipleRoots;

@end

