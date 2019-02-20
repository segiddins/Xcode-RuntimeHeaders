//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface DSATermManager : NSObject
{
    NSMapTable *_terms;
    unsigned int _nextID;
}

+ (id)termsFromString:(id)arg1;
+ (id)termsFromQuery:(id)arg1;
+ (id)_termsFromString:(id)arg1 usingWordBoundaries:(id)arg2;
- (void).cxx_destruct;
- (id)termMatchForSubstring:(id)arg1 style:(unsigned long long)arg2;
- (unsigned int)addTerm:(id)arg1;
- (unsigned int)idForTerm:(id)arg1;
- (id)orderedTerms;
- (id)initWithTerms:(id)arg1;

@end
