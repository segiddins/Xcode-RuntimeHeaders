//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlXPCResultType.h>

@class MISSING_TYPE;

@interface DVTSourceControlBoolResultType : DVTSourceControlXPCResultType
{
    MISSING_TYPE *value;
}

+ (BOOL)supportsSecureCoding;
- (id)init;
- (id)copyWithZone:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(BOOL)arg1 error:(id)arg2;
- (id)initWithError:(id)arg1;
@property(nonatomic, readonly) BOOL value; // @synthesize value;

@end

