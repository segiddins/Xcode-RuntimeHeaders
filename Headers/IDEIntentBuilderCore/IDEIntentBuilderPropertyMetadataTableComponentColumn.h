//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEIntentBuilderPropertyMetadataTableComponentColumn : NSObject
{
    long long _type;
    NSString *_name;
    NSString *_title;
    long long _resizing;
    double _width;
}

- (void).cxx_destruct;
@property double width; // @synthesize width=_width;
@property long long resizing; // @synthesize resizing=_resizing;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)decodeObject:(id)arg1;
- (id)encodeObject:(id)arg1;
- (id)description;
- (void)updateWithDictionary:(id)arg1;

@end

