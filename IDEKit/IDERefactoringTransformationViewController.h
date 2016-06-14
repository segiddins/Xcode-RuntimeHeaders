//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDERefactoringViewController.h>

#import <IDEKit/NSTextFieldDelegate-Protocol.h>

@class IDEIndexSymbol, IDERefactoringInputValidator, NSDictionary, NSString;
@protocol IDERefactoringReservedWordChecking;

@interface IDERefactoringTransformationViewController : IDERefactoringViewController <NSTextFieldDelegate>
{
    IDEIndexSymbol *_originalSymbol;
    IDERefactoringInputValidator *_inputValidator;
    Class _inputValidatorClass;
    BOOL _checkForReservedWords;
    id <IDERefactoringReservedWordChecking> _reservedWordChecker;
}

@property(retain) id <IDERefactoringReservedWordChecking> reservedWordChecker; // @synthesize reservedWordChecker=_reservedWordChecker;
@property(retain) IDERefactoringInputValidator *inputValidator; // @synthesize inputValidator=_inputValidator;
@property(retain) IDEIndexSymbol *originalSymbol; // @synthesize originalSymbol=_originalSymbol;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)arg1;
- (id)nibBundle;
@property(readonly) NSString *previewSummary;
@property(readonly) NSDictionary *userInput;
- (void)setInitialData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

