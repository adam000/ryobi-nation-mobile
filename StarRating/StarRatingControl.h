//
//  StarRatingControl.h
//  RouteMonitor
//
//  Created by Tom Fewster on 16/03/2012.
//

#import <UIKit/UIKit.h>

@protocol StarRatingDelegate;

@interface StarRatingControl : UIControl

- (id)initWithFrame:(CGRect)frame;
- (id)initWithFrame:(CGRect)frame andStars:(NSUInteger)_numberOfStars;

@property (nonatomic, retain) UIImage *star;
@property (nonatomic, retain) UIImage *highlightedStar;
@property (assign) NSUInteger rating;
@property (nonatomic, assign) IBOutlet NSObject<StarRatingDelegate> *delegate;

@end

@protocol StarRatingDelegate

@optional
- (void)starRatingControl:(StarRatingControl *)control didUpdateRating:(NSUInteger)rating;
- (void)starRatingControl:(StarRatingControl *)control willUpdateRating:(NSUInteger)rating;

@end
