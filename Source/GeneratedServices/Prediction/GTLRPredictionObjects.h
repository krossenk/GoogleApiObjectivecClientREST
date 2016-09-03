// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Prediction API (prediction/v1.6)
// Description:
//   Lets you access a cloud hosted machine learning service that makes it easy
//   to build smart apps
// Documentation:
//   https://developers.google.com/prediction/docs/developer-guide

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRPrediction_AnalyzeDataDescription;
@class GTLRPrediction_AnalyzeDataDescriptionFeaturesItem;
@class GTLRPrediction_AnalyzeDataDescriptionFeaturesItemCategorical;
@class GTLRPrediction_AnalyzeDataDescriptionFeaturesItemCategoricalValuesItem;
@class GTLRPrediction_AnalyzeDataDescriptionFeaturesItemNumeric;
@class GTLRPrediction_AnalyzeDataDescriptionFeaturesItemText;
@class GTLRPrediction_AnalyzeDataDescriptionOutputFeature;
@class GTLRPrediction_AnalyzeDataDescriptionOutputFeatureNumeric;
@class GTLRPrediction_AnalyzeDataDescriptionOutputFeatureTextItem;
@class GTLRPrediction_AnalyzeErrorsItem;
@class GTLRPrediction_AnalyzeModelDescription;
@class GTLRPrediction_AnalyzeModelDescriptionConfusionMatrix;
@class GTLRPrediction_AnalyzeModelDescriptionConfusionMatrixConfusionMatrix;
@class GTLRPrediction_AnalyzeModelDescriptionConfusionMatrixRowTotals;
@class GTLRPrediction_InputInput;
@class GTLRPrediction_Insert2;
@class GTLRPrediction_Insert2ModelInfo;
@class GTLRPrediction_InsertTrainingInstancesItem;
@class GTLRPrediction_InsertUtilityItem;
@class GTLRPrediction_OutputOutputMultiItem;

NS_ASSUME_NONNULL_BEGIN

/**
 *  GTLRPrediction_Analyze
 */
@interface GTLRPrediction_Analyze : GTLRObject

/** Description of the data the model was trained on. */
@property(nonatomic, strong, nullable) GTLRPrediction_AnalyzeDataDescription *dataDescription;

/** List of errors with the data. */
@property(nonatomic, strong, nullable) NSArray<GTLRPrediction_AnalyzeErrorsItem *> *errors;

/**
 *  The unique name for the predictive model.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** What kind of resource this is. */
@property(nonatomic, copy, nullable) NSString *kind;

/** Description of the model. */
@property(nonatomic, strong, nullable) GTLRPrediction_AnalyzeModelDescription *modelDescription;

/** A URL to re-request this resource. */
@property(nonatomic, copy, nullable) NSString *selfLink;

@end


/**
 *  Description of the data the model was trained on.
 */
@interface GTLRPrediction_AnalyzeDataDescription : GTLRObject

/** Description of the input features in the data set. */
@property(nonatomic, strong, nullable) NSArray<GTLRPrediction_AnalyzeDataDescriptionFeaturesItem *> *features;

/** Description of the output value or label. */
@property(nonatomic, strong, nullable) GTLRPrediction_AnalyzeDataDescriptionOutputFeature *outputFeature;

@end


/**
 *  GTLRPrediction_AnalyzeErrorsItem
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRPrediction_AnalyzeErrorsItem : GTLRObject
@end


/**
 *  Description of the model.
 */
@interface GTLRPrediction_AnalyzeModelDescription : GTLRObject

/**
 *  An output confusion matrix. This shows an estimate for how this model will
 *  do in predictions. This is first indexed by the true class label. For each
 *  true class label, this provides a pair {predicted_label, count}, where count
 *  is the estimated number of times the model will predict the predicted label
 *  given the true label. Will not output if more then 100 classes (Categorical
 *  models only).
 */
@property(nonatomic, strong, nullable) GTLRPrediction_AnalyzeModelDescriptionConfusionMatrix *confusionMatrix;

