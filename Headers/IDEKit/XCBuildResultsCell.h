//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/XCEForwardingCell.h>

@class NSButtonCell;

@interface XCBuildResultsCell : XCEForwardingCell
{
    NSButtonCell *_expandButtonCell;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)clear;
- (void)expandAction:(id)arg1;
@property(readonly, nonatomic) NSButtonCell *expandButtonCell; // @dynamic expandButtonCell;

@end

