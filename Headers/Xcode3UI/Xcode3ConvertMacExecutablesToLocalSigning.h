//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/Xcode3UpgradeTask.h>

@class NSString;

@interface Xcode3ConvertMacExecutablesToLocalSigning : Xcode3UpgradeTask
{
    NSString *_configurationName;
}

+ (id)analyzeInContext:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
- (BOOL)upgrade;

@end
