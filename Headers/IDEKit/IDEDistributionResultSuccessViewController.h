//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSButton, NSImage, NSImageView, NSString, NSURL;

@interface IDEDistributionResultSuccessViewController : IDEViewController
{
    NSString *_message;
    NSURL *_link;
    NSString *_linkToolTip;
    NSImage *_image;
    NSImageView *_successImageView;
    NSButton *_jumpButton;
}

- (void).cxx_destruct;
@property(retain) NSButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain) NSImageView *successImageView; // @synthesize successImageView=_successImageView;
@property(copy) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *linkToolTip; // @synthesize linkToolTip=_linkToolTip;
@property(copy) NSURL *link; // @synthesize link=_link;
@property(copy) NSString *message; // @synthesize message=_message;
- (void)jumpButtonClicked:(id)arg1;
- (void)loadView;
- (id)nibName;

@end

