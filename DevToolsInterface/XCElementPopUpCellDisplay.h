//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCElementCellDisplay.h>

@interface XCElementPopUpCellDisplay : XCElementCellDisplay
{
}

- (void)installLocalDataDelegateForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 performDelegateAction:(id)arg2;
- (void)readDataFromDisplayer:(struct NSObject *)arg1 intoCell:(id)arg2;
- (void)displayer:(struct NSObject *)arg1 setSelectedIndex:(long long)arg2;
- (long long)selectedIndexForDisplayer:(struct NSObject *)arg1;
- (void)configureRoundForControlSize:(unsigned long long)arg1 font:(id)arg2;
- (void)configureForControlSize:(unsigned long long)arg1 font:(id)arg2;

@end

