//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/NSObject-Protocol.h>

@class IDELaunchSession, NSString;

@protocol IDEDebugNavigableModel <NSObject>
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
@end
