//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class NSDictionary, NSString;

@interface GPUTraceDocumentLocation : DVTDocumentLocation
{
    BOOL _editorShouldTakeFocus;
    NSString *_outlineItemUUID;
    NSDictionary *_userInfo;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL editorShouldTakeFocus; // @synthesize editorShouldTakeFocus=_editorShouldTakeFocus;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *outlineItemUUID; // @synthesize outlineItemUUID=_outlineItemUUID;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (id)copyWithAddedUserInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutlineItem:(id)arg1 editorShouldTakeFocus:(BOOL)arg2;
- (id)initWithOutlineItem:(id)arg1 userInfo:(id)arg2;
- (id)initWithOutlineItem:(id)arg1;

@end
