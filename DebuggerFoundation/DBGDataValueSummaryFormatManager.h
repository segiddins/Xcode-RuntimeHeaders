//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTMapTable, NSMutableDictionary;

@interface DBGDataValueSummaryFormatManager : NSObject
{
    DVTMapTable *_sessionSpecificData;
    NSMutableDictionary *_summaryFormatsByType;
    NSMutableDictionary *_userDefinedFormatters;
    BOOL _hasUnhandledArchiveData;
}

+ (id)summaryFormatterDirectories;
+ (id)legacyCustomDataFormattersPath;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_writeUserDefinedFormatters;
- (void)_loadUserDefinedFormatters;
- (void)addSummaryFormatters:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setSummaryFormat:(id)arg1 forType:(id)arg2;
- (id)_defaultSummaryFormatForType:(id)arg1;
- (id)summaryFormatForType:(id)arg1;
- (id)summaryFormatForDataValue:(id)arg1;
- (id)_sessionSpecficInfo:(id)arg1;
- (id)summaryFormatsByType;
- (id)loadDataFormattersFromDirectory:(id)arg1;
- (id)init;

@end

