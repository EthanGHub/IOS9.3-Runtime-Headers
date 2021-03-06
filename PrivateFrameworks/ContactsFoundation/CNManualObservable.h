//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class NSMutableArray, NSString;

@interface CNManualObservable : CNObservable <CNObserver>
{
    NSMutableArray *_observers;
}

- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (id)_allObservers;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (id)subscribe:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

