//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IDEPlaygroundResultMenuContext : NSObject
{
    long long _menuInfoForSelectedToys;
    NSArray *_applicableToyHostingViewControllers;
}

+ (id)contextWithMenuInfo:(long long)arg1 applicableToyHostingViewControllers:(id)arg2;
@property(retain) NSArray *applicableToyHostingViewControllers; // @synthesize applicableToyHostingViewControllers=_applicableToyHostingViewControllers;
@property long long menuInfoForSelectedToys; // @synthesize menuInfoForSelectedToys=_menuInfoForSelectedToys;
- (void).cxx_destruct;

@end
