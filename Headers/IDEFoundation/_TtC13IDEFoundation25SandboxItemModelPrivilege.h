//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC13IDEFoundation25SandboxItemModelPrivilege : NSObject
{
    MISSING_TYPE *key;
    MISSING_TYPE *entitlement;
    MISSING_TYPE *deprecatedEntitlement;
    MISSING_TYPE *usageDescriptionKeys;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithKey:(id)arg1 entitlement:(id)arg2 deprecatedEntitlement:(id)arg3 usageDescriptionKeys:(id)arg4;
@property(nonatomic, readonly) NSArray *usageDescriptionKeys;
@property(nonatomic, readonly) NSString *deprecatedEntitlement;
@property(nonatomic, readonly) NSString *entitlement;
@property(nonatomic, readonly) NSString *key;

@end

