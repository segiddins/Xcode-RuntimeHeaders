//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DebuggerFoundation/NSObject-Protocol.h>

@class IDELaunchSession, NSString;

@protocol IDEDebugNavigableModel <NSObject>
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
@end

