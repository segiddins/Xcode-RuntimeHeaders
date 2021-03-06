//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LOCIBElement : NSObject
{
    NSString *_identifier;
    NSString *_accessor;
    NSString *_value;
    NSString *_key;
    NSString *_type;
    NSString *_comment;
    NSString *_string;
    NSString *_restype;
    NSString *_note;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(copy, nonatomic) NSString *restype; // @synthesize restype=_restype;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *accessor; // @synthesize accessor=_accessor;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)sanitizeString:(id)arg1;
- (id)stringsFileElement;
- (id)description;
- (id)initWithIdentifier:(id)arg1 accessor:(id)arg2 value:(id)arg3 restype:(id)arg4 note:(id)arg5;

@end

