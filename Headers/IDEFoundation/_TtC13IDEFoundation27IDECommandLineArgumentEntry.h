//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC13IDEFoundation27IDECommandLineArgumentEntry : NSObject
{
    MISSING_TYPE *argument;
    MISSING_TYPE *enabled;
}

- (void).cxx_destruct;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, readonly) long long hash;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) NSString *description;
- (id)init;
- (id)initWithArgument:(id)arg1 enabled:(BOOL)arg2;
@property(nonatomic) BOOL enabled;
- (BOOL)isEnabled;
@property(nonatomic, copy) NSString *argument;

@end