/** A list of the confusion matrix row totals. */
@property(nonatomic, strong, nullable) GTLRPrediction_AnalyzeModelDescriptionConfusionMatrixRowTotals *confusionMatrixRowTotals;

/** Basic information about the model. */
@property(nonatomic, strong, nullable) GTLRPrediction_Insert2 *modelinfo;

@end


/**
 *  GTLRPrediction_AnalyzeDataDescriptionFeaturesItem
 */
@interface GTLRPrediction_AnalyzeDataDescriptionFeaturesItem : GTLRObject

/** Description of the categorical values of this feature. */
@property(nonatomic, strong, nullable) GTLRPrediction_AnalyzeDataDescriptionFeaturesItemCategorical *categorical;

/**
 *  The feature index.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *index;

/** Description of the numeric values of this feature. */
@property(nonatomic, strong, nullable) GTLRPrediction_AnalyzeDataDescriptionFeaturesItemNumeric *numeric;

/** Description of multiple-word text values of this feature. */
@property(nonatomic, strong, nullable) GTLRPrediction_AnalyzeDataDescriptionFeaturesItemText *text;

@end


/**
 *  Description of the output value or label.
 */
@interface GTLRPrediction_AnalyzeDataDescriptionOutputFeature : GTLRObject

/** Description of the output values in the data set. */
@property(nonatomic, strong, nullable) GTLRPrediction_AnalyzeDataDescriptionOutputFeatureNumeric *numeric;

/** Description of the output labels in the data set. */
@property(nonatomic, strong, nullable) NSArray<GTLRPrediction_AnalyzeDataDescriptionOutputFeatureTextItem *> *text;

@end


/**
 *  An output confusion matrix. This shows an estimate for how this model will
 *  do in predictions. This is first indexed by the true class label. For each
 *  true class label, this provides a pair {predicted_label, count}, where count
 *  is the estimated number of times the model will predict the predicted label
 *  given the true label. Will not output if more then 100 classes (Categorical
 *  models only).
 *
 *  @note This class is documented as having more properties of
 *        GTLRPrediction_AnalyzeModelDescriptionConfusionMatrixConfusionMatrix.
 *        Use @c -additionalJSONKeys and @c -additionalPropertyForName: to get
 *        the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRPrediction_AnalyzeModelDescriptionConfusionMatrix : GTLRObject
@end


/**
 *  A list of the confusion matrix row totals.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRPrediction_AnalyzeModelDescriptionConfusionMatrixRowTotals : GTLRObject
@end


/**
 *  Description of the categorical values of this feature.
 */
@interface GTLRPrediction_AnalyzeDataDescriptionFeaturesItemCategorical : GTLRObject

/**
 *  Number of categorical values for this feature in the data.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *count;

/** List of all the categories for this feature in the data set. */
@property(nonatomic, strong, nullable) NSArray<GTLRPrediction_AnalyzeDataDescriptionFeaturesItemCategoricalValuesItem *> *values;

@end


/**
 *  Description of the numeric values of this feature.
 */
@interface GTLRPrediction_AnalyzeDataDescriptionFeaturesItemNumeric : GTLRObject

/**
 *  Number of numeric values for this feature in the data set.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *count;

/** Mean of the numeric values of this feature in the data set. */
@property(nonatomic, copy, nullable) NSString *mean;

/** Variance of the numeric values of this feature in the data set. */
@property(nonatomic, copy, nullable) NSString *variance;

@end


/**
 *  Description of multiple-word text values of this feature.
 */
@interface GTLRPrediction_AnalyzeDataDescriptionFeaturesItemText : GTLRObject

/**
 *  Number of multiple-word text values for this feature.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *count;

@end


/**
 *  Description of the output values in the data set.
 */
@interface GTLRPrediction_AnalyzeDataDescriptionOutputFeatureNumeric : GTLRObject

