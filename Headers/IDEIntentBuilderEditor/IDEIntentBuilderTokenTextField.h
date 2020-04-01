//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import <IDEIntentBuilderEditor/IDEIntentBuilderTokenTextFieldCellDataSource-Protocol.h>
#import <IDEIntentBuilderEditor/IDEIntentBuilderTokenTextFieldCellDelegate-Protocol.h>
#import <IDEIntentBuilderEditor/NSTextFieldDelegate-Protocol.h>
#import <IDEIntentBuilderEditor/NSTextViewDelegate-Protocol.h>

@class NSString;
@protocol IDEIntentBuilderTokenTextFieldDataSource, IDEIntentBuilderTokenTextFieldDelegate, NSTextFieldDelegate;

@interface IDEIntentBuilderTokenTextField : NSTextField <NSTextFieldDelegate, NSTextViewDelegate, IDEIntentBuilderTokenTextFieldCellDataSource, IDEIntentBuilderTokenTextFieldCellDelegate>
{
    BOOL _isAutocompleting;
    id <IDEIntentBuilderTokenTextFieldDelegate> _eventsDelegate;
    id <IDEIntentBuilderTokenTextFieldDataSource> _dataSource;
}

@property __weak id <IDEIntentBuilderTokenTextFieldDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property __weak id <IDEIntentBuilderTokenTextFieldDelegate> eventsDelegate; // @synthesize eventsDelegate=_eventsDelegate;
- (void).cxx_destruct;
- (void)tokenTextFieldCell:(id)arg1 tokenClicked:(id)arg2 inRect:(struct CGRect)arg3 ofView:(id)arg4 atCharacterIndex:(unsigned long long)arg5;
- (id)availableTokensForTextFieldCell:(id)arg1;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (void)controlTextDidChange:(id)arg1;
- (void)_commonInit;
- (void)setAttributedStringValue:(id)arg1;
- (BOOL)becomeFirstResponder;
- (long long)backgroundStyle;
- (void)setFont:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <NSTextFieldDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

