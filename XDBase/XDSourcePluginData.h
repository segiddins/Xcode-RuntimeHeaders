//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XDSourcePluginData : NSObject
{
}

+ (void)setIsReadOnly:(BOOL)arg1 onStereotype:(id)arg2;
+ (BOOL)isReadOnly:(id)arg1;
+ (void)setType:(id)arg1 onStereotype:(id)arg2;
+ (id)type:(id)arg1;
+ (void)setHeaderPath:(id)arg1 onStereotype:(id)arg2;
+ (id)headerPath:(id)arg1;
+ (void)setSourcePath:(id)arg1 onStereotype:(id)arg2;
+ (id)sourcePath:(id)arg1;
+ (void)setLanguage:(unsigned long long)arg1 onStereotype:(id)arg2;
+ (unsigned long long)language:(id)arg1;
+ (id)stereotypeName;
+ (id)stereotypeFromElement:(id)arg1;
+ (unsigned long long)getLanguageFromString:(id)arg1;
+ (id)getLanguageString:(unsigned long long)arg1;

@end

