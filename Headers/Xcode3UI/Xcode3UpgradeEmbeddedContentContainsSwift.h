//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/Xcode3UpgradeTargetTask.h>

@class NSString;

@interface Xcode3UpgradeEmbeddedContentContainsSwift : Xcode3UpgradeTargetTask
{
    NSString *_configurationName;
    NSString *_value;
}

+ (id)analyzeInContext:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSString *value; // @synthesize value=_value;
@property(copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
- (BOOL)upgrade;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 context:(id)arg3 configurationName:(id)arg4 value:(id)arg5;

@end

