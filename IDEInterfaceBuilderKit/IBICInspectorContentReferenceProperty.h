//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IBAutoCompletingComboBoxDataSource, IBButtonComboBox, IDEInspectorKeyPath, NSPopUpButton, NSTextField;

@interface IBICInspectorContentReferenceProperty : IDEInspectorProperty
{
    IBAutoCompletingComboBoxDataSource *_comboBoxDataSource;
    IBButtonComboBox *_comboBox;
    NSTextField *_label;
    NSPopUpButton *_pullDownMenuButton;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_embeddableChildrenRelationshipKeyPath;
    IDEInspectorKeyPath *_expectedReferenceTypeKeyPath;
    long long _matchingStyle;
    BOOL _supportsEmbeddingContent;
    BOOL _showingReferenceArea;
}

- (void).cxx_destruct;
- (void)revealReferencedItem:(id)arg1;
- (id)referencedDocumentLocation;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)userDidChangeValue:(id)arg1;
- (void)refresh;
- (void)refreshEmbeddingState;
- (void)removeRedundantItems:(id)arg1;
- (void)removeReference:(id)arg1;
- (void)useReference:(id)arg1;
- (void)promoteAndReference:(id)arg1;
- (void)embedNew:(id)arg1;
- (void)embedOriginal:(id)arg1;
- (void)embedCopy:(id)arg1;
- (void)embedReferencedContentAndOptionallyDeleteOriginal:(BOOL)arg1;
- (void)refreshComboBox;
- (id)defaultPlaceholder;
- (id)presentedTypeName;
- (id)allContentReferenceNames;
- (Class)allowedContentReferenceClass;
- (double)baseline;
- (void)setupRefreshTriggersAndConfigure;
- (void)loadView;
- (id)nibName;
- (void)primitiveInvalidate;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end

