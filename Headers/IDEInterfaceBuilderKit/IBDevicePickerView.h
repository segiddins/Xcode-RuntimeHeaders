//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTBorderedView.h>

@interface IBDevicePickerView : DVTBorderedView
{
    CDUnknownBlockType _didCompleteFirstLayoutCallback;
    CDUnknownBlockType _layoutTopDownCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType layoutTopDownCallback; // @synthesize layoutTopDownCallback=_layoutTopDownCallback;
@property(copy, nonatomic) CDUnknownBlockType didCompleteFirstLayoutCallback; // @synthesize didCompleteFirstLayoutCallback=_didCompleteFirstLayoutCallback;
- (void)layoutTopDown;
- (void)layoutBottomUp;
- (void)_fireDidCompleteFirstLayoutCallback;

@end

