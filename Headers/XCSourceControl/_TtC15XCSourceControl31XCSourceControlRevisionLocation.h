//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSourceControl/NSCopying-Protocol.h>
#import <XCSourceControl/NSSecureCoding-Protocol.h>

@class NSString, XCSourceControlHostRepository, XCSourceControlHostRevision;

@interface _TtC15XCSourceControl31XCSourceControlRevisionLocation : NSObject <NSSecureCoding, NSCopying>
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: revision
    // Error parsing type: , name: repository
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) NSString *description;
- (id)initWithRevision:(id)arg1 repository:(id)arg2;
- (id)initWithIdentifier:(id)arg1 revision:(id)arg2 repository:(id)arg3;
@property(nonatomic, readonly) XCSourceControlHostRepository *repository; // @synthesize repository;
@property(nonatomic, readonly) XCSourceControlHostRevision *revision; // @synthesize revision;
@property(nonatomic, readonly) NSString *identifier;

@end

