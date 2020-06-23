//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSourceControl/NSCopying-Protocol.h>
#import <XCSourceControl/NSSecureCoding-Protocol.h>

@class NSString, NSURL, XCSourceControlHostParticipant, XCSourceControlPullRequestEvent;

@interface XCSourceControlHostAttachment : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSString *_identifier;
    NSURL *_url;
    XCSourceControlHostParticipant *_user;
    XCSourceControlPullRequestEvent *_event;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) XCSourceControlPullRequestEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) XCSourceControlHostParticipant *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)markdownInlineLink;
- (id)initWithName:(id)arg1 identifier:(id)arg2 url:(id)arg3 user:(id)arg4 event:(id)arg5;

@end
