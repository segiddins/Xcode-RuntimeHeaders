//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@class NSBundle, NSString;

@interface TSPropertyListDictionary : NSDictionary
{
    NSDictionary *_dict;
    NSString *_localizedDesc;
    NSBundle *_bundle;
    NSDictionary *_localizationDict;
}

+ (id)propertyListDictionaryWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2;
+ (id)propertyListDictionaryWithContentsOfString:(id)arg1;
+ (id)propertyListDictionaryWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)arrayOrObjectOrNilForKey:(id)arg1;
- (id)arrayOrNilForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryOrNilForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dataOrNilForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)stringOrNilForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)objectOrNilForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (unsigned long long)count;
- (void)setLocalizationDictionary:(id)arg1;
- (id)localizationDictionary;
- (void)setBundle:(id)arg1;
- (id)bundle;
- (void)setLocalizedMessageDescription:(id)arg1;
- (id)localizedMessageDescription;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2;
- (id)initWithContentsOfString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_localizedTypeNameForClass:(Class)arg1;

@end

