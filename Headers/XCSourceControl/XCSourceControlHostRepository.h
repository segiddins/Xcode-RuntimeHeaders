//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSourceControl/NSCopying-Protocol.h>
#import <XCSourceControl/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, NSURL, XCSourceControlHostParticipant, _TtC15XCSourceControl25XCSourceControlHostBranch;

@interface XCSourceControlHostRepository : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isPrivate;
    BOOL _starred;
    NSString *_name;
    NSString *_identifier;
    NSURL *_htmlURL;
    NSURL *_httpCloneURL;
    NSURL *_sshCloneURL;
    XCSourceControlHostParticipant *_owner;
    unsigned long long _stargazersCount;
    NSArray *_languages;
    NSURL *_homepage;
    NSString *_desc;
    unsigned long long _forkCount;
    NSDate *_lastPushDate;
    NSDate *_lastUpdatedDate;
    NSDate *_createdDate;
    NSURL *_readmeURL;
    NSString *_permissionLevel;
    XCSourceControlHostRepository *_upstreamRepository;
    NSString *_defaultBranchName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *defaultBranchName; // @synthesize defaultBranchName=_defaultBranchName;
@property(retain, nonatomic) XCSourceControlHostRepository *upstreamRepository; // @synthesize upstreamRepository=_upstreamRepository;
@property(copy, nonatomic) NSString *permissionLevel; // @synthesize permissionLevel=_permissionLevel;
@property(readonly, nonatomic) NSURL *readmeURL; // @synthesize readmeURL=_readmeURL;
@property(readonly, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(readonly, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(readonly, nonatomic) NSDate *lastPushDate; // @synthesize lastPushDate=_lastPushDate;
@property(readonly, nonatomic) unsigned long long forkCount; // @synthesize forkCount=_forkCount;
@property(nonatomic) BOOL starred; // @synthesize starred=_starred;
@property(readonly, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(readonly, nonatomic) NSURL *homepage; // @synthesize homepage=_homepage;
@property(readonly, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property(readonly, nonatomic) unsigned long long stargazersCount; // @synthesize stargazersCount=_stargazersCount;
@property(readonly, nonatomic) BOOL isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) XCSourceControlHostParticipant *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) NSURL *sshCloneURL; // @synthesize sshCloneURL=_sshCloneURL;
@property(readonly, nonatomic) NSURL *httpCloneURL; // @synthesize httpCloneURL=_httpCloneURL;
@property(readonly, nonatomic) NSURL *htmlURL; // @synthesize htmlURL=_htmlURL;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) _TtC15XCSourceControl25XCSourceControlHostBranch *defaultBranch;
@property(readonly, nonatomic) NSDate *displayDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 owner:(id)arg3 defaultBranch:(id)arg4;
- (id)initWithName:(id)arg1 identifier:(id)arg2 owner:(id)arg3;
- (id)initWithName:(id)arg1 identifier:(id)arg2 owner:(id)arg3 upstreamRepository:(id)arg4;
- (id)initWithName:(id)arg1 identifier:(id)arg2 httpCloneURL:(id)arg3 sshCloneURL:(id)arg4 owner:(id)arg5 isPrivate:(BOOL)arg6 stargazersCount:(unsigned long long)arg7 languages:(id)arg8 homepage:(id)arg9 description:(id)arg10 htmlURL:(id)arg11 forkCount:(unsigned long long)arg12 lastPushDate:(id)arg13 lastUpdatedDate:(id)arg14 createdDate:(id)arg15 readmeURL:(id)arg16 permissionLevel:(id)arg17 defaultBranchName:(id)arg18 upstreamRepository:(id)arg19;

@end

