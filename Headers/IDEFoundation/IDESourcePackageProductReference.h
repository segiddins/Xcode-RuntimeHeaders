//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDESourcePackageReference, NSString;

@interface IDESourcePackageProductReference : NSObject
{
    IDESourcePackageReference *_packageReference;
    NSString *_productName;
}

- (void).cxx_destruct;
@property(readonly) NSString *productName; // @synthesize productName=_productName;
@property(readonly) IDESourcePackageReference *packageReference; // @synthesize packageReference=_packageReference;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPackageReference:(id)arg1 productName:(id)arg2;

@end

