//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/Xcode3UpgradeTask.h>

@class NSString;

@interface Xcode3ConvertDeveloperIDToMacDeveloperSigning : Xcode3UpgradeTask
{
    NSString *_configurationName;
}

+ (id)analyzeInContext:(id)arg1;
@property(copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
- (void).cxx_destruct;
- (BOOL)upgrade;

@end

