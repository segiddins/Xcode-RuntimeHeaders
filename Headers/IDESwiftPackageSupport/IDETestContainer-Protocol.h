//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESwiftPackageSupport/NSObject-Protocol.h>

@class NSArray, NSSet, NSString;

@protocol IDETestContainer <NSObject>
@property(nonatomic, readonly) NSArray *arrangedSubtests;
@property(nonatomic, readonly) NSSet *subtests;
@property(nonatomic, readonly) BOOL canHaveSubtests;
@property(nonatomic, readonly) NSString *name;
@end