/**
 *  Number of numeric output values in the data set.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *count;

/** Mean of the output values in the data set. */
@property(nonatomic, copy, nullable) NSString *mean;

/** Variance of the output values in the data set. */
@property(nonatomic, copy, nullable) NSString *variance;

@end


/**
 *  GTLRPrediction_AnalyzeDataDescriptionOutputFeatureTextItem
 */
@interface GTLRPrediction_AnalyzeDataDescriptionOutputFeatureTextItem : GTLRObject

/**
 *  Number of times the output label occurred in the data set.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *count;

/** The output label. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  Confusion matrix information for the true class label.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRPrediction_AnalyzeModelDescriptionConfusionMatrixConfusionMatrix : GTLRObject
@end


/**
 *  GTLRPrediction_AnalyzeDataDescriptionFeaturesItemCategoricalValuesItem
 */
@interface GTLRPrediction_AnalyzeDataDescriptionFeaturesItemCategoricalValuesItem : GTLRObject

/**
 *  Number of times this feature had this value.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *count;

/** The category name. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  GTLRPrediction_Input
 */
@interface GTLRPrediction_Input : GTLRObject

/** Input to the model for a prediction. */
@property(nonatomic, strong, nullable) GTLRPrediction_InputInput *input;

@end


/**
 *  Input to the model for a prediction.
 */
@interface GTLRPrediction_InputInput : GTLRObject

/**
 *  A list of input features, these can be strings or doubles.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) NSArray *csvInstance;

@end


/**
 *  GTLRPrediction_Insert
 */
@interface GTLRPrediction_Insert : GTLRObject

/**
 *  The unique name for the predictive model.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Type of predictive model (classification or regression). */
@property(nonatomic, copy, nullable) NSString *modelType;

/** The Id of the model to be copied over. */
@property(nonatomic, copy, nullable) NSString *sourceModel;

/** Google storage location of the training data file. */
@property(nonatomic, copy, nullable) NSString *storageDataLocation;

/** Google storage location of the preprocessing pmml file. */
@property(nonatomic, copy, nullable) NSString *storagePMMLLocation;

/** Google storage location of the pmml model file. */
@property(nonatomic, copy, nullable) NSString *storagePMMLModelLocation;

/** Instances to train model on. */
@property(nonatomic, strong, nullable) NSArray<GTLRPrediction_InsertTrainingInstancesItem *> *trainingInstances;

/**
 *  A class weighting function, which allows the importance weights for class
 *  labels to be specified (Categorical models only).
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPrediction_InsertUtilityItem *> *utility;

@end


/**
 *  GTLRPrediction_InsertTrainingInstancesItem
 */
@interface GTLRPrediction_InsertTrainingInstancesItem : GTLRObject

/**
 *  The input features for this instance.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) NSArray *csvInstance;

/** The generic output value - could be regression or class label. */
@property(nonatomic, copy, nullable) NSString *output;

@end


/**
 *  Class label (string).
 *
 *  @note This class is documented as having more properties of NSNumber (Uses
 *        NSNumber of doubleValue.). Use @c -additionalJSONKeys and @c
 *        -additionalPropertyForName: to get the list of properties and then
 *        fetch them; or @c -additionalProperties to fetch them all at once.
 */
@interface GTLRPrediction_InsertUtilityItem : GTLRObject
@end


/**
 *  GTLRPrediction_Insert2
 */
@interface GTLRPrediction_Insert2 : GTLRObject

/** Insert time of the model (as a RFC 3339 timestamp). */
@property(nonatomic, strong, nullable) GTLRDateTime *created;

/**
 *  The unique name for the predictive model.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** What kind of resource this is. */
@property(nonatomic, copy, nullable) NSString *kind;

/** Model metadata. */
@property(nonatomic, strong, nullable) GTLRPrediction_Insert2ModelInfo *modelInfo;

/** Type of predictive model (CLASSIFICATION or REGRESSION). */
@property(nonatomic, copy, nullable) NSString *modelType;

