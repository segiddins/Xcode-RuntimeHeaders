//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface XCSMessageChannelMessage : NSObject
{
    unsigned char _category;
    unsigned char _tag;
    unsigned int _type;
    NSData *_data;
}

@property(retain) NSData *data; // @synthesize data=_data;
@property unsigned int type; // @synthesize type=_type;
@property unsigned char tag; // @synthesize tag=_tag;
@property unsigned char category; // @synthesize category=_category;
- (void).cxx_destruct;

@end

