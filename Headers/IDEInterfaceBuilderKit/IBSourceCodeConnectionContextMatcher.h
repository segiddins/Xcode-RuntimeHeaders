//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSourceCodeLanguage, IBMutableIdentityDictionary, NSMutableSet;

@interface IBSourceCodeConnectionContextMatcher : NSObject
{
    IBMutableIdentityDictionary *_matchInclusionLanguageIdentifiersByContextClass;
    IBMutableIdentityDictionary *_insertInclusionLanguageIdentifiersByContextClass;
    IBMutableIdentityDictionary *_matchExclusionLanguageIdentifiersByContextClass;
    IBMutableIdentityDictionary *_insertExclusionLanguageIdentifiersByContextClass;
    IBMutableIdentityDictionary *_contextExtensionByContextClass;
    NSMutableSet *_allInclusionClasses;
    DVTSourceCodeLanguage *_language;
}

+ (id)sharedInstanceForLanguage:(id)arg1;
- (void).cxx_destruct;
@property(retain) DVTSourceCodeLanguage *language; // @synthesize language=_language;
- (id)contextExtensionForClass:(Class)arg1;
- (id)prototypeConnectionContextsForAction:(long long)arg1 sourceItem:(id)arg2 sourceModel:(id)arg3 applicableContextClasses:(id)arg4;
- (id)connectionContextClassesForSourceItemContexts:(id)arg1 applicableConnectionClasses:(id)arg2 inclusionDictionary:(id)arg3 exclusionDictionary:(id)arg4;
- (id)inclusionClassesForApplicableContextClasses:(id)arg1;
- (void)loadAllConnectionContextMetadata;
- (void)loadConnectionContextMetadataForExtension:(id)arg1;
- (id)initWithLanguage:(id)arg1;

@end

