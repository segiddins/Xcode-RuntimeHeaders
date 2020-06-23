//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMenuItem, NSString;

@interface GPUTraceCounterGraphGroupItem : NSObject
{
    BOOL _maskInCompute;
    BOOL _maskInDraw;
    int _resourceLink;
    NSArray *_subPlaneIndexes;
    NSString *_name;
    NSMenuItem *_contextMenuItem;
    unsigned long long _groupIndex;
}

- (void).cxx_destruct;
@property(nonatomic) int resourceLink; // @synthesize resourceLink=_resourceLink;
@property(nonatomic) unsigned long long groupIndex; // @synthesize groupIndex=_groupIndex;
@property(nonatomic) BOOL maskInDraw; // @synthesize maskInDraw=_maskInDraw;
@property(nonatomic) BOOL maskInCompute; // @synthesize maskInCompute=_maskInCompute;
@property(retain, nonatomic) NSMenuItem *contextMenuItem; // @synthesize contextMenuItem=_contextMenuItem;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *subPlaneIndexes; // @synthesize subPlaneIndexes=_subPlaneIndexes;

@end
