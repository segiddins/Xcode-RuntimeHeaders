//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEQuickHelp/_TtC12IDEQuickHelp22IDEQuickHelpController.h>

#import <IDEQuickHelp/NSPopoverDelegate-Protocol.h>

@class IDEQuickHelpQueryResult;

__attribute__((visibility("hidden")))
@interface _TtC12IDEQuickHelp35IDEQuickHelpMarkupOneShotController : _TtC12IDEQuickHelp22IDEQuickHelpController <NSPopoverDelegate>
{
    // Error parsing type: , name: _renderedContentSizeObservingToken
    // Error parsing type: , name: _contentChangedObserverToken
    // Error parsing type: , name: _fontAndColorSettingsChangedNotificationToken
    // Error parsing type: , name: _popover
    // Error parsing type: , name: _contentViewController
    // Error parsing type: , name: _localizedDefaultMessage
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)popoverDidClose:(id)arg1;
@property(nonatomic, retain) IDEQuickHelpQueryResult *queryResult;
- (void)showQuickHelp;
- (id)init;

@end

