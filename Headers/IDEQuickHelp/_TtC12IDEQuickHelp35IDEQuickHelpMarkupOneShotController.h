//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEQuickHelp/_TtC12IDEQuickHelp22IDEQuickHelpController.h>

#import <IDEQuickHelp/NSPopoverDelegate-Protocol.h>

@class IDEQuickHelpQueryResult, MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12IDEQuickHelp35IDEQuickHelpMarkupOneShotController : _TtC12IDEQuickHelp22IDEQuickHelpController <NSPopoverDelegate>
{
    MISSING_TYPE *_renderedContentSizeObservingToken;
    MISSING_TYPE *_contentChangedObserverToken;
    MISSING_TYPE *_fontAndColorSettingsChangedNotificationToken;
    MISSING_TYPE *_popover;
    MISSING_TYPE *_contentViewController;
    MISSING_TYPE *_localizedDefaultMessage;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)popoverDidClose:(id)arg1;
@property(nonatomic, retain) IDEQuickHelpQueryResult *queryResult;
- (void)showQuickHelp;
- (id)init;

@end

