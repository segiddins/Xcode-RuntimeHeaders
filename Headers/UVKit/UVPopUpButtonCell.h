//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPopUpButtonCell.h>

@class NSObject;
@protocol UVPopUpButtonCellDelegate;

@interface UVPopUpButtonCell : NSPopUpButtonCell
{
    NSObject<UVPopUpButtonCellDelegate> *_uv_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<UVPopUpButtonCellDelegate> *uv_delegate; // @synthesize uv_delegate=_uv_delegate;
- (void)popUpButtonCell:(id)arg1 willShowMenu:(id)arg2;

@end

