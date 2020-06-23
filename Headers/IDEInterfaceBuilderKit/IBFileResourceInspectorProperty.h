//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class DVTFileDataType, IDEInspectorKeyPath, NSComboBox, NSString;

@interface IBFileResourceInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    BOOL _allowsNilValues;
    NSString *_explicitPlaceholder;
    IDEInspectorKeyPath *_explicitPlaceholderKeyPath;
    DVTFileDataType *_supportedFileDataType;
    NSComboBox *_comboBox;
}

- (void).cxx_destruct;
@property(retain) NSComboBox *comboBox; // @synthesize comboBox=_comboBox;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (id)suggestedResourceNames;
- (double)baseline;

@end

