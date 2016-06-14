//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAlert, NSError, NSWindow;

@interface IDEExecutionHoldAlertHelper : NSObject
{
    BOOL _alertShowing;
    NSWindow *_window;
    NSError *_error;
    NSAlert *_alert;
}

@property(retain) NSAlert *alert; // @synthesize alert=_alert;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSWindow *window; // @synthesize window=_window;
@property BOOL alertShowing; // @synthesize alertShowing=_alertShowing;
- (void).cxx_destruct;
- (void)dismissAlert;
- (void)showAlert;
- (id)initWithWindow:(id)arg1 error:(id)arg2;

@end

