//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXAbstractProductSettingsModule.h>

#import <DevToolsInterface/NSTextFieldDelegate-Protocol.h>

@class NSImageView, NSString, PBXExtendedTextField;

@interface PBXProductIconSettingsModule : PBXAbstractProductSettingsModule <NSTextFieldDelegate>
{
    PBXExtendedTextField *_iconFileField;
    NSImageView *_iconImageView;
}

- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)view:(id)arg1 prepareForDragOperation:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (void)_setIconImage;
- (void)takeStringValueFrom:(id)arg1;
- (void)update;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

