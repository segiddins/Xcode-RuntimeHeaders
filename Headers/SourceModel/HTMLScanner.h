//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SourceModel/BlockScanner.h>

@interface HTMLScanner : BlockScanner
{
}

- (id)parseRecursive:(id)arg1 withContext:(id)arg2 depth:(long long)arg3 inputStream:(id)arg4 range:(struct _NSRange)arg5 dirtyRange:(struct _NSRange *)arg6;
- (int)actionForEndToken:(id)arg1 inContext:(id)arg2 inputStream:(id)arg3;
- (id)_stringByRemovingLeadingAndTrailingCharacters:(id)arg1 fromString:(id)arg2;

@end

