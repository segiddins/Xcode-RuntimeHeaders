//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEiPhoneSupport/DVTTableViewDelegate-Protocol.h>
#import <IDEiPhoneSupport/NSObject-Protocol.h>

@class DTDKTableView, NSIndexSet, NSMenu;

@protocol DTDKTableViewDelegate <NSObject, DVTTableViewDelegate>

@optional
- (NSMenu *)tableView:(DTDKTableView *)arg1 contextMenuForRows:(NSIndexSet *)arg2;
- (void)tableView:(DTDKTableView *)arg1 deleteRows:(NSIndexSet *)arg2;
@end

