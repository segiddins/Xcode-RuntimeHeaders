//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEDistributionProcessingPackagingStep.h>

@class NSString;

@interface IDEDistributionCreateIPAStep : IDEDistributionProcessingPackagingStep
{
    NSString *name;
}

+ (id)packagePathExtension;
+ (_Bool)runsPerThinningVariant;
+ (_Bool)supportsDryRun;
+ (BOOL)wantsPayloadDir;
@property(copy) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (_Bool)runWithError:(id *)arg1;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;

@end

