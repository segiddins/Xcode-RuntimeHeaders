//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSString, NSTextField;

@interface DBGStaticFontInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_staticText;
    long long _bitMask;
    BOOL _isBitfield;
    long long _bits;
    NSTextField *_textField;
}

@property __weak NSTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (double)baseline;
- (void)_configureForNilFont;
- (void)refresh;

@end
