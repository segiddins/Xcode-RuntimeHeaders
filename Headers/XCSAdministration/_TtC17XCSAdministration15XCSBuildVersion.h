//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC17XCSAdministration15XCSBuildVersion : NSObject
{
    MISSING_TYPE *major;
    MISSING_TYPE *train;
    MISSING_TYPE *minor;
    MISSING_TYPE *seed;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithExtendedGraphemeClusterLiteral:(id)arg1;
- (id)initWithUnicodeScalarLiteral:(id)arg1;
- (id)initWithStringLiteral:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithMajor:(long long)arg1 train:(id)arg2 minor:(long long)arg3 seed:(id)arg4;
@property(nonatomic, readonly) NSString *seed;
@property(nonatomic, readonly) long long minor; // @synthesize minor;
@property(nonatomic, readonly) NSString *train;
@property(nonatomic, readonly) long long major; // @synthesize major;

@end

