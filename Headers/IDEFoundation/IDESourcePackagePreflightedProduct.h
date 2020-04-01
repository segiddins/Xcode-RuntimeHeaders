//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IDESourcePackagePreflightedProduct : NSObject <NSCopying>
{
    NSString *_productName;
    long long _productType;
}

+ (id)displayNameForProductType:(long long)arg1;
@property(readonly) long long productType; // @synthesize productType=_productType;
@property(readonly) NSString *productName; // @synthesize productName=_productName;
- (void).cxx_destruct;
- (id)initWithProductName:(id)arg1 productType:(long long)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

