//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTFilterControlBar.h>

#import <IDEKit/DVTFilterTokenFieldControllerDelegate-Protocol.h>

@class DVTFilterTokenField, DVTFilterTokenFieldController, DVTFilterTokenHelper, NSString;
@protocol DVTFilterTokenFieldControllerDelegate;

@interface IDETokenFilterControlBar : DVTFilterControlBar <DVTFilterTokenFieldControllerDelegate>
{
    DVTFilterTokenHelper *_filterTokenHelper;
    id <DVTFilterTokenFieldControllerDelegate> _tokenDelegate;
    DVTFilterTokenFieldController *_tokenFieldController;
}

@property(readonly) DVTFilterTokenFieldController *tokenFieldController; // @synthesize tokenFieldController=_tokenFieldController;
@property(retain, nonatomic) id <DVTFilterTokenFieldControllerDelegate> tokenDelegate; // @synthesize tokenDelegate=_tokenDelegate;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)filterTokenFieldController:(id)arg1 tokensForTokensFromPasteboard:(id)arg2;
- (int)filterTokenFieldControllerDefaultGlobalOperatorType:(id)arg1;
- (id)filterTokenFieldController:(id)arg1 completionTokensForString:(id)arg2;
- (void)filterTokenFieldController:(id)arg1 globalOperatorDidChange:(int)arg2;
- (void)filterTokenFieldController:(id)arg1 editingStringDidUpdate:(id)arg2;
- (void)filterTokenFieldController:(id)arg1 tokensDidUpdate:(id)arg2;
- (void)filterTokenFieldController:(id)arg1 tokensDidUpdate:(id)arg2 editingString:(id)arg3 globalOperator:(int)arg4;
- (id)filterTokenFieldController:(id)arg1 menuItemsFor:(id)arg2;
- (id)filterTokenFieldController:(id)arg1 tokenFor:(id)arg2;
@property(retain, nonatomic) DVTFilterTokenHelper *filterTokenHelper; // @synthesize filterTokenHelper=_filterTokenHelper;
- (id)initWithFrame:(struct CGRect)arg1 andTokenHelper:(id)arg2;
- (void)_addValuelessToken:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_filterControlFieldWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTFilterTokenField *filterControlField; // @dynamic filterControlField;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

