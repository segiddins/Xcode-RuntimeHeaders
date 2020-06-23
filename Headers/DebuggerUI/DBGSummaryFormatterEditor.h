//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DBGDataType, DBGDataValue, DVTObservingToken, NSArray, NSButton, NSImageView, NSPopover, NSString, NSTextField;

@interface DBGSummaryFormatterEditor : NSViewController
{
    NSTextField *_formatField;
    NSImageView *_validityImage;
    NSTextField *_validityLabel;
    NSString *_displayedSummaryFormat;
    DBGDataValue *_dataValue;
    NSArray *_types;
    DBGDataType *_selectedType;
    BOOL _isValid;
    NSString *_initialFormat;
    CDUnknownBlockType _doneButtonHandler;
    DVTObservingToken *_displayedSummaryFormatObserver;
    DVTObservingToken *_selectedTypeObserver;
    NSButton *_doneButton;
    NSPopover *_popover;
}

@property NSPopover *popover; // @synthesize popover=_popover;
@property NSButton *doneButton; // @synthesize doneButton=_doneButton;
@property(copy) CDUnknownBlockType doneButtonHandler; // @synthesize doneButtonHandler=_doneButtonHandler;
@property BOOL isValid; // @synthesize isValid=_isValid;
@property(retain) DBGDataType *selectedType; // @synthesize selectedType=_selectedType;
@property(retain) NSArray *types; // @synthesize types=_types;
@property(copy) NSString *displayedSummaryFormat; // @synthesize displayedSummaryFormat=_displayedSummaryFormat;
@property(retain) DBGDataValue *dataValue; // @synthesize dataValue=_dataValue;
- (void).cxx_destruct;
- (void)doneButtonPressed:(id)arg1;
- (void)revert;
- (void)_updateSummaryFormatValidity;
- (id)_summaryFormatFromSelectedType;
- (void)_handleUserEnteredSummaryFormatChanged;
@property(readonly) BOOL shouldShowPopUpButton;
- (void)loadView;
- (id)initForDataVale:(id)arg1;

@end

