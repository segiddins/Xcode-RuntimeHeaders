//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSImage, NSString;

@interface DVTDocumentTabBarItem : NSObject
{
    MISSING_TYPE *_icon;
    MISSING_TYPE *_title;
    MISSING_TYPE *_style;
    MISSING_TYPE *_closable;
    MISSING_TYPE *representedObject;
    MISSING_TYPE *itemView;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) NSObject *representedObject; // @synthesize representedObject;
@property(nonatomic) BOOL closable;
@property(nonatomic) long long style;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, retain) NSImage *icon;

@end
