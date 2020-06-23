//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSString, NSTextField;

@interface DBGStaticBooleanInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_staticText;
    long long _bitMask;
    BOOL _isBitfield;
    long long _bits;
    NSTextField *_textField;
}

- (void).cxx_destruct;
@property __weak NSTextField *textField; // @synthesize textField=_textField;
- (void)configureEnumeratedOptions;
- (void)setupRefreshTriggersAndConfigure;
- (double)baseline;
- (void)refresh;

@end

