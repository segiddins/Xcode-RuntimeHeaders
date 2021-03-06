//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface IBAutolayoutIssueTableViewItem : NSObject
{
    BOOL _selected;
    BOOL _wantsBottomSeparator;
    NSString *_primaryLabel;
    NSImage *_image;
    NSString *_secondaryLabel;
    id _representedObject;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL wantsBottomSeparator; // @synthesize wantsBottomSeparator=_wantsBottomSeparator;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) NSString *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (id)initWithPrimaryLabel:(id)arg1 image:(id)arg2 representedObject:(id)arg3 secondaryLabel:(id)arg4;

@end

