//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEiPhoneSupport/NSObject-Protocol.h>

@class DTDKRemoteDeviceConsoleController, NSString;

@protocol DTDKRemoteDeviceConsoleControllerDelegate <NSObject>
- (void)consoleControllerDidClear:(DTDKRemoteDeviceConsoleController *)arg1;
- (void)consoleController:(DTDKRemoteDeviceConsoleController *)arg1 didReceiveConsoleText:(NSString *)arg2;
@end
