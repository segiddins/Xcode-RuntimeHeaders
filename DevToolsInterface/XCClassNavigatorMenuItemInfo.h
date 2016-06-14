//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface XCClassNavigatorMenuItemInfo : NSObject
{
    int _type;
    NSString *_lookupName;
    NSString *_displayName;
    int _symbolType;
    int _symbolUsage;
    XCClassNavigatorMenuItemInfo *_baseClass;
}

+ (id)menuItemInfoWithSymbol:(id)arg1 baseClass:(id)arg2;
+ (id)menuItemInfoForSeparator;
+ (id)menuItemInfoWithLabel:(id)arg1;
@property(readonly) XCClassNavigatorMenuItemInfo *baseClass; // @synthesize baseClass=_baseClass;
@property(readonly) int symbolUsage; // @synthesize symbolUsage=_symbolUsage;
@property(readonly) int symbolType; // @synthesize symbolType=_symbolType;
@property(readonly, retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, retain) NSString *lookupName; // @synthesize lookupName=_lookupName;
@property(readonly) int type; // @synthesize type=_type;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)matchingSymbolFromIndex:(id)arg1;
- (id)_thisSymbolFromIndex:(id)arg1 baseClassObjectsSelector:(SEL)arg2 nameSelector:(SEL)arg3;
- (id)_initWithType:(int)arg1 lookupName:(id)arg2 displayName:(id)arg3 symbolType:(int)arg4 symbolUsage:(int)arg5 baseClass:(id)arg6;

@end

