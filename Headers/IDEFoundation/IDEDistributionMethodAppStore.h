//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionMethod.h>

@class DVTPlatform;

@interface IDEDistributionMethodAppStore : IDEDistributionMethod
{
}

@property(readonly) DVTPlatform *supportedPlatform;
- (BOOL)requiresDeveloperAccount;
- (BOOL)isAppStoreBound;
- (id)orderedDistributionStepClassNamesForTask:(int)arg1;
- (id)orderedDistributionStepClassNames;
- (id)exportStepName;
- (id)availableICloudEnvironmentsOverride;
- (id)taskNoun;
- (id)taskVerb;

@end
