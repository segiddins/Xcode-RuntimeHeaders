//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _IDEProvisioningTeamDisambiguationProperty : NSObject
{
    NSString *_key;
    NSString *_emptyValue;
}

+ (id)disambiguationPropertyWithKey:(id)arg1 emptyValue:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSString *emptyValue; // @synthesize emptyValue=_emptyValue;
@property(readonly) NSString *key; // @synthesize key=_key;
- (id)valueForTeam:(id)arg1;

@end
