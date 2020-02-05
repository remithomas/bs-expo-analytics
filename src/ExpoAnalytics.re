type parameters;

type options;

type pageHit;
[@bs.module "expo-analytics"][@bs.new] external createPageHit: string => pageHit = "PageHit";

type screenHit;
[@bs.module "expo-analytics"][@bs.new] external createScreenHit: string => screenHit = "ScreenHit";

type event;
[@bs.module "expo-analytics"][@bs.new] external createEvent: (
  ~category: string,
  ~action: string,
  ~label: string=?,
  ~value: int=?,
  unit
) => event = "Event";

type analytics;
[@bs.module "expo-analytics"][@bs.new] external createAnalytics: (
  ~trackingId: string,
  ~parameters: parameters=?,
  ~options: options=?,
  unit
) => analytics = "Analytics";

[@bs.send] external hitPage: (analytics, pageHit) => Js.Promise.t(unit) = "hit";
[@bs.send] external hitScreen: (analytics, screenHit) => Js.Promise.t(unit) = "hit";

[@bs.send] external event: (analytics, event) => Js.Promise.t(unit) = "event";

[@bs.send] external addCustomDimension: (analytics, int, string) => unit = "addCustomDimension";
[@bs.send] external removeCustomDimension: (analytics, int) => unit = "removeCustomDimension";

[@bs.send] external addCustomMetric: (analytics, int, int) => unit = "addCustomMetric";
[@bs.send] external removeCustomMetric: (analytics, int) => unit = "removeCustomMetric";
