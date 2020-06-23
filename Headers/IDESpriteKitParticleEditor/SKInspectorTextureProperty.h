//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSArray, NSComboBox;

@interface SKInspectorTextureProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSArray *_availableTextureNames;
    struct NSObject *_resourcesKVOToken;
    NSComboBox *_comboBox;
}

@property(retain) NSComboBox *comboBox; // @synthesize comboBox=_comboBox;
- (void).cxx_destruct;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (double)baseline;
- (void)primitiveInvalidate;
- (void)_beginObservingWorkspaceImageResources;
- (void)viewDidLoad;

@end

