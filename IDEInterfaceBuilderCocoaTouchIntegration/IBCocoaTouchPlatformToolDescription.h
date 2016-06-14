//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBPlatformToolDescription.h>

@class IBCocoaTouchTargetRuntime;

@interface IBCocoaTouchPlatformToolDescription : IBPlatformToolDescription
{
    long long _fidelity;
}

+ (id)effectiveToolDescriptionForTargetRuntime:(id)arg1 role:(long long)arg2 scaleFactor:(double)arg3 fidelity:(long long)arg4;
+ (id)effectiveToolDescriptionForTargetRuntime:(id)arg1 role:(long long)arg2 scaleFactor:(double)arg3;
@property(readonly, nonatomic) long long fidelity; // @synthesize fidelity=_fidelity;
- (id)toolName;
- (id)preferredDeviceTypeReturningError:(id *)arg1;
- (id)newestAvailableAndSupportedRuntimeReturningError:(id *)arg1;
- (id)ib_verboseDescription;
- (id)description;
- (id)_fidelityString;
- (id)descriptionBySettingRole:(long long)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime;
- (BOOL)isEqualToDescription:(id)arg1;

@end

