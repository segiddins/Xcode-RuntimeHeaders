//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSMenuItem, NSTextField;

@interface IDESourceControlRepositoryStatusView : NSView
{
    NSTextField *_nameField;
    NSMenuItem *_representedMenuItem;
}

+ (void)initialize;
@property(retain) NSMenuItem *representedMenuItem; // @synthesize representedMenuItem=_representedMenuItem;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewDidMoveToWindow;
- (id)attributedStringForString:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