/** A URL to re-request this resource. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/** Google storage location of the training data file. */
@property(nonatomic, copy, nullable) NSString *storageDataLocation;

/** Google storage location of the preprocessing pmml file. */
@property(nonatomic, copy, nullable) NSString *storagePMMLLocation;

/** Google storage location of the pmml model file. */
@property(nonatomic, copy, nullable) NSString *storagePMMLModelLocation;

/** Training completion time (as a RFC 3339 timestamp). */
@property(nonatomic, strong, nullable) GTLRDateTime *trainingComplete;

/**
 *  The current status of the training job. This can be one of following:
 *  RUNNING; DONE; ERROR; ERROR: TRAINING JOB NOT FOUND
 */
@property(nonatomic, copy, nullable) NSString *trainingStatus;

@end


/**
 *  Model metadata.
 */
@interface GTLRPrediction_Insert2ModelInfo : GTLRObject

/**
 *  A number between 0.0 and 1.0, where 1.0 is 100% accurate. This is an
 *  estimate, based on the amount and quality of the training data, of the
 *  estimated prediction accuracy. You can use this is a guide to decide whether
 *  the results are accurate enough for your needs. This estimate will be more
 *  reliable if your real input data is similar to your training data
 *  (Categorical models only).
 */
@property(nonatomic, copy, nullable) NSString *classificationAccuracy;

/**
 *  Estimated accuracy of model taking utility weights into account (Categorical
 *  models only).
 */
@property(nonatomic, copy, nullable) NSString *classWeightedAccuracy;

/**
 *  An estimated mean squared error. The can be used to measure the quality of
 *  the predicted model (Regression models only).
 */
@property(nonatomic, copy, nullable) NSString *meanSquaredError;

/** Type of predictive model (CLASSIFICATION or REGRESSION). */
@property(nonatomic, copy, nullable) NSString *modelType;

/**
 *  Number of valid data instances used in the trained model.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *numberInstances;

/**
 *  Number of class labels in the trained model (Categorical models only).
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *numberLabels;

@end


/**
 *  GTLRPrediction_List
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRPrediction_List : GTLRCollectionObject

/**
 *  List of models.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPrediction_Insert2 *> *items;

/** What kind of resource this is. */
@property(nonatomic, copy, nullable) NSString *kind;

/** Pagination token to fetch the next page, if one exists. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/** A URL to re-request this resource. */
@property(nonatomic, copy, nullable) NSString *selfLink;

@end


/**
 *  GTLRPrediction_Output
 */
@interface GTLRPrediction_Output : GTLRObject

/**
 *  The unique name for the predictive model.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** What kind of resource this is. */
@property(nonatomic, copy, nullable) NSString *kind;

/** The most likely class label (Categorical models only). */
@property(nonatomic, copy, nullable) NSString *outputLabel;

/**
 *  A list of class labels with their estimated probabilities (Categorical
 *  models only).
 */
@property(nonatomic, strong, nullable) NSArray<GTLRPrediction_OutputOutputMultiItem *> *outputMulti;

/** The estimated regression value (Regression models only). */
@property(nonatomic, copy, nullable) NSString *outputValue;

/** A URL to re-request this resource. */
@property(nonatomic, copy, nullable) NSString *selfLink;

@end


/**
 *  GTLRPrediction_OutputOutputMultiItem
 */
@interface GTLRPrediction_OutputOutputMultiItem : GTLRObject

/** The class label. */
@property(nonatomic, copy, nullable) NSString *label;

/** The probability of the class label. */
@property(nonatomic, copy, nullable) NSString *score;

@end


/**
 *  GTLRPrediction_Update
 */
@interface GTLRPrediction_Update : GTLRObject

/**
 *  The input features for this instance.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) NSArray *csvInstance;

/** The generic output value - could be regression or class label. */
@property(nonatomic, copy, nullable) NSString *output;

@end

NS_ASSUME_NONNULL_END
