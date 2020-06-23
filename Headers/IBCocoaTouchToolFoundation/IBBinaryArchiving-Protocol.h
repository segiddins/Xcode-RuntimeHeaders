//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/NSObject-Protocol.h>

@class IBBinaryArchiver, IBBinaryUnarchiver;

@protocol IBBinaryArchiving <NSObject>

@optional
+ (id)decodeWithBinaryUnarchiver:(IBBinaryUnarchiver *)arg1;
- (const char *)cStringClassNameForBinaryArchiver:(IBBinaryArchiver *)arg1;
- (void)didFinishDecodingWithBinaryUnarchiver:(IBBinaryUnarchiver *)arg1;
- (void)didFinishEncodingWithBinaryArchiver:(IBBinaryArchiver *)arg1;
- (void)encodeWithBinaryArchiver:(IBBinaryArchiver *)arg1;
- (id)initWithBinaryUnarchiver:(IBBinaryUnarchiver *)arg1;
@end

