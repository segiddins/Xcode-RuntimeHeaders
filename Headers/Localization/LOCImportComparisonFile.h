//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface LOCImportComparisonFile : NSObject
{
    NSString *_path;
    NSMutableString *_comparisonViewString;
}

- (void).cxx_destruct;
@property(copy) NSMutableString *comparisonViewString; // @synthesize comparisonViewString=_comparisonViewString;
@property(copy) NSString *path; // @synthesize path=_path;
- (struct _NSRange)appendAllTransUnitsFromGlossary:(id)arg1;
- (struct _NSRange)appendTransUnit:(id)arg1 fromGlossary:(id)arg2;
- (BOOL)writeWithError:(id *)arg1;
- (id)initWithPath:(id)arg1;

@end

