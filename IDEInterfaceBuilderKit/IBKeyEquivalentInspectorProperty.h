//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IBKeyEquivalentEntryField, IDEInspectorKeyPath;

@interface IBKeyEquivalentInspectorProperty : IDEInspectorProperty
{
    IBKeyEquivalentEntryField *keyEquivalentEntryField;
    IDEInspectorKeyPath *_valueKeyPath;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (void)primitiveInvalidate;
- (double)baseline;

@end

