//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, PKPackage;

@interface DVTFirstLaunchPackage : NSObject
{
    NSString *_displayName;
    NSURL *_url;
    PKPackage *_pkPackage;
}

- (void).cxx_destruct;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
- (id)debugDescription;
@property(readonly) PKPackage *pkPackage; // @synthesize pkPackage=_pkPackage;
- (id)_initWithURL:(id)arg1;
@property(readonly) NSString *path;

@end

