//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTiOSConditionInducerProfile : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSString *_profileDescription;
}

@property(readonly, copy) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 description:(id)arg3;

@end

