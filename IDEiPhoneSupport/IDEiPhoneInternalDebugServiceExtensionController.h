//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDELaunchActionOptionViewController.h>

@class NSComboBox, NSMutableArray;

@interface IDEiPhoneInternalDebugServiceExtensionController : IDELaunchActionOptionViewController
{
    NSComboBox *_extensionCombobox;
    NSMutableArray *_possibleExtensions;
}

+ (BOOL)availableForScheme:(id)arg1;
@property(retain) NSMutableArray *possibleExtensions; // @synthesize possibleExtensions=_possibleExtensions;
@property(retain) NSComboBox *extensionCombobox; // @synthesize extensionCombobox=_extensionCombobox;
- (void).cxx_destruct;
- (void)loadView;
- (void)_extensionComboboxAction:(id)arg1;

@end

