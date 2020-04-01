//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTFilterTokenBasedFieldController.h>

@class NSMutableDictionary;

@interface DVTFilterTokenFieldController : DVTFilterTokenBasedFieldController
{
}

- (id)tokenFieldCompletion:(id)arg1 rowStringFor:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (void)_updateValuesWith:(id)arg1 editingString:(id)arg2;
- (void)_notifySomethingChanged;
- (void)_tokenFieldMenuItemDidClick:(id)arg1;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (void)tokenField:(id)arg1 globalOperatorDidChange:(int)arg2;
- (void)_notifyGlobalOperatorChanged:(int)arg1;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_menuItemsForSampleFilters;
- (id)_attachmentCellForToken:(id)arg1;
- (void)_handleCompletionFromStorage:(id)arg1 andLastChangeID:(unsigned long long)arg2;
- (Class)_tokenClass;

// Remaining properties
@property(retain) NSMutableDictionary *completionData; // @dynamic completionData;

@end

