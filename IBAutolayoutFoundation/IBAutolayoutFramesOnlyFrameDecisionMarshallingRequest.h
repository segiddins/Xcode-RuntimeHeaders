//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAutolayoutFrameDecisionMarshallingRequest.h>

@class IBAutolayoutStatus;
@protocol IBCollection;

@interface IBAutolayoutFramesOnlyFrameDecisionMarshallingRequest : IBAutolayoutFrameDecisionMarshallingRequest
{
    id <IBCollection> _items;
    IBAutolayoutStatus *_initialStatus;
}

@property(retain, nonatomic) IBAutolayoutStatus *initialStatus; // @synthesize initialStatus=_initialStatus;
@property(copy, nonatomic) id <IBCollection> items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

@end

