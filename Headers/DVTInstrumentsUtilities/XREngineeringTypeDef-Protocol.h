//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, XREngineeringTypeEncodingConvention;

@protocol XREngineeringTypeDef
@property(readonly, nonatomic) XREngineeringTypeEncodingConvention *encodingConvention;
@property(readonly, nonatomic) BOOL deprecated;
@property(readonly, nonatomic) BOOL experimental;
@property(readonly, nonatomic) unsigned long long attributes;
@property(readonly, nonatomic) unsigned char impl;
@property(readonly, nonatomic) NSString *usage;
@property(readonly, nonatomic) NSString *enumString;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *mnemonic;
- (long long)conventionalBitWidth;
- (NSString *)errorStringHeader;
@end

