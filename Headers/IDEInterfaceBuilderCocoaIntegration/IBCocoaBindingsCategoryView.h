//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTBorderedView.h>

@class NSString, NSTextField;

@interface IBCocoaBindingsCategoryView : DVTBorderedView
{
    NSString *_stringValue;
    NSTextField *_titleLabel;
}

@property(retain) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)updateTitleLabel;
@property BOOL drawsTopBorder;
- (id)initWithFrame:(struct CGRect)arg1;

@end

