// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Calendar API (calendar/v3)
// Description:
//   Manipulates events and other calendar data.
// Documentation:
//   https://developers.google.com/google-apps/calendar/firstapp

#import "GTLRCalendarObjects.h"

// ----------------------------------------------------------------------------
//
//   GTLRCalendar_Acl
//

@implementation GTLRCalendar_Acl
@dynamic ETag, items, kind, nextPageToken, nextSyncToken;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRCalendar_AclRule class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_AclRule
//

@implementation GTLRCalendar_AclRule
@dynamic ETag, identifier, kind, role, scope;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_AclRuleScope
//

@implementation GTLRCalendar_AclRuleScope
@dynamic type, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_Calendar
//

@implementation GTLRCalendar_Calendar
@dynamic descriptionProperty, ETag, identifier, kind, location, summary,
         timeZone;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_CalendarList
//

@implementation GTLRCalendar_CalendarList
@dynamic ETag, items, kind, nextPageToken, nextSyncToken;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRCalendar_CalendarListEntry class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_CalendarListEntry
//

@implementation GTLRCalendar_CalendarListEntry
@dynamic accessRole, backgroundColor, colorId, defaultReminders, deleted,
         descriptionProperty, ETag, foregroundColor, hidden, identifier, kind,
         location, notificationSettings, primary, selected, summary,
         summaryOverride, timeZone;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"defaultReminders" : [GTLRCalendar_EventReminder class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_CalendarListEntryNotificationSettings
//

@implementation GTLRCalendar_CalendarListEntryNotificationSettings
@dynamic notifications;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"notifications" : [GTLRCalendar_Notification class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_Channel
//

@implementation GTLRCalendar_Channel
@dynamic address, expiration, identifier, kind, params, payload, resourceId,
         resourceUri, token, type;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_ChannelParams
//

@implementation GTLRCalendar_ChannelParams

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_ColorDefinition
//

@implementation GTLRCalendar_ColorDefinition
@dynamic background, foreground;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_Colors
//

@implementation GTLRCalendar_Colors
@dynamic calendar, event, kind, updated;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_ColorsCalendar
//

@implementation GTLRCalendar_ColorsCalendar

+ (Class)classForAdditionalProperties {
  return [GTLRCalendar_ColorDefinition class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_ColorsEvent
//

@implementation GTLRCalendar_ColorsEvent

+ (Class)classForAdditionalProperties {
  return [GTLRCalendar_ColorDefinition class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_Error
//

@implementation GTLRCalendar_Error
@dynamic domain, reason;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_Event
//

@implementation GTLRCalendar_Event
@dynamic anyoneCanAddSelf, attachments, attendees, attendeesOmitted, colorId,
         created, creator, descriptionProperty, end, endTimeUnspecified, ETag,
         extendedProperties, gadget, guestsCanInviteOthers, guestsCanModify,
         guestsCanSeeOtherGuests, hangoutLink, htmlLink, iCalUID, identifier,
         kind, location, locked, organizer, originalStartTime, privateCopy,
         recurrence, recurringEventId, reminders, sequence, source, start,
         status, summary, transparency, updated, visibility;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"attachments" : [GTLRCalendar_EventAttachment class],
    @"attendees" : [GTLRCalendar_EventAttendee class],
    @"recurrence" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_EventCreator
//

@implementation GTLRCalendar_EventCreator
@dynamic displayName, email, identifier, selfProperty;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"identifier" : @"id",
    @"selfProperty" : @"self"
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_EventExtendedProperties
//

@implementation GTLRCalendar_EventExtendedProperties
@dynamic privateProperty, shared;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"privateProperty" : @"private" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_EventGadget
//

@implementation GTLRCalendar_EventGadget
@dynamic display, height, iconLink, link, preferences, title, type, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_EventOrganizer
//

@implementation GTLRCalendar_EventOrganizer
@dynamic displayName, email, identifier, selfProperty;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"identifier" : @"id",
    @"selfProperty" : @"self"
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_EventReminders
//

@implementation GTLRCalendar_EventReminders
@dynamic overrides, useDefault;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"overrides" : [GTLRCalendar_EventReminder class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_EventSource
//

@implementation GTLRCalendar_EventSource
@dynamic title, url;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_EventExtendedPropertiesPrivate
//

@implementation GTLRCalendar_EventExtendedPropertiesPrivate

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_EventExtendedPropertiesShared
//

@implementation GTLRCalendar_EventExtendedPropertiesShared

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_EventGadgetPreferences
//

@implementation GTLRCalendar_EventGadgetPreferences

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_EventAttachment
//

@implementation GTLRCalendar_EventAttachment
@dynamic fileId, fileUrl, iconLink, mimeType, title;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_EventAttendee
//

@implementation GTLRCalendar_EventAttendee
@dynamic additionalGuests, comment, displayName, email, identifier, optional,
         organizer, resource, responseStatus, selfProperty;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"identifier" : @"id",
    @"selfProperty" : @"self"
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_EventDateTime
//

@implementation GTLRCalendar_EventDateTime
@dynamic date, dateTime, timeZone;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_EventReminder
//

@implementation GTLRCalendar_EventReminder
@dynamic method, minutes;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_Events
//

@implementation GTLRCalendar_Events
@dynamic accessRole, defaultReminders, descriptionProperty, ETag, items, kind,
         nextPageToken, nextSyncToken, summary, timeZone, updated;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"ETag" : @"etag"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"defaultReminders" : [GTLRCalendar_EventReminder class],
    @"items" : [GTLRCalendar_Event class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_FreeBusyCalendar
//

@implementation GTLRCalendar_FreeBusyCalendar
@dynamic busy, errors;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"busy" : [GTLRCalendar_TimePeriod class],
    @"errors" : [GTLRCalendar_Error class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_FreeBusyGroup
//

@implementation GTLRCalendar_FreeBusyGroup
@dynamic calendars, errors;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"calendars" : [NSString class],
    @"errors" : [GTLRCalendar_Error class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_FreeBusyRequest
//

@implementation GTLRCalendar_FreeBusyRequest
@dynamic calendarExpansionMax, groupExpansionMax, items, timeMax, timeMin,
         timeZone;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRCalendar_FreeBusyRequestItem class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_FreeBusyRequestItem
//

@implementation GTLRCalendar_FreeBusyRequestItem
@dynamic identifier;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_FreeBusyResponse
//

@implementation GTLRCalendar_FreeBusyResponse
@dynamic calendars, groups, kind, timeMax, timeMin;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_FreeBusyResponseCalendars
//

@implementation GTLRCalendar_FreeBusyResponseCalendars

+ (Class)classForAdditionalProperties {
  return [GTLRCalendar_FreeBusyCalendar class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_FreeBusyResponseGroups
//

@implementation GTLRCalendar_FreeBusyResponseGroups

+ (Class)classForAdditionalProperties {
  return [GTLRCalendar_FreeBusyGroup class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_Notification
//

@implementation GTLRCalendar_Notification
@dynamic method, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_Setting
//

@implementation GTLRCalendar_Setting
@dynamic ETag, identifier, kind, value;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_Settings
//

@implementation GTLRCalendar_Settings
@dynamic ETag, items, kind, nextPageToken, nextSyncToken;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRCalendar_Setting class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCalendar_TimePeriod
//

@implementation GTLRCalendar_TimePeriod
@dynamic end, start;
@end
