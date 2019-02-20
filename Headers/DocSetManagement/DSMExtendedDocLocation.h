//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DSMExtendedDocLocation : NSObject
{
    NSString *_name;
    NSURL *_url;
    BOOL _editable;
    BOOL _enabled;
}

+ (id)libraryDocLocations;
+ (id)platformDocLocations;
+ (id)SDKDocLocations;
+ (id)devToolsDocLocation;
+ (id)extendedDocLocationWithDescription:(id)arg1;
+ (id)extendedDocLocationWithName:(id)arg1 url:(id)arg2 enabled:(BOOL)arg3 editable:(BOOL)arg4;
+ (id)defaultDevToolsDocSetPath;
+ (void)initialize;
- (void)setURL:(id)arg1;
- (id)url;
- (void)setName:(id)arg1;
- (id)name;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (void)setEditable:(BOOL)arg1;
- (BOOL)editable;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)descriptionDictionary;
- (void)dealloc;
- (id)initWithName:(id)arg1 url:(id)arg2 enabled:(BOOL)arg3 editable:(BOOL)arg4;

@end
