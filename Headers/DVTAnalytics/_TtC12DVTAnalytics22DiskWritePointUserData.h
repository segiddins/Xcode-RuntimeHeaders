//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC12DVTAnalytics22DiskWritePointUserData : NSObject
{
    MISSING_TYPE *name;
    MISSING_TYPE *comments;
    MISSING_TYPE *resolved;
    MISSING_TYPE *analyticsPointDefaultName;
    MISSING_TYPE *locallySymbolicatedAnalyticsPointDefaultName;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)validateValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;
@property(nonatomic, copy) NSString *locallySymbolicatedAnalyticsPointDefaultName;
@property(nonatomic, copy) NSString *analyticsPointDefaultName;
@property(nonatomic) BOOL resolved; // @synthesize resolved;
@property(nonatomic, copy) NSString *comments;
@property(nonatomic, copy) NSString *name;

@end

