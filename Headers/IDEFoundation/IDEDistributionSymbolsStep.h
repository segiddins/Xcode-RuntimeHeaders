//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEDistributionItemProcessingStep.h>

@interface IDEDistributionSymbolsStep : IDEDistributionItemProcessingStep
{
}

- (_Bool)runWithError:(id *)arg1;
- (_Bool)shouldSkip;
- (id)shouldProcessSymbolsForItem:(id)arg1 archive:(id)arg2 error:(id *)arg3;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (id)name;

@end

