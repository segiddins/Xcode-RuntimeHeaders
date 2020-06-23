//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSourceControl/NSCopying-Protocol.h>
#import <XCSourceControl/NSSecureCoding-Protocol.h>

@class NSString;

@interface XCSourceControlHostRepositoryLanguage : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_description;
    unsigned long long _languageType;
    double _usage;
}

+ (BOOL)supportsSecureCoding;
+ (id)languageFromString:(id)arg1 usage:(double)arg2;
+ (unsigned long long)languageTypeFromString:(id)arg1;
@property(readonly, nonatomic) double usage; // @synthesize usage=_usage;
@property(readonly, nonatomic) unsigned long long languageType; // @synthesize languageType=_languageType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithLanguageType:(unsigned long long)arg1 usage:(double)arg2;

@end

