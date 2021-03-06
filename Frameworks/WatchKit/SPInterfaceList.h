//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchKit/SPInterfaceObject.h>

@class NSArray, NSDictionary;
@protocol SPInterfaceController;

@interface SPInterfaceList : SPInterfaceObject
{
    NSArray *_rowControllers;
    NSDictionary *_rowDescriptions;
    id <SPInterfaceController> _controller;
    NSArray *_rowControllerProperties;
}

@property(retain, nonatomic) NSArray *rowControllerProperties; // @synthesize rowControllerProperties=_rowControllerProperties;
@property(nonatomic) __weak id <SPInterfaceController> controller; // @synthesize controller=_controller;
@property(copy, nonatomic) NSDictionary *rowDescriptions; // @synthesize rowDescriptions=_rowDescriptions;
@property(copy, nonatomic) NSArray *rowControllers; // @synthesize rowControllers=_rowControllers;
- (void).cxx_destruct;
- (id)rowControllerAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfRows;
- (void)setRowTypes:(id)arg1;
- (void)setNumberOfRows:(long long)arg1 withRowType:(id)arg2;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;

@end

