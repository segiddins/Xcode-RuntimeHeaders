//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEAnalysisTool : NSObject
{
    int _type;
    NSString *_identifier;
    NSString *_displayName;
}

@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)displayNameCompare:(id)arg1;
- (id)initWithType:(int)arg1 identifer:(id)arg2 displayName:(id)arg3;

@end

