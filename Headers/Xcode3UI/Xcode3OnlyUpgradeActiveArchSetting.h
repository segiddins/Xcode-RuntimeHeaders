//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/Xcode3UpgradeProjectTask.h>

@class NSString;

@interface Xcode3OnlyUpgradeActiveArchSetting : Xcode3UpgradeProjectTask
{
    NSString *_configurationName;
}

+ (id)analyzeInContext:(id)arg1;
@property(copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
- (void).cxx_destruct;
- (BOOL)upgrade;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 context:(id)arg3 configurationName:(id)arg4;

@end

