//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, USKObjectPath, USKToken;

@interface USKObject : NSObject
{
    USKToken *_name;
    USKObjectPath *_path;
}

@property(readonly, retain, nonatomic) USKObjectPath *path; // @synthesize path=_path;
@property(readonly, retain, nonatomic) USKToken *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *metadata;

@end

