//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlRevisionLocation.h>

@class DVTSourceControlAuthor, NSString;

@interface DVTSourceControlTag : DVTSourceControlRevisionLocation
{
    BOOL _hasLoadedCompleteTag;
    NSString *_name;
    NSString *_message;
    DVTSourceControlAuthor *_author;
    unsigned long long _options;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property unsigned long long options; // @synthesize options=_options;
@property(retain) DVTSourceControlAuthor *author; // @synthesize author=_author;
@property(retain) NSString *message; // @synthesize message=_message;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)description;
@property(readonly, getter=isNewTag) BOOL newTag;
- (id)displayName;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dictionaryRepresentationWithOptions:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)loadCompleteTag:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithNewTagName:(id)arg1 message:(id)arg2 revision:(id)arg3;
- (id)initWithTagPathLocation:(id)arg1;
- (id)initWithTagName:(id)arg1 message:(id)arg2 revision:(id)arg3 author:(id)arg4;
- (id)initWithTagName:(id)arg1 revision:(id)arg2;
- (id)initWithTagName:(id)arg1;
- (id)_init;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

