//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class NSDictionary, NSString;

@interface GPUTraceDocumentLocation : DVTDocumentLocation
{
    BOOL _editorShouldTakeFocus;
    NSString *_outlineItemUUID;
    struct NSDictionary *_userInfo;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL editorShouldTakeFocus; // @synthesize editorShouldTakeFocus=_editorShouldTakeFocus;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *outlineItemUUID; // @synthesize outlineItemUUID=_outlineItemUUID;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (id)copyWithAddedUserInfo:(struct NSDictionary *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutlineItem:(id)arg1 editorShouldTakeFocus:(BOOL)arg2;
- (id)initWithOutlineItem:(id)arg1 userInfo:(struct NSDictionary *)arg2;
- (id)initWithOutlineItem:(id)arg1;

@end

