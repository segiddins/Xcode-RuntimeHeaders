//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IDEIntentBuilderElement : NSObject
{
    NSDictionary *_originalDictionaryRepresentation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *originalDictionaryRepresentation; // @synthesize originalDictionaryRepresentation=_originalDictionaryRepresentation;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryKeyForKeyPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *keyPrefix;

@end
