//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSString, NSTextField, NSView;

@interface DBGGenericFourComponentInspectorProperty : IDEInspectorProperty
{
    NSTextField *_xTitleTextField;
    NSTextField *_yTitleTextField;
    NSTextField *_zTitleTextField;
    NSTextField *_wTitleTextField;
    NSTextField *_xComponentTextField;
    NSTextField *_yComponentTextField;
    NSTextField *_zComponentTextField;
    NSTextField *_wComponentTextField;
    NSView *_xComponentContainer;
    NSView *_yComponentContainer;
    NSView *_zComponentContainer;
    NSView *_wComponentContainer;
    NSTextField *_placeholderTextField;
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_valueType;
}

- (void).cxx_destruct;
@property(retain) NSString *valueType; // @synthesize valueType=_valueType;
@property(retain) IDEInspectorKeyPath *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
@property __weak NSTextField *placeholderTextField; // @synthesize placeholderTextField=_placeholderTextField;
@property __weak NSView *wComponentContainer; // @synthesize wComponentContainer=_wComponentContainer;
@property __weak NSView *zComponentContainer; // @synthesize zComponentContainer=_zComponentContainer;
@property __weak NSView *yComponentContainer; // @synthesize yComponentContainer=_yComponentContainer;
@property __weak NSView *xComponentContainer; // @synthesize xComponentContainer=_xComponentContainer;
@property __weak NSTextField *wComponentTextField; // @synthesize wComponentTextField=_wComponentTextField;
@property __weak NSTextField *zComponentTextField; // @synthesize zComponentTextField=_zComponentTextField;
@property __weak NSTextField *yComponentTextField; // @synthesize yComponentTextField=_yComponentTextField;
@property __weak NSTextField *xComponentTextField; // @synthesize xComponentTextField=_xComponentTextField;
@property __weak NSTextField *wTitleTextField; // @synthesize wTitleTextField=_wTitleTextField;
@property __weak NSTextField *zTitleTextField; // @synthesize zTitleTextField=_zTitleTextField;
@property __weak NSTextField *yTitleTextField; // @synthesize yTitleTextField=_yTitleTextField;
@property __weak NSTextField *xTitleTextField; // @synthesize xTitleTextField=_xTitleTextField;
- (void)setupRefreshTriggersAndConfigure;
- (double)baseline;
- (void)_setPlaceholderString:(id)arg1;
- (void)_configureForNilValue;
- (void)refresh;
- (BOOL)_updateValuesForInspectorValue:(id)arg1;
- (void)loadView;

@end

