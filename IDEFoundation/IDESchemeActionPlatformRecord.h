//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDESchemeActionPlatformRecord : NSObject
{
    NSString *_userDescription;
    NSString *_identifier;
}

@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *userDescription; // @synthesize userDescription=_userDescription;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithUserDescription:(id)arg1 identifier:(id)arg2;

@end

