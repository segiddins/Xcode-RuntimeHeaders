//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSourceControl/NSCopying-Protocol.h>
#import <XCSourceControl/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface XCSourceControlHostParticipant : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_displayName;
    NSString *_identifier;
    NSString *_username;
    NSString *_email;
    NSURL *_avatarURL;
    unsigned long long _type;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSURL *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)setDisplayName:(id)arg1;
- (id)initWithIdentifier:(id)arg1 username:(id)arg2 displayName:(id)arg3 email:(id)arg4 avatarURL:(id)arg5 type:(unsigned long long)arg6;
- (id)initWithIdentifier:(id)arg1 username:(id)arg2 type:(unsigned long long)arg3;

@end

