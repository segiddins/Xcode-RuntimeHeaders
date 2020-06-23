//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>
#import <IBFoundation/NSCopying-Protocol.h>

@class IBImageConfiguration, NSString;

@interface IBAbstractImageInfo : NSObject <IBBinaryArchiving, NSCopying>
{
    IBImageConfiguration *_imageConfiguration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IBImageConfiguration *imageConfiguration; // @synthesize imageConfiguration=_imageConfiguration;
- (BOOL)isSymbolImage;
- (BOOL)hasIntrinsicSize;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToImageInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)imageInfoWithConfiguration:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

