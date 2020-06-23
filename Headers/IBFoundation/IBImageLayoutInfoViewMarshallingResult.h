//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>

@class IBBitmap, NSString, NSValue;

@interface IBImageLayoutInfoViewMarshallingResult : NSObject <IBBinaryArchiving>
{
    IBBitmap *_bitmap;
    NSValue *_intrinsicContentSize;
}

+ (id)resultWithBitmap:(id)arg1 intrinsicContentSize:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSValue *intrinsicContentSize; // @synthesize intrinsicContentSize=_intrinsicContentSize;
@property(readonly, nonatomic) IBBitmap *bitmap; // @synthesize bitmap=_bitmap;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithBitmap:(id)arg1 intrinsicContentSize:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
