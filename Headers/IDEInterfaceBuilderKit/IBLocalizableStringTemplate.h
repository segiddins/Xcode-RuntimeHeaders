//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface IBLocalizableStringTemplate : NSString
{
    NSString *_stringsFileKey;
    NSString *_developmentLanguageString;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *developmentLanguageString; // @synthesize developmentLanguageString=_developmentLanguageString;
@property(readonly, copy) NSString *stringsFileKey; // @synthesize stringsFileKey=_stringsFileKey;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2;

@end

