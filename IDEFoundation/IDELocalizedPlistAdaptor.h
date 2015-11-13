//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizedResourceAdaptor.h>

@class IDEFileReference, NSDictionary, NSMutableDictionary;

@interface IDELocalizedPlistAdaptor : IDELocalizedResourceAdaptor
{
    IDEFileReference *_plistFileReference;
    NSDictionary *_baseStrings;
    NSMutableDictionary *_stringsCache;
}

+ (id)writeWorkForContext:(id)arg1 langauge:(id)arg2;
+ (id)readWorkForContext:(id)arg1;
- (void).cxx_destruct;
- (id)target;
- (id)expectedSuperitem;
- (id)expectedDirectoryPath;
- (id)expectedFileName;
- (id)filteredBaseStrings:(id)arg1;
- (id)localizedGroupIdentifier;
- (id)plistFileReference;
- (id)comments;
- (void)setStrings:(id)arg1 forLanguage:(id)arg2;
- (id)stringsForLanguage:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2 plistFileReference:(id)arg3;

@end

