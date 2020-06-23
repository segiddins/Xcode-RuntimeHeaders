//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class NSString;
@protocol NSCopying;

@interface IDESourcePackageRequirement : NSObject <NSCopying>
{
    long long _kind;
    NSObject<NSCopying> *_value;
}

+ (id)requirementWithRevision:(id)arg1;
+ (id)requirementWithBranchName:(id)arg1;
+ (id)requirementWithMinimumVersion:(id)arg1 upToMaximumVersion:(id)arg2;
+ (id)requirementWithExactVersion:(id)arg1;
+ (id)requirementWithMinimumVersionUpToNextMinorVersion:(id)arg1;
+ (id)requirementWithMinimumVersionUpToNextMajorVersion:(id)arg1;
@property(readonly) NSObject<NSCopying> *value; // @synthesize value=_value;
@property(readonly) long long kind; // @synthesize kind=_kind;
- (void).cxx_destruct;
@property(readonly) NSString *revision;
@property(readonly) NSString *branchName;
@property(readonly) NSString *exactVersion;
@property(readonly) NSString *maximumVersion;
@property(readonly) NSString *minimumVersion;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKind:(long long)arg1 value:(id)arg2;
- (id)init;

@end

