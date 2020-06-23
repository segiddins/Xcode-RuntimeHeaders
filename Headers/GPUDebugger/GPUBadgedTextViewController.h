//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class GPUBadgedText, NSImageView, NSTextField;

__attribute__((visibility("hidden")))
@interface GPUBadgedTextViewController : NSViewController
{
    GPUBadgedText *_badgedText;
    NSTextField *_textfield;
    NSImageView *_badgeView;
}

@property(nonatomic) __weak NSImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) __weak NSTextField *textfield; // @synthesize textfield=_textfield;
@property(nonatomic) __weak GPUBadgedText *badgedText; // @synthesize badgedText=_badgedText;
- (void).cxx_destruct;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 badgedText:(id)arg3;

@end

