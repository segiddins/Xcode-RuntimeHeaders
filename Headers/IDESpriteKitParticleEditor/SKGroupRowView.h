//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSImage, NSString;

@interface SKGroupRowView : NSTableRowView
{
    NSImage *_image;
    NSString *_text;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void)drawRect:(struct CGRect)arg1;
- (id)textColor;

@end

