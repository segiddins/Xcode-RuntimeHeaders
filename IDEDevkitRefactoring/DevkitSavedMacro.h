//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DevkitSavedMacro : NSObject
{
    const char *_macroName;
    char *_macroExpansion;
}

- (const char *)macroExpansion;
- (const char *)macroName;
- (void)dealloc;
- (id)initWithName:(const char *)arg1 expansion:(id)arg2;

@end

