//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSComboBox, NSDictionary, NSString;

@interface SKEResourceProperty : IDEInspectorProperty
{
    NSComboBox *_comboBox;
    IDEInspectorKeyPath *_valueKeyPath;
    unsigned long long _resourceType;
    NSString *_placeholder;
    NSDictionary *_resources;
}

+ (unsigned long long)resourceTypeFromString:(id)arg1;
- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (id)suggestedSceneNames;
- (double)baseline;

@end

