//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAutolayoutFrameDecisionMarshallingRequest.h>

@class NSObject;
@protocol IBAutolayoutItem;

@interface IBAutolayoutItemSizingFrameDecisionMarshallingRequest : IBAutolayoutFrameDecisionMarshallingRequest
{
    NSObject<IBAutolayoutItem> *_itemToSize;
    struct CGRect _layoutFrame;
}

+ (id)requestWithMarshallableObjectPackage:(id)arg1 arbitrationUnit:(id)arg2 itemToSize:(id)arg3 toLayoutFrame:(struct CGRect)arg4;
@property(readonly, nonatomic) struct CGRect layoutFrame; // @synthesize layoutFrame=_layoutFrame;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *itemToSize; // @synthesize itemToSize=_itemToSize;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1 marshallableObjectPackage:(id)arg2 arbitrationUnit:(id)arg3 itemToSize:(id)arg4 toLayoutFrame:(struct CGRect)arg5;

@end

