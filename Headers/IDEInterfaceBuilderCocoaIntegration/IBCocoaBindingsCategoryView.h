//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTBorderedView.h>

@class NSString, NSTextField;

@interface IBCocoaBindingsCategoryView : DVTBorderedView
{
    NSString *_stringValue;
    NSTextField *_titleLabel;
}

- (void).cxx_destruct;
@property(retain) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)updateTitleLabel;
@property BOOL drawsTopBorder;
- (id)initWithFrame:(struct CGRect)arg1;

@end

