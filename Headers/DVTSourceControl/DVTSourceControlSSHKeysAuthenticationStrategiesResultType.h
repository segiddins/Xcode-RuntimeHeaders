//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlXPCResultType.h>

@class MISSING_TYPE, NSArray;

@interface DVTSourceControlSSHKeysAuthenticationStrategiesResultType : DVTSourceControlXPCResultType
{
    MISSING_TYPE *values;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init:(id)arg1 error:(id)arg2;
- (id)initWithError:(id)arg1;
@property(nonatomic, readonly) NSArray *values;

@end

