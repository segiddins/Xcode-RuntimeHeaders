//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEProductIdentifier, NSImage, NSURL;

@interface IDEProductImage : NSObject
{
    NSImage *_image;
    NSURL *_imageURL;
    IDEProductIdentifier *_productIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IDEProductIdentifier *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (id)initWithImage:(id)arg1 imageURL:(id)arg2 productIdentifer:(id)arg3;

@end

