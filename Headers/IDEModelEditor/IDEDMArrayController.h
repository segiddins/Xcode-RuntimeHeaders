//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSArrayController.h>

@protocol IDEDMArrayControllerDelegate;

@interface IDEDMArrayController : NSArrayController
{
    id <IDEDMArrayControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain) id <IDEDMArrayControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)rearrangeObjects;

@end

