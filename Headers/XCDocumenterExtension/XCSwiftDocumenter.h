//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VVDocumenter.h"

@interface XCSwiftDocumenter : VVDocumenter
{
    BOOL _isSwiftEnum;
}

@property(nonatomic) BOOL isSwiftEnum; // @synthesize isSwiftEnum=_isSwiftEnum;
- (id)document;
- (id)stringToDocumentFromBuffer:(id)arg1 startingOnLine:(long long)arg2;
- (BOOL)useTrimmedCodeString:(id)arg1;
- (id)init;

@end

