//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class DVTImageAndTextCell, NSButton, NSTextFieldCell;

@interface DVTDynamicTableHeaderView : NSView
{
    DVTImageAndTextCell *_imageAndTextCell;
    NSTextFieldCell *_textCell;
    NSButton *_disclosureButton;
    BOOL _showDisclosureButton;
}

+ (id)matchAttributedStringForCount:(long long)arg1;
- (void).cxx_destruct;
@property(readonly) NSButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property(nonatomic) BOOL showDisclosureButton; // @synthesize showDisclosureButton=_showDisclosureButton;
@property(retain) DVTImageAndTextCell *imageAndTextCell; // @synthesize imageAndTextCell=_imageAndTextCell;
@property(retain) NSTextFieldCell *textCell; // @synthesize textCell=_textCell;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

