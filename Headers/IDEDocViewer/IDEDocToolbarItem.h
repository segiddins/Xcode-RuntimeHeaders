//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSToolbarItem.h>

@interface IDEDocToolbarItem : NSToolbarItem
{
    unsigned long long _handledMouseDownModifiersMask;
}

@property unsigned long long handledMouseDownModifiersMask; // @synthesize handledMouseDownModifiersMask=_handledMouseDownModifiersMask;
- (void)validate;
- (BOOL)_allowToolbarToStealEvent:(id)arg1;
- (BOOL)_viewMightProcessModifiedMouseDownEvent;

@end

