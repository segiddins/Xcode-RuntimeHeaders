//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDERefactoringInputValidator : NSObject
{
    unsigned long long _numberOfMethodColons;
}

@property unsigned long long numberOfMethodColons; // @synthesize numberOfMethodColons=_numberOfMethodColons;
- (id)modifiedSignatureString;
- (id)initialSignatureString;
- (id)shouldBeShownLocalizedMessageForChar:(unsigned short)arg1;
- (id)localizedCapitalizedMethodKeyword:(id)arg1 index:(unsigned long long)arg2;
- (id)firstDigitInLocalizedMessage:(id)arg1;
- (id)reservedWordLocalizedMessage:(id)arg1;
- (id)lastColonLocalizedMessage;
- (id)firstColonLocalizedMessage;
- (id)fewerColonsLocalizedMessage:(unsigned long long)arg1;
- (id)oneFewerColonLocalizedMessage;
- (id)moreColonsLocalizedMessage:(unsigned long long)arg1;
- (id)oneMoreColonLocalizedMessage;
- (id)firstDigitLocalizedMessage;
- (id)blankLocalizedMessage;
- (id)standardCharsLocalizedMessage;
- (id)standardCharsPlusColonsLocalizedMessage;
- (BOOL)isStringValid:(id)arg1 otherStrings:(id)arg2 localizedMessage:(id *)arg3 invalidRange:(struct _NSRange *)arg4;
- (BOOL)shouldStringWithChangesBeShown:(id)arg1 localizedMessage:(id *)arg2;

@end

