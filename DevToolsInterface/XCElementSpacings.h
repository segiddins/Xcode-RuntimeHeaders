//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface XCElementSpacings : NSObject
{
    NSString *_name;
    struct _XCElementInset _defaultSpace;
    struct _XCElementInset _enclosure;
    struct _XCElementInset _contentOffset;
    struct CGSize _inset;
    struct CGSize _offset;
    BOOL _insetChanged;
    BOOL _shared;
}

+ (id)zeroSpacings;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
@property(nonatomic) BOOL shared;
@property(readonly) struct CGSize offset;
@property(readonly) struct CGSize inset;
- (void)calculateInset;
@property(nonatomic) struct _XCElementInset enclosure; // @dynamic enclosure;
@property(nonatomic) struct _XCElementInset contentOffset; // @dynamic contentOffset;
- (void)addDefaultSpace:(struct _XCElementInset)arg1;
@property(nonatomic) struct _XCElementInset defaultSpace; // @dynamic defaultSpace;
- (double)bottomDefaultSpace;
- (void)addBottomDefaultSpace:(double)arg1;
- (double)rightDefaultSpace;
- (void)addRightDefaultSpace:(double)arg1;
- (double)topDefaultSpace;
- (void)addTopDefaultSpace:(double)arg1;
- (double)leftDefaultSpace;
- (void)addLeftDefaultSpace:(double)arg1;
- (id)copyNonShared;
- (id)initWithEnclosure:(struct _XCElementInset)arg1;
- (id)initWithContentOffset:(struct _XCElementInset)arg1 defaultSpace:(struct _XCElementInset)arg2;
- (id)initWithContentOffset:(struct _XCElementInset)arg1 enclosure:(struct _XCElementInset)arg2 defaultSpace:(struct _XCElementInset)arg3;
- (id)init;

@end

