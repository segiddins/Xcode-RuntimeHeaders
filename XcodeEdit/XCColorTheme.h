//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface XCColorTheme : NSObject
{
    NSMutableDictionary *_dict;
    NSString *_name;
}

+ (void)setThemePath:(id)arg1;
+ (id)themeWithName:(id)arg1;
+ (void)setCurrentTheme:(id)arg1;
+ (id)currentTheme;
+ (id)builtInThemes;
+ (id)userThemes;
+ (void)_addThemesFromDirectory:(id)arg1 toDictionary:(id)arg2;
+ (void)_addThemesFromPathList:(id)arg1 toDictionary:(id)arg2;
+ (id)themeFromOldUserDefaults;
+ (id)systemTheme;
- (void)activate;
- (id)fonts;
- (id)colors;
- (void)setName:(id)arg1;
- (id)name;
- (BOOL)isBuiltInTheme;
- (void)save;
- (id)path;
- (void)saveToPath:(id)arg1;
- (void)copyFromTheme:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)initWithColors:(id)arg1 fonts:(id)arg2;
- (id)init;

@end

