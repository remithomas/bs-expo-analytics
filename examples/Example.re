let analytics = Analytics.createAnalytics(~trackingId="UA-xxxx", ());

let pageHit = Analytics.createPageHit("HomePage");
let screenHit = Analytics.createScreenHit("HomeScreen");

let event = Analytics.createEvent(~category="testy", ~action="you", ~value=123, ());

Analytics.event(analytics, event);

Analytics.hitPage(analytics, pageHit);

Js.Promise.(
    Analytics.hitScreen(analytics, screenHit)
    |> then_((_) => {
      Js.log("success screen hit");
      Js.Promise.resolve();
    })
    |> catch((error) => {
      Js.log(error);
      Js.Promise.resolve();
    })
  );
