//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEKeyBindingSet.h>

@class NSMutableDictionary;

@interface IDEMenuKeyBindingSet : IDEKeyBindingSet
{
    NSMutableDictionary *_menuKeyBindingForCommandIdentifier;
    NSMutableDictionary *_menuKeyBindingForCombinedIdentifier;
    NSMutableDictionary *_menuKeyBindingsForCommandGroupIdentifier;
    id _keyBindingDidChangeShortcutsNotificationObservingToken;
}

+ (id)defaultKeyBindingSet;
+ (Class)_defaultMenuKeyBindingSetClass;
+ (void)initialize;
- (void).cxx_destruct;
- (void)activate;
- (id)prefixedKeyboardShortcuts;
- (void)_keyBindingSetWillRemoveKeyBinding:(id)arg1;
- (void)_keyBindingSetDidInsertKeyBinding:(id)arg1;
- (id)menuKeyBindingsForCommandGroupIdentifier:(id)arg1;
- (id)menuItemForCombinedIdentifier:(id)arg1;
- (id)menuKeyBindingForCombinedIdentifier:(id)arg1;
- (id)menuItemForCommandIdentifier:(id)arg1;
- (id)menuKeyBindingForCommandIdentifier:(id)arg1;
- (id)deltaDictionary;
- (void)updateDictionary;
- (void)primitiveInvalidate;
- (id)initWithDictionary:(id)arg1;
- (void)_appendMenuKeyBindingsDictionary:(id)arg1;
- (void)_appendDebuggingAdditionUIKeyBindingsToMenuKeyBindingSet:(id)arg1;
- (void)_appendKeyBindingsToMenuKeyBindingSet:(id)arg1 menuDefinitionExtensionAttribute:(id)arg2 allowedEditorDocumentIdentifiers:(id)arg3;
- (void)_appendKeyBindingsToMenuKeyBindingSet:(id)arg1 menuDefinitionExtension:(id)arg2 group:(id)arg3 groupIdentifier:(id)arg4 parentTitle:(id)arg5;
- (BOOL)getLockedModifierMask:(unsigned long long *)arg1 unlockedModifierMask:(unsigned long long *)arg2 forKeyBinding:(id)arg3;

@end

