/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSManagedObject.h"

@class NSNumber, NSSet, NSString, WAChatSession;

@interface WAGroupMember : NSObject //NSManagedObject
{
    BOOL _blocked;
    NSString *_statusMessage;
}

@property(nonatomic) BOOL blocked; // @synthesize blocked=_blocked;
@property(retain, nonatomic) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
//- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) WAChatSession *chatSession; // @dynamic chatSession;
@property(retain, nonatomic) NSNumber *contactABID; // @dynamic contactABID;
@property(retain, nonatomic) NSString *contactName; // @dynamic contactName;
@property(retain, nonatomic) NSString *firstName; // @dynamic firstName;
@property(retain, nonatomic) NSNumber *isActive; // @dynamic isActive;
@property(retain, nonatomic) NSString *memberJID; // @dynamic memberJID;
@property(retain, nonatomic) NSSet *messages; // @dynamic messages;

@end

