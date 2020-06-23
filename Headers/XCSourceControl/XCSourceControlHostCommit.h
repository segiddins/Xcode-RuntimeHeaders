//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSourceControl/NSCopying-Protocol.h>
#import <XCSourceControl/NSSecureCoding-Protocol.h>

@class NSDate, NSString, XCSourceControlHostAuthor, XCSourceControlHostRevision;

@interface XCSourceControlHostCommit : NSObject <NSSecureCoding, NSCopying>
{
    XCSourceControlHostRevision *_revision;
    XCSourceControlHostAuthor *_author;
    NSDate *_authorDate;
    XCSourceControlHostAuthor *_committer;
    NSDate *_commitDate;
    NSString *_message;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSDate *commitDate; // @synthesize commitDate=_commitDate;
@property(readonly, nonatomic) XCSourceControlHostAuthor *committer; // @synthesize committer=_committer;
@property(readonly, nonatomic) NSDate *authorDate; // @synthesize authorDate=_authorDate;
@property(readonly, nonatomic) XCSourceControlHostAuthor *author; // @synthesize author=_author;
@property(readonly, nonatomic) XCSourceControlHostRevision *revision; // @synthesize revision=_revision;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithRevision:(id)arg1 author:(id)arg2 authorDate:(id)arg3 committer:(id)arg4 commitDate:(id)arg5 message:(id)arg6;

@end
