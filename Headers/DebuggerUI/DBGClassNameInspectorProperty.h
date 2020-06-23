//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSButton, NSLayoutConstraint, NSTextField;
@protocol IDEIndexSymbol;

@interface DBGClassNameInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSLayoutConstraint *_trailingLabelToJumpButtonConstraint;
    NSTextField *_textField;
    NSButton *_linkButton;
    id <IDEIndexSymbol> _symbol;
}

- (void).cxx_destruct;
@property(retain) id <IDEIndexSymbol> symbol; // @synthesize symbol=_symbol;
@property __weak NSButton *linkButton; // @synthesize linkButton=_linkButton;
@property __weak NSTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak NSLayoutConstraint *trailingLabelToJumpButtonConstraint; // @synthesize trailingLabelToJumpButtonConstraint=_trailingLabelToJumpButtonConstraint;
- (void)linkButtonAction:(id)arg1;
- (id)_tabControllerForWindow;
- (void)_setLinkButtonHidden:(BOOL)arg1;
- (void)_configureForNilString;
- (id)symbolForName:(id)arg1 moduleName:(id)arg2 inCollection:(id)arg3;
- (void)_getSymbol:(id)arg1;
- (double)baseline;
- (void)tearDownRefreshTriggers;
- (void)setupRefreshTriggersAndConfigure;
- (void)propertyViewWillUninstallFromContentView;
- (void)propertyViewDidInstallIntoWindow;
- (void)refresh;

@end

