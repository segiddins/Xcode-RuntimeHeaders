//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

#import <IDEInterfaceBuilderKit/DVTResourceComboBoxDataSource-Protocol.h>
#import <IDEInterfaceBuilderKit/DVTResourceComboBoxDelegate-Protocol.h>

@class DVTResourceComboBox, IBMutableIdentityDictionary, IBNamedResourceRecord, IBResourceValueTransformer, IDEInspectorKeyPath, NSArray, NSGridRow, NSMutableDictionary, NSPopUpButton, NSString, NSTextField;

@interface IBInspectorNamedResourceProperty : IDEInspectorProperty <DVTResourceComboBoxDataSource, DVTResourceComboBoxDelegate>
{
    IBResourceValueTransformer *_resourceValueTransformer;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_listContentKeyPath;
    IDEInspectorKeyPath *_systemListContentKeyPath;
    IDEInspectorKeyPath *_systemPrivateListContentKeyPath;
    NSMutableDictionary *_groupNameToResourceList;
    NSArray *_filteredResourceList;
    IBNamedResourceRecord *_currentNamedResource;
    IBMutableIdentityDictionary *_contentToImageConfigurations;
    long long _isChangingResourceConfigurationCount;
    DVTResourceComboBox *_comboBox;
    NSTextField *_titleLabel;
    NSGridRow *_renderModeGridRow;
    NSGridRow *_symbolScaleGridRow;
    NSPopUpButton *_renderModePopupButton;
    NSPopUpButton *_symbolScalePopupButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSPopUpButton *symbolScalePopupButton; // @synthesize symbolScalePopupButton=_symbolScalePopupButton;
@property(retain, nonatomic) NSPopUpButton *renderModePopupButton; // @synthesize renderModePopupButton=_renderModePopupButton;
@property(retain, nonatomic) NSGridRow *symbolScaleGridRow; // @synthesize symbolScaleGridRow=_symbolScaleGridRow;
@property(retain, nonatomic) NSGridRow *renderModeGridRow; // @synthesize renderModeGridRow=_renderModeGridRow;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DVTResourceComboBox *comboBox; // @synthesize comboBox=_comboBox;
- (void)symbolScaleChange:(id)arg1;
- (void)renderModeChange:(id)arg1;
- (void)updateImageConfigurationsWithBlock:(CDUnknownBlockType)arg1;
- (id)imageConfiguration;
- (void)refreshImageConfigurationControls;
- (void)resourceComboBoxDidStopShowingMenu:(id)arg1;
- (void)resourceComboBoxDidStartShowingMenu:(id)arg1;
- (void)resourceComboBoxFollowButtonPressed:(id)arg1;
- (id)documentLocationForValue;
- (id)ibResourceManager;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)primitiveInvalidate;
- (void)configureActionSelectorForControl:(id)arg1;
- (id)imageConfigurations;
- (id)defaultImageConfiguration;
- (void)updateConfigurationMapForContent:(id)arg1 resourceValue:(id)arg2;
- (id)resourceModifierForContent:(id)arg1;
- (BOOL)allowResourceConfigurationControlsForResourceValue:(id)arg1;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (id)fallbackSystemPrivateResourceListContentKeyPathForType:(id)arg1;
- (id)fallbackSystemResourceListContentKeyPathForType:(id)arg1;
- (id)fallbackUserResourceListContentKeyPathForType:(id)arg1;
- (void)setImageConfigurationControlsHidden:(BOOL)arg1;
- (void)refresh;
- (id)imageConfigurationIfAnyForResourceValue:(id)arg1;
- (void)setComboBoxStringValue:(id)arg1 namespaceID:(id)arg2;
- (void)refreshIconRepresentationNamedResource:(id)arg1;
- (void)refreshIconRepresentationWithValue:(id)arg1 namespaceID:(id)arg2;
- (void)invalidateResourceList;
- (id)fullResourceListForGroupName:(id)arg1;
- (id)namespaceIDForGroupName:(id)arg1;
- (id)listContentKeyPathForGroupName:(id)arg1;
- (id)orderedGroups;
- (void)comboBox:(id)arg1 didChooseCell:(id)arg2;
- (long long)numberOfRowsInComboBox:(id)arg1;
- (BOOL)comboBox:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)comboBox:(id)arg1 isGroupRow:(long long)arg2;
- (void)comboBox:(id)arg1 filterRowsWithText:(id)arg2 firstTime:(BOOL)arg3;
- (id)rankName:(id)arg1 matchingText:(id)arg2;
- (id)comboBox:(id)arg1 cellAtRow:(long long)arg2;
- (id)mediaType;
- (Class)resourceClass;
- (id)resourceType;
- (double)accessoryCenterAnchor;
- (double)baseline;
- (id)inspectorController;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

