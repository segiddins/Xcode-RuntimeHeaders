//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDETemplateCompletionAssistant.h>

@class DVTTableView, Xcode3TargetMembershipDataSource;

@interface Xcode3FileTemplateCompletionAssistant : IDETemplateCompletionAssistant
{
    DVTTableView *_targetsTableView;
    Xcode3TargetMembershipDataSource *_dataSource;
}

- (void).cxx_destruct;
- (id)selectedBuildables;
- (void)didInstantiateItems:(id)arg1;
- (void)instantiateFileTemplatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)destinationManagerGroupDidChange:(id)arg1;
- (id)configuredSavePanel;
- (void)configureTargetsTableView;
- (BOOL)destinationManager:(id)arg1 shouldAddItemToMenu:(id)arg2;
- (void)handleSavePanelResult:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadView;
- (void)setDataSourceFileTypesForUTIs:(id)arg1;
- (void)setAssistantContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

