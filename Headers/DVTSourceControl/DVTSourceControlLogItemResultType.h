//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlXPCResultType.h>

@class DVTSourceControlLogItem, MISSING_TYPE;

@interface DVTSourceControlLogItemResultType : DVTSourceControlXPCResultType
{
    MISSING_TYPE *logItem;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLogItem:(id)arg1 error:(id)arg2;
- (id)initWithError:(id)arg1;
@property(nonatomic, readonly) DVTSourceControlLogItem *logItem; // @synthesize logItem;

@end

