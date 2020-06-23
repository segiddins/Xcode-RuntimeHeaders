//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTCocoaAdditionsKit/DVTDealloc2Main_WindowController.h>

@class NSButton, NSString, NSTextField;

@interface IDESourceControlServerRemoteAlreadyExistsWindowController : DVTDealloc2Main_WindowController
{
    NSTextField *_createRemoteNameField;
    NSButton *_createRemoteWithNameOKButton;
    NSString *_remoteAlreadyExistsWindowMessage;
    NSString *_lastName;
}

- (void).cxx_destruct;
@property(copy) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy) NSString *remoteAlreadyExistsWindowMessage; // @synthesize remoteAlreadyExistsWindowMessage=_remoteAlreadyExistsWindowMessage;
- (void)controlTextDidChange:(id)arg1;
- (void)beginSheetForWindow:(id)arg1 withRemoteName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)cancelCreateRemoteWithName:(id)arg1;
- (void)okCreateRemoteWithName:(id)arg1;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;
- (id)windowNibName;

@end

