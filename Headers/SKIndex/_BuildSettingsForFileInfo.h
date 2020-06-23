//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IDEIndexable;

__attribute__((visibility("hidden")))
@interface _BuildSettingsForFileInfo : NSObject
{
    unsigned long long registerCount;
    BOOL _hasInferredCompilerArguments;
    BOOL _isFileKnownByDatabase;
    id <IDEIndexable> _indexable;
    unsigned long long _numberOfInvalidSettingsTries;
}

- (void).cxx_destruct;
@property unsigned long long numberOfInvalidSettingsTries; // @synthesize numberOfInvalidSettingsTries=_numberOfInvalidSettingsTries;
@property(retain) id <IDEIndexable> indexable; // @synthesize indexable=_indexable;
@property BOOL isFileKnownByDatabase; // @synthesize isFileKnownByDatabase=_isFileKnownByDatabase;
@property BOOL hasInferredCompilerArguments; // @synthesize hasInferredCompilerArguments=_hasInferredCompilerArguments;
- (void)reset;

@end
