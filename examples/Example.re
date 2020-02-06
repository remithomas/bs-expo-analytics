let analytics = Analytics.createAnalytics(~trackingId="UA-xxxx", ());

let pageHit = Analytics.createPageHit("Home");
let screenHit = Analytics.createScreenHit("Home");

let event = Analytics.createEvent(~category="testy", ~action="you", ~value=123, ());

Analytics.event(analytics, event);
Analytics.hitPage(analytics, pageHit);
Analytics.hitScreen(analytics, screenHit);
