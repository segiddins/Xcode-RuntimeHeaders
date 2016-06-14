//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSTask;

@interface XCSSHAgent : NSObject
{
    NSString *sshAgentSocket;
    NSTask *sshAgentTask;
    NSMutableArray *validIdentities;
    NSMutableArray *_identities;
}

+ (id)sharedInstance;
- (id)validIdentities;
- (void)addValidIdentity:(id)arg1;
- (BOOL)verifyStateFile:(id)arg1;
- (BOOL)verifySSHAgentAddResponse:(id)arg1;
- (BOOL)validSocket:(id)arg1;
- (BOOL)validSocket;
- (BOOL)validPassphrase;
- (id)readFileHandle:(id)arg1 untilString:(id)arg2 timeout:(long long)arg3;
- (BOOL)submitPassphrase:(id)arg1;
- (void)checkIdentities;
- (BOOL)submitPassphrase:(id)arg1 forIdentity:(id)arg2;
- (BOOL)validSSHAgent;
- (BOOL)isRunning;
- (id)setupEnvironment;
- (BOOL)_startSSHAgent;
- (BOOL)start;
- (id)socket;
- (void)setSocket:(id)arg1;
- (void)loadIdentities;
- (id)identities;
- (void)dealloc;
- (id)init;

@end

