//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEDistributionItemSummaryNode.h>

@class NSAttributedString, NSImage;

@interface IDEDistributionItemSummaryNode (KitAdditions)
@property(readonly, nonatomic) NSAttributedString *summaryForDisplay;
@property(readonly, nonatomic) NSImage *icon;
- (void)preload;
- (id)textAttachmentForProfile:(id)arg1;
@end

