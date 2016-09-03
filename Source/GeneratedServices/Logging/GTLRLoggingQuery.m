// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Logging API (logging/v2beta1)
// Description:
//   Writes log entries and manages your logs, log sinks, and logs-based
//   metrics.
// Documentation:
//   https://cloud.google.com/logging/docs/

#import "GTLRLoggingQuery.h"

#import "GTLRLoggingObjects.h"

@implementation GTLRLoggingQuery

@dynamic fields;

@end

@implementation GTLRLoggingQuery_EntriesList

+ (instancetype)queryWithObject:(GTLRLogging_ListLogEntriesRequest *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"v2beta1/entries:list";
  GTLRLoggingQuery_EntriesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRLogging_ListLogEntriesResponse class];
  query.loggingName = @"logging.entries.list";
  return query;
}

@end

@implementation GTLRLoggingQuery_EntriesWrite

+ (instancetype)queryWithObject:(GTLRLogging_WriteLogEntriesRequest *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"v2beta1/entries:write";
  GTLRLoggingQuery_EntriesWrite *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRLogging_WriteLogEntriesResponse class];
  query.loggingName = @"logging.entries.write";
  return query;
}

@end

@implementation GTLRLoggingQuery_MonitoredResourceDescriptorsList

@dynamic pageSize, pageToken;

+ (instancetype)query {
  NSString *pathURITemplate = @"v2beta1/monitoredResourceDescriptors";
  GTLRLoggingQuery_MonitoredResourceDescriptorsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRLogging_ListMonitoredResourceDescriptorsResponse class];
  query.loggingName = @"logging.monitoredResourceDescriptors.list";
  return query;
}

@end

@implementation GTLRLoggingQuery_ProjectsLogsDelete

@dynamic logName;

+ (instancetype)queryWithLogName:(NSString *)logName {
  NSArray *pathParams = @[ @"logName" ];
  NSString *pathURITemplate = @"v2beta1/{+logName}";
  GTLRLoggingQuery_ProjectsLogsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.logName = logName;
  query.expectedObjectClass = [GTLRLogging_Empty class];
  query.loggingName = @"logging.projects.logs.delete";
  return query;
}

@end

@implementation GTLRLoggingQuery_ProjectsMetricsCreate

@dynamic projectName;

+ (instancetype)queryWithObject:(GTLRLogging_LogMetric *)object
                    projectName:(NSString *)projectName {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"projectName" ];
  NSString *pathURITemplate = @"v2beta1/{+projectName}/metrics";
  GTLRLoggingQuery_ProjectsMetricsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectName = projectName;
  query.expectedObjectClass = [GTLRLogging_LogMetric class];
  query.loggingName = @"logging.projects.metrics.create";
  return query;
}

@end

@implementation GTLRLoggingQuery_ProjectsMetricsDelete

@dynamic metricName;

+ (instancetype)queryWithMetricName:(NSString *)metricName {
  NSArray *pathParams = @[ @"metricName" ];
  NSString *pathURITemplate = @"v2beta1/{+metricName}";
  GTLRLoggingQuery_ProjectsMetricsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.metricName = metricName;
  query.expectedObjectClass = [GTLRLogging_Empty class];
  query.loggingName = @"logging.projects.metrics.delete";
  return query;
}

@end

@implementation GTLRLoggingQuery_ProjectsMetricsGet

@dynamic metricName;

+ (instancetype)queryWithMetricName:(NSString *)metricName {
  NSArray *pathParams = @[ @"metricName" ];
  NSString *pathURITemplate = @"v2beta1/{+metricName}";
  GTLRLoggingQuery_ProjectsMetricsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.metricName = metricName;
  query.expectedObjectClass = [GTLRLogging_LogMetric class];
  query.loggingName = @"logging.projects.metrics.get";
  return query;
}

@end

@implementation GTLRLoggingQuery_ProjectsMetricsList

@dynamic pageSize, pageToken, projectName;

+ (instancetype)queryWithProjectName:(NSString *)projectName {
  NSArray *pathParams = @[ @"projectName" ];
  NSString *pathURITemplate = @"v2beta1/{+projectName}/metrics";
  GTLRLoggingQuery_ProjectsMetricsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectName = projectName;
  query.expectedObjectClass = [GTLRLogging_ListLogMetricsResponse class];
  query.loggingName = @"logging.projects.metrics.list";
  return query;
}

@end

@implementation GTLRLoggingQuery_ProjectsMetricsUpdate

@dynamic metricName;

+ (instancetype)queryWithObject:(GTLRLogging_LogMetric *)object
                     metricName:(NSString *)metricName {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"metricName" ];
  NSString *pathURITemplate = @"v2beta1/{+metricName}";
  GTLRLoggingQuery_ProjectsMetricsUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.metricName = metricName;
  query.expectedObjectClass = [GTLRLogging_LogMetric class];
  query.loggingName = @"logging.projects.metrics.update";
  return query;
}

@end

@implementation GTLRLoggingQuery_ProjectsSinksCreate

@dynamic projectName;

+ (instancetype)queryWithObject:(GTLRLogging_LogSink *)object
                    projectName:(NSString *)projectName {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"projectName" ];
  NSString *pathURITemplate = @"v2beta1/{+projectName}/sinks";
  GTLRLoggingQuery_ProjectsSinksCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectName = projectName;
  query.expectedObjectClass = [GTLRLogging_LogSink class];
  query.loggingName = @"logging.projects.sinks.create";
  return query;
}

@end

@implementation GTLRLoggingQuery_ProjectsSinksDelete

@dynamic sinkName;

+ (instancetype)queryWithSinkName:(NSString *)sinkName {
  NSArray *pathParams = @[ @"sinkName" ];
  NSString *pathURITemplate = @"v2beta1/{+sinkName}";
  GTLRLoggingQuery_ProjectsSinksDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.sinkName = sinkName;
  query.expectedObjectClass = [GTLRLogging_Empty class];
  query.loggingName = @"logging.projects.sinks.delete";
  return query;
}

@end

@implementation GTLRLoggingQuery_ProjectsSinksGet

@dynamic sinkName;

+ (instancetype)queryWithSinkName:(NSString *)sinkName {
  NSArray *pathParams = @[ @"sinkName" ];
  NSString *pathURITemplate = @"v2beta1/{+sinkName}";
  GTLRLoggingQuery_ProjectsSinksGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.sinkName = sinkName;
  query.expectedObjectClass = [GTLRLogging_LogSink class];
  query.loggingName = @"logging.projects.sinks.get";
  return query;
}

@end

@implementation GTLRLoggingQuery_ProjectsSinksList

@dynamic pageSize, pageToken, projectName;

+ (instancetype)queryWithProjectName:(NSString *)projectName {
  NSArray *pathParams = @[ @"projectName" ];
  NSString *pathURITemplate = @"v2beta1/{+projectName}/sinks";
  GTLRLoggingQuery_ProjectsSinksList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectName = projectName;
  query.expectedObjectClass = [GTLRLogging_ListSinksResponse class];
  query.loggingName = @"logging.projects.sinks.list";
  return query;
}

@end

@implementation GTLRLoggingQuery_ProjectsSinksUpdate

@dynamic sinkName;

+ (instancetype)queryWithObject:(GTLRLogging_LogSink *)object
                       sinkName:(NSString *)sinkName {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"sinkName" ];
  NSString *pathURITemplate = @"v2beta1/{+sinkName}";
  GTLRLoggingQuery_ProjectsSinksUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.sinkName = sinkName;
  query.expectedObjectClass = [GTLRLogging_LogSink class];
  query.loggingName = @"logging.projects.sinks.update";
  return query;
}

@end
