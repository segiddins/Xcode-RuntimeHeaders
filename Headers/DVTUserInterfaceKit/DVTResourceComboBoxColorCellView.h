//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTResourceComboBoxCellView.h>

@class DVTResourceComboBoxColorSwatchView, NSColor, NSTextField;

@interface DVTResourceComboBoxColorCellView : DVTResourceComboBoxCellView
{
    NSTextField *_nameTextField;
    DVTResourceComboBoxColorSwatchView *_colorSwatch;
}

@property __weak DVTResourceComboBoxColorSwatchView *colorSwatch; // @synthesize colorSwatch=_colorSwatch;
@property __weak NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
- (void).cxx_destruct;
@property(copy, nonatomic) NSColor *color;
- (void)setName:(id)arg1;
- (id)name;

@end

