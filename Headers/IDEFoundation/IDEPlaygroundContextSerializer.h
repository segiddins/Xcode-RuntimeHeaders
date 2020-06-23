//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEPlaygroundContextSerializerCommon.h>

@interface IDEPlaygroundContextSerializer : IDEPlaygroundContextSerializerCommon
{
}

+ (BOOL)_playgroundContextRequiresUpgrade:(id)arg1;
+ (id)_discreteSourceCodeFileSectionElementForFileReference:(id)arg1 error:(id *)arg2;
+ (id)_discreteDocumentationFileSectionElementForFileReference:(id)arg1 context:(id)arg2 error:(id *)arg3;
+ (id)_discreteFileSectionElementForContext:(id)arg1 error:(id *)arg2;
+ (id)_pageElementNameForPageSuffix:(id)arg1 context:(id)arg2;
+ (id)_pagesElementForContext:(id)arg1 error:(id *)arg2;
+ (id)_timelineFileElementForContext:(id)arg1 error:(id *)arg2;
+ (id)_organizationNameAttributeForContext:(id)arg1 error:(id *)arg2;
+ (id)_lastMigrationAttributeForContext:(id)arg1 error:(id *)arg2;
+ (id)_timelineScrubberEnabledAttributeForContext:(id)arg1 error:(id *)arg2;
+ (id)_executeOnSourceChangeAttributeForContext:(id)arg1 error:(id *)arg2;
+ (id)_displayModeToggleAttributeForContext:(id)arg1 error:(id *)arg2;
+ (id)_autoTerminationDelayAttributeForContext:(id)arg1 error:(id *)arg2;
+ (id)_allowsResetAttributeForContext:(id)arg1 error:(id *)arg2;
+ (id)_targetPlatformIdentifierAttributeForContext:(id)arg1 error:(id *)arg2;
+ (id)versionAttributeForContext:(id)arg1 error:(id *)arg2;
+ (id)rootXMLElementFromContext:(id)arg1 error:(id *)arg2;
+ (id)fileWrapperForContext:(id)arg1 error:(id *)arg2;

@end

