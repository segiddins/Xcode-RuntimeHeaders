//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionItemProcessingStep.h>

@interface IDEDistributionZipODRItemStep : IDEDistributionItemProcessingStep
{
}

+ (_Bool)runsPerThinningVariant;
+ (BOOL)extractSourcePath:(id)arg1 destinationPath:(id)arg2 error:(id *)arg3;
+ (BOOL)archiveSourcePath:(id)arg1 destinationPath:(id)arg2 error:(id *)arg3;
- (_Bool)runWithError:(id *)arg1;
- (_Bool)shouldSkip;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (id)name;

@end

