//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTTableCellView.h>

@interface DVTTableCellViewMultiLine : DVTTableCellView
{
    unsigned long long _imageVerticalAlignment;
}

@property(nonatomic) unsigned long long imageVerticalAlignment; // @synthesize imageVerticalAlignment=_imageVerticalAlignment;
- (void)positionImageViewVerticallyAfterLayingoutTextFields;
- (long long)textFieldOrientation;
- (BOOL)subtitleShouldBeInstalled;
@property(nonatomic) long long maxNumberOfSubtitleLines;
@property(nonatomic) long long maxNumberOfTitleLines;
- (id)initWithFrame:(struct CGRect)arg1;

@end

