//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSourceControl/NSCopying-Protocol.h>
#import <XCSourceControl/NSSecureCoding-Protocol.h>

@class NSString;

@interface XCSourceControlHostPullRequestRole : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_title;
    unsigned long long _type;
}

+ (BOOL)supportsSecureCoding;
+ (id)sharedMergedBy;
+ (id)sharedParticipant;
+ (id)sharedReviewer;
+ (id)sharedAssignee;
+ (id)sharedOwner;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 title:(id)arg2;

@end

