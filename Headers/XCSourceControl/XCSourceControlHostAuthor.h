//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSourceControl/NSCopying-Protocol.h>
#import <XCSourceControl/NSSecureCoding-Protocol.h>

@class NSString;

@interface XCSourceControlHostAuthor : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_fullName;
    NSString *_email;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithFullName:(id)arg1 email:(id)arg2;

@end

