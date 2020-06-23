//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEDistributionStep.h>

@interface IDEDistributionAnalyzeArchiveStep : IDEDistributionStep
{
}

+ (id)propertyListForContext:(id)arg1;
+ (id)availableOptionsForPropertyList;
+ (id)archivedTeamForContext:(id)arg1;
- (BOOL)loadFromExportOptions:(id)arg1 error:(id *)arg2;
- (BOOL)analyzeArchiveWithError:(id *)arg1;
- (void)populateSigningStateFromArchive;
- (BOOL)populateTeamFromArchiveWithError:(id *)arg1;
- (BOOL)populateTopLevelDistributionItemsIfNecessaryWithError:(id *)arg1;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;

@end
