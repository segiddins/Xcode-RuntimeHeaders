//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBMemberRelationshipHelper : NSObject
{
    long long _behavior;
}

+ (id)sharedInstance;
@property(nonatomic) long long behavior; // @synthesize behavior=_behavior;
- (void)handleOperation:(long long)arg1 onObjects:(id)arg2 inDocument:(id)arg3 fromSource:(long long)arg4 currentConfigurationOnlyHandler:(CDUnknownBlockType)arg5 defaultConfigurationHandler:(CDUnknownBlockType)arg6;
- (void)handleOperation:(long long)arg1 onObjects:(id)arg2 inDocument:(id)arg3 hints:(id)arg4 currentConfigurationOnlyHandler:(CDUnknownBlockType)arg5 defaultConfigurationHandler:(CDUnknownBlockType)arg6;
- (BOOL)_shouldTargetCurrentConfigurationForOperation:(long long)arg1 onObjects:(id)arg2 hints:(id)arg3 document:(id)arg4;
- (id)currentHintsWithSource:(long long)arg1;

@end

