//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _TtC13IDEFoundation24HardenedRuntimeAllowance : NSObject
{
    // Error parsing type: , name: key
    // Error parsing type: , name: entitlement
    // Error parsing type: , name: enabled
    // Error parsing type: , name: usageDescriptionKeys
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithKey:(id)arg1 entitlement:(id)arg2 enabled:(BOOL)arg3 usageDescriptionKeys:(id)arg4;
@property(nonatomic, readonly) NSArray *usageDescriptionKeys;
@property(nonatomic) BOOL enabled; // @synthesize enabled;
@property(nonatomic, readonly) NSString *entitlement;
@property(nonatomic, readonly) NSString *key;

@end

