//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSArray, NSComboBox, NSObject;
@protocol DVTInvalidation;

@interface SKInspectorTextureProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSArray *_availableTextureNames;
    NSObject<DVTInvalidation> *_resourcesKVOToken;
    NSComboBox *_comboBox;
}

- (void).cxx_destruct;
@property(retain) NSComboBox *comboBox; // @synthesize comboBox=_comboBox;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (double)baseline;
- (void)primitiveInvalidate;
- (void)_beginObservingWorkspaceImageResources;
- (void)viewDidLoad;

@end

