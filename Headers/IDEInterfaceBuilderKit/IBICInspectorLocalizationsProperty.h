//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSArray;

@interface IBICInspectorLocalizationsProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_assetKeyPath;
    NSArray *_currentLocalizations;
    NSArray *_localizationCheckboxes;
}

- (void).cxx_destruct;
- (void)_changeLocalization:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)refreshValues;
- (void)refreshLocalizations;
- (id)assets;

@end

