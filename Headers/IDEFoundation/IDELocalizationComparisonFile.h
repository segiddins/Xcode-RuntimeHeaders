//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTComparisonDocumentLocation, NSArray, NSString;

@interface IDELocalizationComparisonFile : NSObject
{
    BOOL _foundInProject;
    NSString *_original;
    NSString *_targetLanguage;
    DVTComparisonDocumentLocation *_location;
    NSArray *_issues;
}

+ (id)fileWithLocalizationFrameworkDetail:(id)arg1 original:(id)arg2 projectDirectory:(id)arg3 localizedContentsDirectory:(id)arg4 sourceLocale:(id)arg5;
- (void).cxx_destruct;
@property(readonly) BOOL foundInProject; // @synthesize foundInProject=_foundInProject;
@property(readonly, copy) NSArray *issues; // @synthesize issues=_issues;
@property(readonly, copy) DVTComparisonDocumentLocation *location; // @synthesize location=_location;
@property(readonly, copy) NSString *targetLanguage; // @synthesize targetLanguage=_targetLanguage;
@property(readonly, copy) NSString *original; // @synthesize original=_original;
- (long long)compare:(id)arg1;
- (id)description;
- (id)initWithOriginal:(id)arg1 targetLanguage:(id)arg2 oldLocation:(id)arg3 newLocation:(id)arg4 issues:(id)arg5 foundInProject:(BOOL)arg6;

@end
