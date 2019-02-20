//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizedResourceAdaptor.h>

@class NSDictionary, NSMutableDictionary;

@interface Xcode3LocalizedIBDocumentAdaptor : IDELocalizedResourceAdaptor
{
    NSMutableDictionary *_stringsCache;
    NSDictionary *_baseStrings;
    NSDictionary *_comments;
}

+ (id)writeWorkForContext:(id)arg1 langauge:(id)arg2;
+ (id)readWorkForContext:(id)arg1;
+ (id)adaptedResourcesForPopulationContext:(id)arg1;
@property(retain) NSDictionary *comments; // @synthesize comments=_comments;
@property(retain) NSDictionary *baseStrings; // @synthesize baseStrings=_baseStrings;
- (void).cxx_destruct;
- (void)setStrings:(id)arg1 forLanguage:(id)arg2;
- (id)stringsForLanguage:(id)arg1;
- (id)localizedGroupIdentifier;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2;

@end
