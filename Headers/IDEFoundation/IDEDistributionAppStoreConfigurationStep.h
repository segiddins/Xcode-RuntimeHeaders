//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionStep.h>

@interface IDEDistributionAppStoreConfigurationStep : IDEDistributionStep
{
}

+ (id)propertyListForContext:(id)arg1;
+ (id)availableOptionsForPropertyList;
- (BOOL)loadFromExportOptions:(id)arg1 error:(id *)arg2;
- (BOOL)fetchAndSetAppStoreConfigurationUsingDefaultConfiguration:(BOOL)arg1 error:(id *)arg2;
- (id)platformsDictionaryForConfigurationResponse:(id)arg1 topLevelKey:(id)arg2 logAspect:(id)arg3 error:(id *)arg4;
- (id)defaultConfigurationPlatformsDictionaryWithError:(id *)arg1;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;

@end

