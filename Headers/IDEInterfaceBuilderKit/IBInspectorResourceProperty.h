//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IBAutoCompletingComboBoxDataSource, IBButtonComboBox, IBResourceValueTransformer, IDEInspectorKeyPath;

@interface IBInspectorResourceProperty : IDEInspectorProperty
{
    IBAutoCompletingComboBoxDataSource *_comboBoxDataSource;
    IBResourceValueTransformer *_resourceValueTransformer;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_listContentKeyPath;
    BOOL _hideRevealInEditorButton;
    IBButtonComboBox *_comboBox;
}

- (void).cxx_destruct;
@property BOOL hideRevealInEditorButton; // @synthesize hideRevealInEditorButton=_hideRevealInEditorButton;
@property(retain) IBButtonComboBox *comboBox; // @synthesize comboBox=_comboBox;
- (void)revealLocationInEditor:(id)arg1;
- (id)documentLocationForValue;
- (id)ibResourceManager;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)loadView;
- (void)primitiveInvalidate;
- (void)configureComboBoxButton;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)mediaType;
- (Class)resourceClass;
- (id)resourceType;
- (double)baseline;
- (id)inspectorController;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end

