//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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
- (BOOL)_shouldTargetCurrentConfigurationForOperation:(long long)arg1 onObjects:(id)arg2 hints:(id)arg3;
- (id)currentHintsWithSource:(long long)arg1;

@end

