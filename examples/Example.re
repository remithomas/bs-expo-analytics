let analytics = ExpoAnalytics.createAnalytics(~trackingId="UA-xxxx", ());

let pageHit = ExpoAnalytics.createPageHit("Home");
let screenHit = ExpoAnalytics.createScreenHit("Home");

let event = ExpoAnalytics.createEvent(~category="testy", ~action="you", ~value=123, ());

ExpoAnalytics.event(analytics, event);
ExpoAnalytics.hitPage(analytics, pageHit);
ExpoAnalytics.hitScreen(analytics, screenHit);
