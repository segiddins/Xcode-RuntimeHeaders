//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEMenuKeyBindingProvider-Protocol.h>

@class NSString;

@interface IDEInspectorsMenuDelegate : NSObject <IDEMenuKeyBindingProvider>
{
}

+ (void)updateMenu:(id)arg1 forInspectorArea:(id)arg2;
+ (id)defaultMenuKeyBindingsForGroup:(id)arg1;
+ (void)_updateMenu:(id)arg1 forInspectorArea:(id)arg2 menuDefinitionExtensionIdentifier:(id)arg3 toggleVisibilityIdentifier:(id)arg4;
+ (void)_addMenuItemsForInspectorArea:(id)arg1 toMenu:(id)arg2 withKeyBindingSet:(id)arg3;
+ (id)_defaultMenuKeyBindingsForGroup:(id)arg1 forExtensionPointIdentifier:(id)arg2 submenuIdentifier:(id)arg3 actions:(id)arg4 modifierMask:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

