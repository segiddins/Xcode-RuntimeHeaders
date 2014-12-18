//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEHexEditor.h"

@class DBGMemoryBrowserDocument, DVTBorderedView, NSButton, NSPopUpButton, NSTextField;

@interface DBGMemoryBrowser : IDEHexEditor
{
    DVTBorderedView *_bottomToolBar;
    NSTextField *_addressTextField;
    NSButton *_freezeButton;
    NSPopUpButton *_numberOfBytes;
}

+ (unsigned long long)defaultLineNumberFormat;
+ (id)lineNumberFormatStateKey;
+ (BOOL)_isAddressData64Bit:(unsigned long long)arg1;
+ (id)displayStringForAddress:(unsigned long long)arg1;
+ (id)keyPathsForValuesAffectingMemoryBrowserDocument;
- (void).cxx_destruct;
- (void)_updateMemoryDataWithRelativeOffset:(long long)arg1;
- (void)nextOrPreviousPage:(id)arg1;
- (void)numberOfBytesChanged:(id)arg1;
- (void)addressEntered:(id)arg1;
- (void)_handleMemoryDataUpdated;
@property(readonly) DBGMemoryBrowserDocument *memoryBrowserDocument;
- (void)loadView;

@end

